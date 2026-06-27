module PE #(
    parameter DATA_W = 8,
    parameter PSUM_W = DATA_W * 2 + 4
)(
    input wire clk,
    input wire reset,

    // Weight loading (Weight Stationary)
    input wire weight_load,
    input wire [DATA_W-1:0] weight_in,

    //Systolic Array
    input wire [DATA_W-1:0] act_in,
    input wire [PSUM_W-1:0] psum_in,

    output reg [DATA_W-1:0] act_out,
    output reg [PSUM_W-1:0] psum_out
);
    reg [DATA_W-1:0] weight;

    always @(posedge clk) begin
        if (reset) begin
            weight   <= '0;
            act_out  <= '0;
            psum_out <= '0;
        end 
        else begin
            // Load weight when enabled
            if (weight_load)
                weight <= weight_in;

            // Shift activation to the right (systolic wave)
            act_out <= act_in;

            // MAC
            psum_out <= psum_in + (act_in * weight);
        end
    end

endmodule