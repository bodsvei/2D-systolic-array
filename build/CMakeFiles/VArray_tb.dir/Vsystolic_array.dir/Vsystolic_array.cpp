// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsystolic_array.h"
#include "Vsystolic_array__Syms.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vsystolic_array::Vsystolic_array(sc_module_name /* unused */)
    : vlSymsp{new Vsystolic_array__Syms(nullptr, name(), this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , weight_load{vlSymsp->TOP.weight_load}
    , weight_row_sel{vlSymsp->TOP.weight_row_sel}
    , weight_data{vlSymsp->TOP.weight_data}
    , act_col_in{vlSymsp->TOP.act_col_in}
    , psum_bottom_out{vlSymsp->TOP.psum_bottom_out}
    , psum_array_out{vlSymsp->TOP.psum_array_out}
    , __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst}
    , __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << reset;
    sensitive << weight_load;
    sensitive << weight_row_sel;
    sensitive << weight_data;
    sensitive << act_col_in;

}

//============================================================
// Destructor

Vsystolic_array::~Vsystolic_array() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsystolic_array___024root___eval_initial(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___eval_settle(Vsystolic_array___024root* vlSelf);
void Vsystolic_array___024root___eval(Vsystolic_array___024root* vlSelf);
#ifdef VL_DEBUG
void Vsystolic_array___024root___eval_debug_assertions(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
void Vsystolic_array___024root___final(Vsystolic_array___024root* vlSelf);

static void _eval_initial_loop(Vsystolic_array__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsystolic_array___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsystolic_array___024root___eval_settle(&(vlSymsp->TOP));
        Vsystolic_array___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsystolic_array::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystolic_array::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsystolic_array___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsystolic_array___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vsystolic_array::contextp() const {
    return vlSymsp->_vm_contextp__;
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsystolic_array::final() {
    Vsystolic_array___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vsystolic_array___024root__trace_init_top(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsystolic_array___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_register(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsystolic_array::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vsystolic_array::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsystolic_array___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
