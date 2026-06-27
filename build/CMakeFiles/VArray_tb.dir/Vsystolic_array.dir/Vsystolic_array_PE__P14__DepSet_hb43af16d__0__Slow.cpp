// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array_PE__P14.h"
#include "Vsystolic_array__Syms.h"

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][0U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][1U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][2U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [0U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [0U][3U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][0U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][1U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][2U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [1U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [1U][3U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][0U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][1U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][2U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][2U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [2U][3U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [2U][3U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][0U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][0U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load) 
         ^ (IData)(vlSelf->__Vtogcov__weight_load))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__weight_load = vlSymsp->TOP.systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load;
    }
    if ((1U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__act_in = ((0xfeU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (1U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((2U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__act_in = ((0xfdU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (2U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((4U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__act_in = ((0xfbU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (4U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((8U & (vlSymsp->TOP.systolic_array__DOT__act_h
               [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__act_in = ((0xf7U & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (8U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((0x10U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__act_in = ((0xefU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x10U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((0x20U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__act_in = ((0xdfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x20U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((0x40U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__act_in = ((0xbfU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x40U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
    if ((0x80U & (vlSymsp->TOP.systolic_array__DOT__act_h
                  [3U][1U] ^ (IData)(vlSelf->__Vtogcov__act_in)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__act_in = ((0x7fU & (IData)(vlSelf->__Vtogcov__act_in)) 
                                     | (0x80U & vlSymsp->TOP.systolic_array__DOT__act_h
                                        [3U][1U]));
    }
}

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Body
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

VL_ATTR_COLD void Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___settle__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Body
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

VL_ATTR_COLD void Vsystolic_array_PE__P14___configure_coverage(Vsystolic_array_PE__P14* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "pe.v", 5, 16, "", "v_toggle/PE__P14", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "pe.v", 6, 16, "", "v_toggle/PE__P14", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "pe.v", 9, 16, "", "v_toggle/PE__P14", "weight_load", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "pe.v", 10, 29, "", "v_toggle/PE__P14", "weight_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "pe.v", 13, 29, "", "v_toggle/PE__P14", "act_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "pe.v", 14, 29, "", "v_toggle/PE__P14", "psum_in[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "pe.v", 16, 29, "", "v_toggle/PE__P14", "act_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "pe.v", 17, 29, "", "v_toggle/PE__P14", "psum_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "pe.v", 19, 22, "", "v_toggle/PE__P14", "weight[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "pe.v", 29, 13, "", "v_branch/PE__P14", "if", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "pe.v", 29, 14, "", "v_branch/PE__P14", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "pe.v", 22, 9, "", "v_branch/PE__P14", "if", "22-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "pe.v", 22, 10, "", "v_branch/PE__P14", "else", "27,33,36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "pe.v", 21, 5, "", "v_line/PE__P14", "block", "21");
}
