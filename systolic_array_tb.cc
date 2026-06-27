#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsystolic_array.h"
#include <iostream>
#include <vector>
#include <iomanip>

#define N 4

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vsystolic_array* top = new Vsystolic_array;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("systolic_array.vcd");

    uint64_t main_time = 0;
    int cycle = 0;
    
    auto tick = [&]() {
        top->clk = 0;
        top->eval();
        tfp->dump(main_time++);
        
        top->clk = 1;
        top->eval();
        tfp->dump(main_time++);
        cycle++;
    };

    // A and B matrices
    int A[N][N];
    int B[N][N];
    long long C_expected[N][N];
    long long C_actual[N][N];

    // Initialize with some data
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = i * N + j + 1; // 1 to 16
            B[i][j] = (i * N + j + 1) * 2; // 2 to 32
            C_actual[i][j] = 0;
            C_expected[i][j] = 0;
        }
    }

    // Compute expected C = A * B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C_expected[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Initialize inputs
    top->reset = 1;
    top->weight_load = 0;
    top->act_col_in = 0;
    
    // Reset for 2 cycles
    tick(); 
    tick(); 
    top->reset = 0;

    // Load Weights
    for (int r = 0; r < N; r++) {
        top->weight_load = 1;
        top->weight_row_sel = r;
        uint32_t w_data = 0;
        for (int c = 0; c < N; c++) {
            w_data |= (B[r][c] & 0xFF) << (c * 8);
        }
        top->weight_data = w_data;
        tick();
    }
    top->weight_load = 0;

    int t_start = cycle; // Record cycle when activation streaming begins

    // Stream Activations and capture Outputs
    for (int t = 0; t < 4 * N; t++) {
        // Drive activation inputs
        uint32_t a_data = 0;
        if (t < N) {
            for (int r = 0; r < N; r++) {
                a_data |= (A[t][r] & 0xFF) << (r * 8);
            }
        }
        top->act_col_in = a_data;

        tick(); // cycle increments here

        // Capture outputs
        // After tick(), cycle is t_start + t + 1
        // C[i][c] is valid at cycle == t_start + i + c + N
        for (int i = 0; i < N; i++) {
            for (int c = 0; c < N; c++) {
                if (cycle == t_start + i + c + N) {
                    // Extract psum for column c
                    int bit_offset = c * 20;
                    int word_idx = bit_offset / 32;
                    int bit_in_word = bit_offset % 32;
                    
                    uint64_t val = 0;
                    if (bit_in_word + 20 <= 32) {
                        val = (top->psum_bottom_out[word_idx] >> bit_in_word) & 0xFFFFF;
                    } else {
                        // crosses word boundary
                        uint32_t low = top->psum_bottom_out[word_idx] >> bit_in_word;
                        uint32_t high = top->psum_bottom_out[word_idx + 1] & ((1 << (20 - (32 - bit_in_word))) - 1);
                        val = low | (high << (32 - bit_in_word));
                    }
                    
                    // Sign extend if necessary (our data is positive here so we don't need to)
                    C_actual[i][c] = val;
                }
            }
        }
    }

    // Compare and print
    bool pass = true;
    std::cout << "--- Matrix C Expected ---" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << std::setw(6) << C_expected[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "--- Matrix C Actual ---" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << std::setw(6) << C_actual[i][j] << " ";
            if (C_actual[i][j] != C_expected[i][j]) {
                pass = false;
            }
        }
        std::cout << std::endl;
    }

    if (pass) {
        std::cout << "TEST PASSED!" << std::endl;
    } else {
        std::cout << "TEST FAILED!" << std::endl;
    }

    top->final();
    tfp->close();
    delete top;
    delete tfp;

    return pass ? 0 : 1;
}
