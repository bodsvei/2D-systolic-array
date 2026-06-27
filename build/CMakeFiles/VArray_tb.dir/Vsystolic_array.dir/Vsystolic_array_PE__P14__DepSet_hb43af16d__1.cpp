// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array_PE__P14.h"
#include "Vsystolic_array__Syms.h"

VL_INLINE_OPT void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->__Vtogcov__psum_in = ((0xffffeU & vlSelf->__Vtogcov__psum_in) 
                                      | (1U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->__Vtogcov__psum_in = ((0xffffdU & vlSelf->__Vtogcov__psum_in) 
                                      | (2U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__Vtogcov__psum_in = ((0xffffbU & vlSelf->__Vtogcov__psum_in) 
                                      | (4U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->__Vtogcov__psum_in = ((0xffff7U & vlSelf->__Vtogcov__psum_in) 
                                      | (8U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vtogcov__psum_in = ((0xfffefU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x10U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->__Vtogcov__psum_in = ((0xfffdfU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x20U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->__Vtogcov__psum_in = ((0xfffbfU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x40U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->__Vtogcov__psum_in = ((0xfff7fU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x80U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x100U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->__Vtogcov__psum_in = ((0xffeffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x100U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x200U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__Vtogcov__psum_in = ((0xffdffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x200U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x400U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->__Vtogcov__psum_in = ((0xffbffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x400U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x800U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vtogcov__psum_in = ((0xff7ffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x800U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x1000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->__Vtogcov__psum_in = ((0xfefffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x2000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->__Vtogcov__psum_in = ((0xfdfffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x4000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->__Vtogcov__psum_in = ((0xfbfffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x8000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__psum_in = ((0xf7fffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x10000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__psum_in = ((0xeffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x20000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->__Vtogcov__psum_in = ((0xdffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x40000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__psum_in = ((0xbffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
    if ((0x80000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][2U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__psum_in = ((0x7ffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][2U]));
    }
}

VL_INLINE_OPT void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][2U]));
    }
}

VL_INLINE_OPT void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[396]);
    if (vlSymsp->TOP.reset) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->act_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->__PVT__weight = 0U;
    } else {
        vlSelf->act_out = vlSymsp->TOP.systolic_array__DOT__act_h
            [3U][3U];
        vlSelf->psum_out = (0xfffffU & (vlSymsp->TOP.systolic_array__DOT__psum_v
                                        [3U][3U] + 
                                        (vlSymsp->TOP.systolic_array__DOT__act_h
                                         [3U][3U] * (IData)(vlSelf->__PVT__weight))));
        if (vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load) {
            vlSelf->__PVT__weight = (vlSymsp->TOP.weight_data 
                                     >> 0x18U);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        ++(vlSymsp->__Vcoverage[395]);
        if (vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load) {
            ++(vlSymsp->__Vcoverage[392]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load)))) {
            ++(vlSymsp->__Vcoverage[393]);
        }
    }
    if ((1U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->__Vtogcov__act_out = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (1U & (IData)(vlSelf->act_out)));
    }
    if ((2U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__act_out = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (2U & (IData)(vlSelf->act_out)));
    }
    if ((4U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__act_out = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (4U & (IData)(vlSelf->act_out)));
    }
    if ((8U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__act_out = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (8U & (IData)(vlSelf->act_out)));
    }
    if ((0x10U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__act_out = ((0xefU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (0x10U & (IData)(vlSelf->act_out)));
    }
    if ((0x20U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__act_out = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (0x20U & (IData)(vlSelf->act_out)));
    }
    if ((0x40U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__act_out = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (0x40U & (IData)(vlSelf->act_out)));
    }
    if ((0x80U & ((IData)(vlSelf->act_out) ^ (IData)(vlSelf->__Vtogcov__act_out)))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__act_out = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_out)) 
                                      | (0x80U & (IData)(vlSelf->act_out)));
    }
    if ((1U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__psum_out = ((0xffffeU & vlSelf->__Vtogcov__psum_out) 
                                       | (1U & vlSelf->psum_out));
    }
    if ((2U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__psum_out = ((0xffffdU & vlSelf->__Vtogcov__psum_out) 
                                       | (2U & vlSelf->psum_out));
    }
    if ((4U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__psum_out = ((0xffffbU & vlSelf->__Vtogcov__psum_out) 
                                       | (4U & vlSelf->psum_out));
    }
    if ((8U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__psum_out = ((0xffff7U & vlSelf->__Vtogcov__psum_out) 
                                       | (8U & vlSelf->psum_out));
    }
    if ((0x10U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__psum_out = ((0xfffefU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x10U & vlSelf->psum_out));
    }
    if ((0x20U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__psum_out = ((0xfffdfU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x20U & vlSelf->psum_out));
    }
    if ((0x40U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__psum_out = ((0xfffbfU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x40U & vlSelf->psum_out));
    }
    if ((0x80U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__psum_out = ((0xfff7fU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x80U & vlSelf->psum_out));
    }
    if ((0x100U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__psum_out = ((0xffeffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x100U & vlSelf->psum_out));
    }
    if ((0x200U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__psum_out = ((0xffdffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x200U & vlSelf->psum_out));
    }
    if ((0x400U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__psum_out = ((0xffbffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x400U & vlSelf->psum_out));
    }
    if ((0x800U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__psum_out = ((0xff7ffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x800U & vlSelf->psum_out));
    }
    if ((0x1000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__psum_out = ((0xfefffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x1000U & vlSelf->psum_out));
    }
    if ((0x2000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__psum_out = ((0xfdfffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x2000U & vlSelf->psum_out));
    }
    if ((0x4000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__psum_out = ((0xfbfffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x4000U & vlSelf->psum_out));
    }
    if ((0x8000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__psum_out = ((0xf7fffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x8000U & vlSelf->psum_out));
    }
    if ((0x10000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__psum_out = ((0xeffffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x10000U 
                                          & vlSelf->psum_out));
    }
    if ((0x20000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__psum_out = ((0xdffffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x20000U 
                                          & vlSelf->psum_out));
    }
    if ((0x40000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__psum_out = ((0xbffffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x40000U 
                                          & vlSelf->psum_out));
    }
    if ((0x80000U & (vlSelf->psum_out ^ vlSelf->__Vtogcov__psum_out))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->__Vtogcov__psum_out = ((0x7ffffU & vlSelf->__Vtogcov__psum_out) 
                                       | (0x80000U 
                                          & vlSelf->psum_out));
    }
    if ((1U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->__Vtogcov__weight = ((0xfeU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (1U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->__Vtogcov__weight = ((0xfdU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (2U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->__Vtogcov__weight = ((0xfbU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (4U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->__Vtogcov__weight = ((0xf7U & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (8U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->__Vtogcov__weight = ((0xefU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (0x10U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->__Vtogcov__weight = ((0xdfU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (0x20U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->__Vtogcov__weight = ((0xbfU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (0x40U & (IData)(vlSelf->__PVT__weight)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__weight) ^ (IData)(vlSelf->__Vtogcov__weight)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->__Vtogcov__weight = ((0x7fU & (IData)(vlSelf->__Vtogcov__weight)) 
                                     | (0x80U & (IData)(vlSelf->__PVT__weight)));
    }
}

VL_INLINE_OPT void Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___sequent__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->__Vtogcov__psum_in = ((0xffffeU & vlSelf->__Vtogcov__psum_in) 
                                      | (1U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->__Vtogcov__psum_in = ((0xffffdU & vlSelf->__Vtogcov__psum_in) 
                                      | (2U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__Vtogcov__psum_in = ((0xffffbU & vlSelf->__Vtogcov__psum_in) 
                                      | (4U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__psum_v
               [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->__Vtogcov__psum_in = ((0xffff7U & vlSelf->__Vtogcov__psum_in) 
                                      | (8U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vtogcov__psum_in = ((0xfffefU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x10U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->__Vtogcov__psum_in = ((0xfffdfU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x20U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->__Vtogcov__psum_in = ((0xfffbfU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x40U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                  [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->__Vtogcov__psum_in = ((0xfff7fU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x80U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x100U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->__Vtogcov__psum_in = ((0xffeffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x100U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x200U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__Vtogcov__psum_in = ((0xffdffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x200U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x400U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->__Vtogcov__psum_in = ((0xffbffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x400U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x800U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                   [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vtogcov__psum_in = ((0xff7ffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x800U & vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x1000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->__Vtogcov__psum_in = ((0xfefffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x2000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->__Vtogcov__psum_in = ((0xfdfffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x4000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->__Vtogcov__psum_in = ((0xfbfffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x8000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                    [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__psum_in = ((0xf7fffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x10000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__psum_in = ((0xeffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x20000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->__Vtogcov__psum_in = ((0xdffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x40000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__psum_in = ((0xbffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
    if ((0x80000U & (vlSymsp->TOP.systolic_array__DOT__psum_v
                     [3U][3U] ^ vlSelf->__Vtogcov__psum_in))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__psum_in = ((0x7ffffU & vlSelf->__Vtogcov__psum_in) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.systolic_array__DOT__psum_v
                                         [3U][3U]));
    }
}

VL_INLINE_OPT void Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___combo__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][3U]));
    }
}
