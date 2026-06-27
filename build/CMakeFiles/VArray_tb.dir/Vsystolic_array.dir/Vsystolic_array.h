// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSYSTOLIC_ARRAY_H_
#define VERILATED_VSYSTOLIC_ARRAY_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_cov.h"

class Vsystolic_array__Syms;
class Vsystolic_array___024root;
class VerilatedVcdSc;
class Vsystolic_array_PE__P14;


// This class is the main interface to the Verilated model
SC_MODULE(Vsystolic_array) {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsystolic_array__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> &clk;
    sc_in<bool> &reset;
    sc_in<bool> &weight_load;
    sc_in<uint32_t> &weight_row_sel;
    sc_in<uint32_t> &weight_data;
    sc_in<uint32_t> &act_col_in;
    sc_out<sc_bv<80> > &psum_bottom_out;
    sc_out<sc_bv<320> > &psum_array_out;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* const __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsystolic_array___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vsystolic_array);
    virtual ~Vsystolic_array();
  private:
    VL_UNCOPYABLE(Vsystolic_array);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    virtual void trace(sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
