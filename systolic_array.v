// =============================================================================
// systolic_array.v
// 2D Weight-Stationary Systolic Array for Matrix Multiplication
//
// Computes: C = A x B  where A, B are N x N matrices
//
// Data Flow (Weight-Stationary):
//   - Weights B[r][c] are preloaded into PE[r][c] before compute begins
//   - Activations (rows of A) stream in from the LEFT, flow RIGHT
//   - Partial sums flow DOWN, accumulate vertically
//   - Row r of activations is skewed by r flip-flop stages at the input
//
// Port convention:
//   - Weight loading: assert weight_load, drive weight_row_sel to select
//     which row to load, drive weight_data[c] with B[weight_row_sel][c]
//   - Compute: deassert weight_load, drive act_col_in[r] each cycle
//     (pre-skewed externally OR use built-in skew — see SKEW_EN parameter)
//   - Output: psum_out[c] at the bottom of column c, valid after N+2*N-1 cycles
//
// Parameters:
//   N        - Array dimension (N x N PEs, computes N x N matmul)
//   DATA_W   - Bit-width of activation and weight inputs
//   PSUM_W   - Bit-width of partial sums (default: 2*DATA_W + log2(N) headroom)
//   SKEW_EN  - 1: internal skew registers on act inputs (recommended)
//              0: caller must pre-skew act_col_in externally
//
// Timing:
//   - Weight load:   N cycles (one row per cycle, weight_row_sel increments)
//   - Pipeline fill: N-1 cycles (skew latency)
//   - Compute:       N cycles
//   - Total latency: 2N-1 cycles from first activation to last psum valid
//
// =============================================================================

`timescale 1ns/1ps

module systolic_array #(
    parameter N       = 4,
    parameter DATA_W  = 8,
    parameter PSUM_W  = DATA_W * 2 + 4,   // supports up to 16x16 with 8-bit data
    parameter SKEW_EN = 1                  // enable internal input skew registers
)(
    input  wire clk,
    input  wire reset,

    // -------------------------------------------------------------------------
    // Weight loading interface
    // Assert weight_load for N consecutive cycles.
    // Each cycle, set weight_row_sel = row index being loaded (0 to N-1),
    // and drive weight_data[c] = B[weight_row_sel][c] for all columns c.
    // -------------------------------------------------------------------------
    input  wire                        weight_load,
    input  wire [$clog2(N)-1:0]        weight_row_sel,
    input  wire [N*DATA_W-1:0]         weight_data,    // flattened: {B[r][N-1],...,B[r][0]}

    // -------------------------------------------------------------------------
    // Activation input (one value per row, per cycle)
    // If SKEW_EN=1: drive act_col_in[r] with A[r][t] at cycle t for all r.
    //   The internal skew registers delay row r by r cycles automatically.
    // If SKEW_EN=0: caller must pre-skew. Row r input at cycle t+r carries A[r][t].
    // -------------------------------------------------------------------------
    input  wire [N*DATA_W-1:0]         act_col_in,     // flattened: {A[N-1][t],...,A[0][t]}

    // -------------------------------------------------------------------------
    // Partial sum output (bottom edge of array, one per column)
    // psum_out[c] holds C[N-1][c]... wait, no: each column c accumulates
    // independently. The final output C[r][c] lives in PE[r][c].psum_out
    // after the full computation. For external access we expose both:
    //   psum_bottom_out: the psum flowing OUT of the bottom of the array (row N-1)
    //   psum_array_out:  flat dump of all PE psum_out values (for verification)
    // -------------------------------------------------------------------------
    output wire [N*PSUM_W-1:0]         psum_bottom_out,  // bottom-edge partial sums
    output wire [N*N*PSUM_W-1:0]       psum_array_out    // full array dump [r][c]
);

    // =========================================================================
    // Internal wire meshes
    //
    // act_h[r][c]: activation wire at column c of row r
    //   act_h[r][0]   = skewed input for row r  (from skew chain or direct)
    //   act_h[r][N]   = act_out of the last PE in row r (unused, can be captured)
    //
    // psum_v[r][c]: partial sum wire at row r of column c
    //   psum_v[0][c]  = 0  (no partial sum enters from above row 0)
    //   psum_v[N][c]  = psum_out of the last PE in column c → psum_bottom_out
    // =========================================================================
    wire [DATA_W-1:0]  act_h  [0:N-1][0:N];   // [row][col_boundary]
    wire [PSUM_W-1:0]  psum_v [0:N]  [0:N-1]; // [row_boundary][col]

    // =========================================================================
    // Input skew registers (SKEW_EN = 1)
    // Row r is delayed by r flip-flop stages.
    // act_skew[r][stage] holds the signal after `stage` delay registers.
    // =========================================================================
    generate
        genvar r_sk, stage;
        if (SKEW_EN) begin : g_skew
            // skew_chain[r][s]: wire after s delay stages for row r
            // s=0 is the raw input, s=r is the skewed output fed to PE column 0
            wire [DATA_W-1:0] skew_chain [0:N-1][0:N-1]; // [row][stage 0..N-1]
            reg  [DATA_W-1:0] skew_reg   [0:N-1][0:N-2]; // flip-flops for stages 1..N-1

            for (r_sk = 0; r_sk < N; r_sk = r_sk + 1) begin : g_skew_row
                // Stage 0: raw input
                assign skew_chain[r_sk][0] = act_col_in[r_sk*DATA_W +: DATA_W];

                // Stages 1..r_sk: one flip-flop each
                for (stage = 1; stage <= r_sk; stage = stage + 1) begin : g_skew_stage
                    always @(posedge clk) begin
                        if (reset)
                            skew_reg[r_sk][stage-1] <= {DATA_W{1'b0}};
                        else
                            skew_reg[r_sk][stage-1] <= skew_chain[r_sk][stage-1];
                    end
                    assign skew_chain[r_sk][stage] = skew_reg[r_sk][stage-1];
                end

                // Connect skewed output to left edge of PE row
                assign act_h[r_sk][0] = skew_chain[r_sk][r_sk];
            end
        end else begin : g_no_skew
            // Caller handles skewing externally
            for (r_sk = 0; r_sk < N; r_sk = r_sk + 1) begin : g_direct
                assign act_h[r_sk][0] = act_col_in[r_sk*DATA_W +: DATA_W];
            end
        end
    endgenerate

    // =========================================================================
    // Top boundary: zero partial sums entering from above row 0
    // =========================================================================
    generate
        genvar c_top;
        for (c_top = 0; c_top < N; c_top = c_top + 1) begin : g_psum_top
            assign psum_v[0][c_top] = {PSUM_W{1'b0}};
        end
    endgenerate

    // =========================================================================
    // PE grid instantiation
    // PE[r][c] connects:
    //   act_in   <- act_h[r][c]       (from left neighbour or skew input)
    //   act_out  -> act_h[r][c+1]     (to right neighbour)
    //   psum_in  <- psum_v[r][c]      (from PE above, or 0 for row 0)
    //   psum_out -> psum_v[r+1][c]    (to PE below, or to output for row N-1)
    //
    // Weight loading:
    //   weight_load active when weight_row_sel == r (this PE's row is selected)
    //   weight_in   = weight_data[c*DATA_W +: DATA_W]
    // =========================================================================
    generate
        genvar r, c;
        for (r = 0; r < N; r = r + 1) begin : g_row
            for (c = 0; c < N; c = c + 1) begin : g_col
                PE #(
                    .DATA_W (DATA_W),
                    .PSUM_W (PSUM_W)
                ) pe_inst (
                    .clk         (clk),
                    .reset       (reset),

                    // Weight load: only this row's PEs see weight_load high
                    .weight_load (weight_load && (weight_row_sel == r[$clog2(N)-1:0])),
                    .weight_in   (weight_data[c*DATA_W +: DATA_W]),

                    // Horizontal activation chain
                    .act_in      (act_h[r][c]),
                    .act_out     (act_h[r][c+1]),

                    // Vertical partial sum chain
                    .psum_in     (psum_v[r][c]),
                    .psum_out    (psum_v[r+1][c])
                );
            end
        end
    endgenerate

    // =========================================================================
    // Output assignments
    // =========================================================================

    // Bottom-edge partial sums (exiting the array after row N-1)
    generate
        genvar c_out;
        for (c_out = 0; c_out < N; c_out = c_out + 1) begin : g_psum_out
            assign psum_bottom_out[c_out*PSUM_W +: PSUM_W] = psum_v[N][c_out];
        end
    endgenerate

    // Full array psum dump for verification (row-major: [r*N+c])
    generate
        genvar r_dbg, c_dbg;
        for (r_dbg = 0; r_dbg < N; r_dbg = r_dbg + 1) begin : g_dbg_row
            for (c_dbg = 0; c_dbg < N; c_dbg = c_dbg + 1) begin : g_dbg_col
                assign psum_array_out[(r_dbg*N + c_dbg)*PSUM_W +: PSUM_W] =
                       psum_v[r_dbg+1][c_dbg];
            end
        end
    endgenerate

endmodule