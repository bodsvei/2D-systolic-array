// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array_PE__P14.h"

VL_ATTR_COLD void Vsystolic_array_PE__P14___ctor_var_reset(Vsystolic_array_PE__P14* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsystolic_array_PE__P14___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->weight_load = VL_RAND_RESET_I(1);
    vlSelf->weight_in = VL_RAND_RESET_I(8);
    vlSelf->act_in = VL_RAND_RESET_I(8);
    vlSelf->psum_in = VL_RAND_RESET_I(20);
    vlSelf->act_out = VL_RAND_RESET_I(8);
    vlSelf->psum_out = VL_RAND_RESET_I(20);
    vlSelf->__PVT__weight = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__weight_load = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__act_in = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__psum_in = VL_RAND_RESET_I(20);
    vlSelf->__Vtogcov__act_out = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__psum_out = VL_RAND_RESET_I(20);
    vlSelf->__Vtogcov__weight = VL_RAND_RESET_I(8);
}
