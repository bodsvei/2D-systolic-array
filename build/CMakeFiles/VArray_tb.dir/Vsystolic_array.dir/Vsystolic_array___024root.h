// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_
#define VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vsystolic_array__Syms;
class Vsystolic_array_PE__P14;

VL_MODULE(Vsystolic_array___024root) {
  public:
    // CELLS
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14* __PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(weight_load,0,0);
    VL_IN8(weight_row_sel,1,0);
    CData/*0:0*/ systolic_array__DOT____Vtogcov__clk;
    CData/*0:0*/ systolic_array__DOT____Vtogcov__reset;
    CData/*0:0*/ systolic_array__DOT____Vtogcov__weight_load;
    CData/*1:0*/ systolic_array__DOT____Vtogcov__weight_row_sel;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(weight_data,31,0);
    VL_IN(act_col_in,31,0);
    VL_OUTW(psum_bottom_out,79,0,3);
    VL_OUTW(psum_array_out,319,0,10);
    IData/*31:0*/ systolic_array__DOT____Vtogcov__weight_data;
    IData/*31:0*/ systolic_array__DOT____Vtogcov__act_col_in;
    VlWide<3>/*79:0*/ systolic_array__DOT____Vtogcov__psum_bottom_out;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> systolic_array__DOT__act_h;
    VlUnpacked<VlUnpacked<IData/*19:0*/, 4>, 5> systolic_array__DOT__psum_v;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> systolic_array__DOT____Vtogcov__act_h;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> systolic_array__DOT__g_skew__DOT__skew_chain;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> systolic_array__DOT__g_skew__DOT__skew_reg;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsystolic_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array___024root(Vsystolic_array__Syms* symsp, const char* name);
    ~Vsystolic_array___024root();
    VL_UNCOPYABLE(Vsystolic_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
