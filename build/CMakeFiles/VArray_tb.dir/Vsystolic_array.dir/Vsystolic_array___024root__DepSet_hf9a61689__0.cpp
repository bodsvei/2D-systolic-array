// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array___024root.h"

VL_INLINE_OPT void Vsystolic_array___024root___combo__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__systolic_array__weight_load, vlSelf->weight_load);
    VL_ASSIGN_ISI(2,vlSelf->__Vcellinp__systolic_array__weight_row_sel, vlSelf->weight_row_sel);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__systolic_array__act_col_in, vlSelf->act_col_in);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__systolic_array__clk, vlSelf->clk);
    if (((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
         ^ (IData)(vlSelf->systolic_array__DOT____Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_load 
            = vlSelf->__Vcellinp__systolic_array__weight_load;
    }
    if ((1U & ((IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel) 
               ^ (IData)(vlSelf->systolic_array__DOT____Vtogcov__weight_row_sel)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_row_sel 
            = ((2U & (IData)(vlSelf->systolic_array__DOT____Vtogcov__weight_row_sel)) 
               | (1U & (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    }
    if ((2U & ((IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel) 
               ^ (IData)(vlSelf->systolic_array__DOT____Vtogcov__weight_row_sel)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_row_sel 
            = ((1U & (IData)(vlSelf->systolic_array__DOT____Vtogcov__weight_row_sel)) 
               | (2U & (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    }
    if ((1U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
               ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffffeU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (1U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((2U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
               ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffffdU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (2U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((4U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
               ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffffbU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (4U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((8U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
               ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffff7U & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (8U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x10U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffffefU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x10U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x20U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffffdfU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x20U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x40U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffffbfU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x40U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x80U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffff7fU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x80U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x100U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffeffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x100U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x200U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffdffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x200U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x400U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffffbffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x400U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x800U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffff7ffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x800U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x1000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffefffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x1000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x2000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffdfffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x2000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x4000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffffbfffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x4000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x8000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffff7fffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x8000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x10000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffeffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x10000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x20000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffdffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x20000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x40000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfffbffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x40000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x80000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfff7ffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x80000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x100000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffefffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x100000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x200000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffdfffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x200000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x400000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xffbfffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x400000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x800000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xff7fffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x800000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x1000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfeffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x1000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x2000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfdffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x2000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x4000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xfbffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x4000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x8000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xf7ffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x8000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x10000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xefffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x10000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x20000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xdfffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x20000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if ((0x40000000U & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0xbfffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x40000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if (((vlSelf->__Vcellinp__systolic_array__act_col_in 
          ^ vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->systolic_array__DOT____Vtogcov__act_col_in 
            = ((0x7fffffffU & vlSelf->systolic_array__DOT____Vtogcov__act_col_in) 
               | (0x80000000U & vlSelf->__Vcellinp__systolic_array__act_col_in));
    }
    if (((IData)(vlSelf->__Vcellinp__systolic_array__clk) 
         ^ (IData)(vlSelf->systolic_array__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->systolic_array__DOT____Vtogcov__clk 
            = vlSelf->__Vcellinp__systolic_array__clk;
    }
}

VL_INLINE_OPT void Vsystolic_array___024root___sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v1;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v2;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v3;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v4;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v5;
    // Body
    vlSelf->systolic_array__DOT__act_h[0U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[0U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[0U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[0U][4U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[1U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[1U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[1U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[1U][4U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[2U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[2U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[2U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[2U][4U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[3U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[3U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__act_h[3U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__psum_v[1U][0U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[1U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[1U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[1U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[2U][0U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[2U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[2U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[2U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[3U][0U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[3U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[3U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[3U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[4U][0U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[4U][1U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__psum_v[4U][2U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->systolic_array__DOT__act_h[3U][4U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out;
    vlSelf->systolic_array__DOT__psum_v[4U][3U] = vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out;
    ++(vlSymsp->__Vcoverage[311]);
    ++(vlSymsp->__Vcoverage[314]);
    ++(vlSymsp->__Vcoverage[317]);
    ++(vlSymsp->__Vcoverage[320]);
    ++(vlSymsp->__Vcoverage[323]);
    ++(vlSymsp->__Vcoverage[326]);
    if (vlSelf->__Vcellinp__systolic_array__reset) {
        ++(vlSymsp->__Vcoverage[309]);
        ++(vlSymsp->__Vcoverage[312]);
        ++(vlSymsp->__Vcoverage[315]);
        ++(vlSymsp->__Vcoverage[318]);
        ++(vlSymsp->__Vcoverage[321]);
        ++(vlSymsp->__Vcoverage[324]);
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v2 = 0U;
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v3 = 0U;
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v4 = 0U;
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v5 = 0U;
    } else {
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v0 
            = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
            [1U][0U];
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v1 
            = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
            [2U][0U];
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v2 
            = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
            [2U][1U];
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v3 
            = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
            [3U][0U];
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v4 
            = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
            [3U][1U];
        __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v5 
            = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
            [3U][2U];
    }
    if ((1U & (~ (IData)(vlSelf->__Vcellinp__systolic_array__reset)))) {
        ++(vlSymsp->__Vcoverage[310]);
        ++(vlSymsp->__Vcoverage[313]);
        ++(vlSymsp->__Vcoverage[316]);
        ++(vlSymsp->__Vcoverage[319]);
        ++(vlSymsp->__Vcoverage[322]);
        ++(vlSymsp->__Vcoverage[325]);
    }
    vlSelf->__Vcellout__systolic_array__psum_array_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                    [1U][1U])) << 0x14U) 
                   | (QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                     [1U][0U]))));
    vlSelf->__Vcellout__systolic_array__psum_array_out[1U] 
        = ((0xffffff00U & vlSelf->__Vcellout__systolic_array__psum_array_out[1U]) 
           | (IData)(((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [1U][1U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [1U]
                                                    [0U]))) 
                      >> 0x20U)));
    vlSelf->__Vcellout__systolic_array__psum_array_out[1U] 
        = ((0xffU & vlSelf->__Vcellout__systolic_array__psum_array_out[1U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [1U][3U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [1U]
                                                    [2U])))) 
              << 8U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[2U] 
        = ((0xffff0000U & vlSelf->__Vcellout__systolic_array__psum_array_out[2U]) 
           | (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                         [1U][3U])) 
                         << 0x14U) | (QData)((IData)(
                                                     vlSelf->systolic_array__DOT__psum_v
                                                     [1U]
                                                     [2U])))) 
               >> 0x18U) | ((IData)(((((QData)((IData)(
                                                       vlSelf->systolic_array__DOT__psum_v
                                                       [1U]
                                                       [3U])) 
                                       << 0x14U) | (QData)((IData)(
                                                                   vlSelf->systolic_array__DOT__psum_v
                                                                   [1U]
                                                                   [2U]))) 
                                     >> 0x20U)) << 8U)));
    vlSelf->__Vcellout__systolic_array__psum_array_out[2U] 
        = ((0xffffU & vlSelf->__Vcellout__systolic_array__psum_array_out[2U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [2U][1U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [2U]
                                                    [0U])))) 
              << 0x10U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[3U] 
        = ((0xff000000U & vlSelf->__Vcellout__systolic_array__psum_array_out[3U]) 
           | (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                         [2U][1U])) 
                         << 0x14U) | (QData)((IData)(
                                                     vlSelf->systolic_array__DOT__psum_v
                                                     [2U]
                                                     [0U])))) 
               >> 0x10U) | ((IData)(((((QData)((IData)(
                                                       vlSelf->systolic_array__DOT__psum_v
                                                       [2U]
                                                       [1U])) 
                                       << 0x14U) | (QData)((IData)(
                                                                   vlSelf->systolic_array__DOT__psum_v
                                                                   [2U]
                                                                   [0U]))) 
                                     >> 0x20U)) << 0x10U)));
    vlSelf->__Vcellout__systolic_array__psum_array_out[3U] 
        = ((0xffffffU & vlSelf->__Vcellout__systolic_array__psum_array_out[3U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [2U][3U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [2U]
                                                    [2U])))) 
              << 0x18U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[4U] 
        = (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                      [2U][3U])) << 0x14U) 
                     | (QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                       [2U][2U])))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                                 [2U]
                                                 [3U])) 
                                 << 0x14U) | (QData)((IData)(
                                                             vlSelf->systolic_array__DOT__psum_v
                                                             [2U]
                                                             [2U]))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[5U] 
        = (IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                    [3U][1U])) << 0x14U) 
                   | (QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                     [3U][0U]))));
    vlSelf->__Vcellout__systolic_array__psum_array_out[6U] 
        = ((0xffffff00U & vlSelf->__Vcellout__systolic_array__psum_array_out[6U]) 
           | (IData)(((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [3U][1U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [3U]
                                                    [0U]))) 
                      >> 0x20U)));
    vlSelf->__Vcellout__systolic_array__psum_array_out[6U] 
        = ((0xffU & vlSelf->__Vcellout__systolic_array__psum_array_out[6U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [3U][3U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [3U]
                                                    [2U])))) 
              << 8U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[7U] 
        = ((0xffff0000U & vlSelf->__Vcellout__systolic_array__psum_array_out[7U]) 
           | (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                         [3U][3U])) 
                         << 0x14U) | (QData)((IData)(
                                                     vlSelf->systolic_array__DOT__psum_v
                                                     [3U]
                                                     [2U])))) 
               >> 0x18U) | ((IData)(((((QData)((IData)(
                                                       vlSelf->systolic_array__DOT__psum_v
                                                       [3U]
                                                       [3U])) 
                                       << 0x14U) | (QData)((IData)(
                                                                   vlSelf->systolic_array__DOT__psum_v
                                                                   [3U]
                                                                   [2U]))) 
                                     >> 0x20U)) << 8U)));
    vlSelf->__Vcellout__systolic_array__psum_array_out[7U] 
        = ((0xffffU & vlSelf->__Vcellout__systolic_array__psum_array_out[7U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [4U][1U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [4U]
                                                    [0U])))) 
              << 0x10U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[8U] 
        = ((0xff000000U & vlSelf->__Vcellout__systolic_array__psum_array_out[8U]) 
           | (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                         [4U][1U])) 
                         << 0x14U) | (QData)((IData)(
                                                     vlSelf->systolic_array__DOT__psum_v
                                                     [4U]
                                                     [0U])))) 
               >> 0x10U) | ((IData)(((((QData)((IData)(
                                                       vlSelf->systolic_array__DOT__psum_v
                                                       [4U]
                                                       [1U])) 
                                       << 0x14U) | (QData)((IData)(
                                                                   vlSelf->systolic_array__DOT__psum_v
                                                                   [4U]
                                                                   [0U]))) 
                                     >> 0x20U)) << 0x10U)));
    vlSelf->__Vcellout__systolic_array__psum_array_out[8U] 
        = ((0xffffffU & vlSelf->__Vcellout__systolic_array__psum_array_out[8U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [4U][3U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [4U]
                                                    [2U])))) 
              << 0x18U));
    vlSelf->__Vcellout__systolic_array__psum_array_out[9U] 
        = (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                      [4U][3U])) << 0x14U) 
                     | (QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                       [4U][2U])))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                                 [4U]
                                                 [3U])) 
                                 << 0x14U) | (QData)((IData)(
                                                             vlSelf->systolic_array__DOT__psum_v
                                                             [4U]
                                                             [2U]))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                    [4U][1U])) << 0x14U) 
                   | (QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                     [4U][0U]))));
    vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
        = ((0xffffff00U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]) 
           | (IData)(((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [4U][1U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [4U]
                                                    [0U]))) 
                      >> 0x20U)));
    vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
        = ((0xffU & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]) 
           | ((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                        [4U][3U])) 
                        << 0x14U) | (QData)((IData)(
                                                    vlSelf->systolic_array__DOT__psum_v
                                                    [4U]
                                                    [2U])))) 
              << 8U));
    vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
        = (0xffffU & (((IData)((((QData)((IData)(vlSelf->systolic_array__DOT__psum_v
                                                 [4U]
                                                 [3U])) 
                                 << 0x14U) | (QData)((IData)(
                                                             vlSelf->systolic_array__DOT__psum_v
                                                             [4U]
                                                             [2U])))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(
                                                               vlSelf->systolic_array__DOT__psum_v
                                                               [4U]
                                                               [3U])) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                vlSelf->systolic_array__DOT__psum_v
                                                                [4U]
                                                                [2U]))) 
                                             >> 0x20U)) 
                                    << 8U)));
    VL_ASSIGN_SWW(320,vlSelf->psum_array_out, vlSelf->__Vcellout__systolic_array__psum_array_out);
    VL_ASSIGN_SWW(80,vlSelf->psum_bottom_out, vlSelf->__Vcellout__systolic_array__psum_bottom_out);
    if ((1U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffffeU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (1U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((2U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffffdU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (2U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((4U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffffbU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (4U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((8U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffff7U & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (8U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x10U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffffefU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x10U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x20U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffffdfU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x20U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x40U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffffbfU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x40U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x80U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffff7fU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x80U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x100U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffeffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x100U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x200U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffdffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x200U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x400U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffffbffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x400U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x800U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffff7ffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x800U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x1000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffefffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x1000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x2000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffdfffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x2000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x4000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffffbfffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x4000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x8000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffff7fffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x8000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x10000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffeffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x10000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x20000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffdffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x20000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x40000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfffbffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x40000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x80000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfff7ffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x80000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x100000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffefffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x100000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x200000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffdfffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x200000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x400000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xffbfffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x400000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x800000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xff7fffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x800000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x1000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfeffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x1000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x2000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfdffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x2000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x4000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xfbffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x4000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x8000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xf7ffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x8000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x10000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xefffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x10000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x20000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xdfffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x20000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((0x40000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0xbfffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x40000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if (((vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U] 
          ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U] 
            = ((0x7fffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[0U]) 
               | (0x80000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[0U]));
    }
    if ((1U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffffeU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (1U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((2U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffffdU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (2U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((4U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffffbU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (4U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((8U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffff7U & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (8U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x10U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffffefU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x10U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x20U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffffdfU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x20U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x40U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffffbfU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x40U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x80U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffff7fU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x80U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x100U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffeffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x100U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x200U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffdffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x200U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x400U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffffbffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x400U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x800U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffff7ffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x800U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x1000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffefffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x1000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x2000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffdfffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x2000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x4000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffffbfffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x4000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x8000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffff7fffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x8000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x10000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffeffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x10000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x20000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffdffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x20000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x40000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfffbffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x40000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x80000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfff7ffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x80000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x100000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffefffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x100000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x200000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffdfffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x200000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x400000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xffbfffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x400000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x800000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xff7fffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x800000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x1000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfeffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x1000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x2000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfdffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x2000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x4000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xfbffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x4000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x8000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xf7ffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x8000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x10000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xefffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x10000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x20000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xdfffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x20000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((0x40000000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0xbfffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x40000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if (((vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U] 
          ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U] 
            = ((0x7fffffffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[1U]) 
               | (0x80000000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[1U]));
    }
    if ((1U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfffeU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (1U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((2U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfffdU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (2U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((4U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfffbU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (4U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((8U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
               ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfff7U & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (8U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x10U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xffefU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x10U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x20U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xffdfU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x20U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x40U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xffbfU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x40U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x80U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xff7fU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x80U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x100U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfeffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x100U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x200U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfdffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x200U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x400U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xfbffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x400U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x800U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xf7ffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x800U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x1000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xefffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x1000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x2000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xdfffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x2000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x4000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0xbfffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x4000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    if ((0x8000U & (vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U] 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U] 
            = ((0x7fffU & vlSelf->systolic_array__DOT____Vtogcov__psum_bottom_out[2U]) 
               | (0x8000U & vlSelf->__Vcellout__systolic_array__psum_bottom_out[2U]));
    }
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg[1U][0U] 
        = __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v0;
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg[2U][0U] 
        = __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v1;
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg[2U][1U] 
        = __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v2;
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg[3U][0U] 
        = __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v3;
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg[3U][1U] 
        = __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v4;
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg[3U][2U] 
        = __Vdlyvval__systolic_array__DOT__g_skew__DOT__skew_reg__v5;
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[1U][1U] 
        = vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
        [1U][0U];
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[2U][1U] 
        = vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
        [2U][0U];
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[2U][2U] 
        = vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
        [2U][1U];
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[3U][1U] 
        = vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
        [3U][0U];
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[3U][2U] 
        = vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
        [3U][1U];
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[3U][3U] 
        = vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
        [3U][2U];
}

VL_INLINE_OPT void Vsystolic_array___024root___combo__TOP__1(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (0U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (0U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (0U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (0U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (1U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (1U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (1U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (1U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (2U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (2U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (2U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (2U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (3U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (3U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (3U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load 
        = ((IData)(vlSelf->__Vcellinp__systolic_array__weight_load) 
           & (3U == (IData)(vlSelf->__Vcellinp__systolic_array__weight_row_sel)));
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__systolic_array__weight_data, vlSelf->weight_data);
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[0U][0U] 
        = (0xffU & vlSelf->__Vcellinp__systolic_array__act_col_in);
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[1U][0U] 
        = (0xffU & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                    >> 8U));
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[2U][0U] 
        = (0xffU & (vlSelf->__Vcellinp__systolic_array__act_col_in 
                    >> 0x10U));
    vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain[3U][0U] 
        = (vlSelf->__Vcellinp__systolic_array__act_col_in 
           >> 0x18U);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__systolic_array__reset, vlSelf->reset);
    if ((1U & (vlSelf->__Vcellinp__systolic_array__weight_data 
               ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffffeU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (1U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((2U & (vlSelf->__Vcellinp__systolic_array__weight_data 
               ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffffdU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (2U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((4U & (vlSelf->__Vcellinp__systolic_array__weight_data 
               ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffffbU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (4U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((8U & (vlSelf->__Vcellinp__systolic_array__weight_data 
               ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffff7U & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (8U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x10U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffffefU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x10U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x20U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffffdfU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x20U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x40U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffffbfU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x40U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x80U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                  ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffff7fU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x80U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x100U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffeffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x100U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x200U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffdffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x200U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x400U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffffbffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x400U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x800U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                   ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffff7ffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x800U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x1000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffefffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x1000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x2000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffdfffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x2000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x4000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffffbfffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x4000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x8000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                    ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffff7fffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x8000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x10000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffeffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x10000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x20000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffdffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x20000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x40000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfffbffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x40000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x80000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                     ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfff7ffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x80000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x100000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffefffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x100000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x200000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffdfffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x200000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x400000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xffbfffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x400000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x800000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                      ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xff7fffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x800000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x1000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfeffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x1000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x2000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfdffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x2000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x4000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xfbffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x4000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x8000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                       ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xf7ffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x8000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x10000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xefffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x10000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x20000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xdfffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x20000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if ((0x40000000U & (vlSelf->__Vcellinp__systolic_array__weight_data 
                        ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0xbfffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x40000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    if (((vlSelf->__Vcellinp__systolic_array__weight_data 
          ^ vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->systolic_array__DOT____Vtogcov__weight_data 
            = ((0x7fffffffU & vlSelf->systolic_array__DOT____Vtogcov__weight_data) 
               | (0x80000000U & vlSelf->__Vcellinp__systolic_array__weight_data));
    }
    vlSelf->systolic_array__DOT__act_h[0U][0U] = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
        [0U][0U];
    vlSelf->systolic_array__DOT__act_h[1U][0U] = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
        [1U][1U];
    vlSelf->systolic_array__DOT__act_h[2U][0U] = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
        [2U][2U];
    vlSelf->systolic_array__DOT__act_h[3U][0U] = vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
        [3U][3U];
    if (((IData)(vlSelf->__Vcellinp__systolic_array__reset) 
         ^ (IData)(vlSelf->systolic_array__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->systolic_array__DOT____Vtogcov__reset 
            = vlSelf->__Vcellinp__systolic_array__reset;
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[0U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[0U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[0U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[0U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [0U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [0U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [0U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [0U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][0U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][0U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [0U][0U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[0U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[0U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[0U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[0U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [0U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [0U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [0U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [0U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][1U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][1U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][1U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [0U][1U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[0U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[0U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[0U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[0U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [0U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [0U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [0U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [0U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][2U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][2U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][2U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [0U][2U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[0U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[0U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[0U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[0U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [0U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [0U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [0U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [0U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][3U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][3U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][3U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [0U][3U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[0U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[0U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[0U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[0U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [0U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [0U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [0U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [0U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [0U][4U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[0U][4U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [0U][4U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [0U][4U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[1U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[1U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[1U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[1U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [1U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [1U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [1U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [1U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][0U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][0U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][0U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [1U][0U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[1U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[1U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[1U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[1U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [1U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [1U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [1U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [1U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][1U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][1U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][1U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [1U][1U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[1U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[1U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[1U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[1U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [1U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [1U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [1U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [1U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][2U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][2U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][2U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [1U][2U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[1U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[1U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[1U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[1U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [1U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [1U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [1U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [1U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][3U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][3U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][3U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [1U][3U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[1U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[1U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[1U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[1U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [1U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [1U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [1U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [1U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [1U][4U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[1U][4U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [1U][4U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [1U][4U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[2U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[2U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[2U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[2U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [2U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [2U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [2U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [2U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][0U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][0U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][0U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [2U][0U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[2U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[2U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[2U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[2U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [2U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [2U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [2U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [2U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][1U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][1U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][1U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [2U][1U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[2U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[2U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[2U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[2U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [2U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [2U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [2U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [2U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][2U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][2U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][2U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [2U][2U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[2U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[2U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[2U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[2U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [2U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [2U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [2U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [2U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][3U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][3U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][3U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [2U][3U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[2U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[2U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[2U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[2U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [2U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [2U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [2U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [2U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [2U][4U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[2U][4U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [2U][4U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [2U][4U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[3U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[3U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[3U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[3U]
               [0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [3U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [3U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [3U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [3U][0U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][0U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][0U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [3U][0U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[3U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[3U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[3U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[3U]
               [1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [3U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [3U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [3U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [3U][1U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][1U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][1U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][1U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [3U][1U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[3U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[3U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[3U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[3U]
               [2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [3U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [3U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [3U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [3U][2U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][2U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][2U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][2U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [3U][2U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[3U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[3U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[3U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[3U]
               [3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [3U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [3U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [3U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [3U][3U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][3U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][3U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][3U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [3U][3U]));
    }
    if ((1U & (vlSelf->systolic_array__DOT__act_h[3U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xfeU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (1U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((2U & (vlSelf->systolic_array__DOT__act_h[3U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xfdU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (2U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((4U & (vlSelf->systolic_array__DOT__act_h[3U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xfbU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (4U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((8U & (vlSelf->systolic_array__DOT__act_h[3U]
               [4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
               [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xf7U & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (8U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((0x10U & (vlSelf->systolic_array__DOT__act_h
                  [3U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xefU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (0x10U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((0x20U & (vlSelf->systolic_array__DOT__act_h
                  [3U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xdfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (0x20U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((0x40U & (vlSelf->systolic_array__DOT__act_h
                  [3U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0xbfU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (0x40U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
    if ((0x80U & (vlSelf->systolic_array__DOT__act_h
                  [3U][4U] ^ vlSelf->systolic_array__DOT____Vtogcov__act_h
                  [3U][4U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->systolic_array__DOT____Vtogcov__act_h[3U][4U] 
            = ((0x7fU & vlSelf->systolic_array__DOT____Vtogcov__act_h
                [3U][4U]) | (0x80U & vlSelf->systolic_array__DOT__act_h
                             [3U][4U]));
    }
}

void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);
void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf);

void Vsystolic_array___024root___eval(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval\n"); );
    // Body
    Vsystolic_array___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->__Vcellinp__systolic_array__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__systolic_array__clk)))) {
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array___024root___sequent__TOP__0(vlSelf);
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
    }
    Vsystolic_array___024root___combo__TOP__1(vlSelf);
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst));
    Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst));
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__systolic_array__clk 
        = vlSelf->__Vcellinp__systolic_array__clk;
}
