// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+167,"weight_load", false,-1);
    tracep->declBus(c+168,"weight_row_sel", false,-1, 1,0);
    tracep->declBus(c+169,"weight_data", false,-1, 31,0);
    tracep->declBus(c+170,"act_col_in", false,-1, 31,0);
    tracep->declArray(c+171,"psum_bottom_out", false,-1, 79,0);
    tracep->declArray(c+174,"psum_array_out", false,-1, 319,0);
    tracep->pushNamePrefix("systolic_array ");
    tracep->declBus(c+188,"N", false,-1, 31,0);
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBus(c+191,"SKEW_EN", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+167,"weight_load", false,-1);
    tracep->declBus(c+168,"weight_row_sel", false,-1, 1,0);
    tracep->declBus(c+169,"weight_data", false,-1, 31,0);
    tracep->declBus(c+170,"act_col_in", false,-1, 31,0);
    tracep->declArray(c+171,"psum_bottom_out", false,-1, 79,0);
    tracep->declArray(c+174,"psum_array_out", false,-1, 319,0);
    tracep->pushNamePrefix("act_h");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+17,"[0]", false,-1, 7,0);
    tracep->declBus(c+18,"[1]", false,-1, 7,0);
    tracep->declBus(c+19,"[2]", false,-1, 7,0);
    tracep->declBus(c+20,"[3]", false,-1, 7,0);
    tracep->declBus(c+21,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+22,"[0]", false,-1, 7,0);
    tracep->declBus(c+23,"[1]", false,-1, 7,0);
    tracep->declBus(c+24,"[2]", false,-1, 7,0);
    tracep->declBus(c+25,"[3]", false,-1, 7,0);
    tracep->declBus(c+26,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+27,"[0]", false,-1, 7,0);
    tracep->declBus(c+28,"[1]", false,-1, 7,0);
    tracep->declBus(c+29,"[2]", false,-1, 7,0);
    tracep->declBus(c+30,"[3]", false,-1, 7,0);
    tracep->declBus(c+31,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+32,"[0]", false,-1, 7,0);
    tracep->declBus(c+33,"[1]", false,-1, 7,0);
    tracep->declBus(c+34,"[2]", false,-1, 7,0);
    tracep->declBus(c+35,"[3]", false,-1, 7,0);
    tracep->declBus(c+36,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("psum_v");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+69,"[0]", false,-1, 19,0);
    tracep->declBus(c+70,"[1]", false,-1, 19,0);
    tracep->declBus(c+71,"[2]", false,-1, 19,0);
    tracep->declBus(c+72,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+73,"[0]", false,-1, 19,0);
    tracep->declBus(c+74,"[1]", false,-1, 19,0);
    tracep->declBus(c+75,"[2]", false,-1, 19,0);
    tracep->declBus(c+76,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+77,"[0]", false,-1, 19,0);
    tracep->declBus(c+78,"[1]", false,-1, 19,0);
    tracep->declBus(c+79,"[2]", false,-1, 19,0);
    tracep->declBus(c+80,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+81,"[0]", false,-1, 19,0);
    tracep->declBus(c+82,"[1]", false,-1, 19,0);
    tracep->declBus(c+83,"[2]", false,-1, 19,0);
    tracep->declBus(c+84,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declBus(c+85,"[0]", false,-1, 19,0);
    tracep->declBus(c+86,"[1]", false,-1, 19,0);
    tracep->declBus(c+87,"[2]", false,-1, 19,0);
    tracep->declBus(c+88,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_skew ");
    tracep->pushNamePrefix("skew_chain");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+37,"[0]", false,-1, 7,0);
    tracep->declBus(c+38,"[1]", false,-1, 7,0);
    tracep->declBus(c+39,"[2]", false,-1, 7,0);
    tracep->declBus(c+40,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+41,"[0]", false,-1, 7,0);
    tracep->declBus(c+42,"[1]", false,-1, 7,0);
    tracep->declBus(c+43,"[2]", false,-1, 7,0);
    tracep->declBus(c+44,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+45,"[0]", false,-1, 7,0);
    tracep->declBus(c+46,"[1]", false,-1, 7,0);
    tracep->declBus(c+47,"[2]", false,-1, 7,0);
    tracep->declBus(c+48,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+49,"[0]", false,-1, 7,0);
    tracep->declBus(c+50,"[1]", false,-1, 7,0);
    tracep->declBus(c+51,"[2]", false,-1, 7,0);
    tracep->declBus(c+52,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("skew_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+89,"[0]", false,-1, 7,0);
    tracep->declBus(c+90,"[1]", false,-1, 7,0);
    tracep->declBus(c+91,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+92,"[0]", false,-1, 7,0);
    tracep->declBus(c+93,"[1]", false,-1, 7,0);
    tracep->declBus(c+94,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+95,"[0]", false,-1, 7,0);
    tracep->declBus(c+96,"[1]", false,-1, 7,0);
    tracep->declBus(c+97,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+98,"[0]", false,-1, 7,0);
    tracep->declBus(c+99,"[1]", false,-1, 7,0);
    tracep->declBus(c+100,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+1,"weight_load", false,-1);
    tracep->declBus(c+184,"weight_in", false,-1, 7,0);
    tracep->declBus(c+53,"act_in", false,-1, 7,0);
    tracep->declBus(c+101,"psum_in", false,-1, 19,0);
    tracep->declBus(c+102,"act_out", false,-1, 7,0);
    tracep->declBus(c+103,"psum_out", false,-1, 19,0);
    tracep->declBus(c+104,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+2,"weight_load", false,-1);
    tracep->declBus(c+185,"weight_in", false,-1, 7,0);
    tracep->declBus(c+54,"act_in", false,-1, 7,0);
    tracep->declBus(c+105,"psum_in", false,-1, 19,0);
    tracep->declBus(c+106,"act_out", false,-1, 7,0);
    tracep->declBus(c+107,"psum_out", false,-1, 19,0);
    tracep->declBus(c+108,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+3,"weight_load", false,-1);
    tracep->declBus(c+186,"weight_in", false,-1, 7,0);
    tracep->declBus(c+55,"act_in", false,-1, 7,0);
    tracep->declBus(c+109,"psum_in", false,-1, 19,0);
    tracep->declBus(c+110,"act_out", false,-1, 7,0);
    tracep->declBus(c+111,"psum_out", false,-1, 19,0);
    tracep->declBus(c+112,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+4,"weight_load", false,-1);
    tracep->declBus(c+187,"weight_in", false,-1, 7,0);
    tracep->declBus(c+56,"act_in", false,-1, 7,0);
    tracep->declBus(c+113,"psum_in", false,-1, 19,0);
    tracep->declBus(c+114,"act_out", false,-1, 7,0);
    tracep->declBus(c+115,"psum_out", false,-1, 19,0);
    tracep->declBus(c+116,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+5,"weight_load", false,-1);
    tracep->declBus(c+184,"weight_in", false,-1, 7,0);
    tracep->declBus(c+57,"act_in", false,-1, 7,0);
    tracep->declBus(c+117,"psum_in", false,-1, 19,0);
    tracep->declBus(c+118,"act_out", false,-1, 7,0);
    tracep->declBus(c+119,"psum_out", false,-1, 19,0);
    tracep->declBus(c+120,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+6,"weight_load", false,-1);
    tracep->declBus(c+185,"weight_in", false,-1, 7,0);
    tracep->declBus(c+58,"act_in", false,-1, 7,0);
    tracep->declBus(c+121,"psum_in", false,-1, 19,0);
    tracep->declBus(c+122,"act_out", false,-1, 7,0);
    tracep->declBus(c+123,"psum_out", false,-1, 19,0);
    tracep->declBus(c+124,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+7,"weight_load", false,-1);
    tracep->declBus(c+186,"weight_in", false,-1, 7,0);
    tracep->declBus(c+59,"act_in", false,-1, 7,0);
    tracep->declBus(c+125,"psum_in", false,-1, 19,0);
    tracep->declBus(c+126,"act_out", false,-1, 7,0);
    tracep->declBus(c+127,"psum_out", false,-1, 19,0);
    tracep->declBus(c+128,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+8,"weight_load", false,-1);
    tracep->declBus(c+187,"weight_in", false,-1, 7,0);
    tracep->declBus(c+60,"act_in", false,-1, 7,0);
    tracep->declBus(c+129,"psum_in", false,-1, 19,0);
    tracep->declBus(c+130,"act_out", false,-1, 7,0);
    tracep->declBus(c+131,"psum_out", false,-1, 19,0);
    tracep->declBus(c+132,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+9,"weight_load", false,-1);
    tracep->declBus(c+184,"weight_in", false,-1, 7,0);
    tracep->declBus(c+61,"act_in", false,-1, 7,0);
    tracep->declBus(c+133,"psum_in", false,-1, 19,0);
    tracep->declBus(c+134,"act_out", false,-1, 7,0);
    tracep->declBus(c+135,"psum_out", false,-1, 19,0);
    tracep->declBus(c+136,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+10,"weight_load", false,-1);
    tracep->declBus(c+185,"weight_in", false,-1, 7,0);
    tracep->declBus(c+62,"act_in", false,-1, 7,0);
    tracep->declBus(c+137,"psum_in", false,-1, 19,0);
    tracep->declBus(c+138,"act_out", false,-1, 7,0);
    tracep->declBus(c+139,"psum_out", false,-1, 19,0);
    tracep->declBus(c+140,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+11,"weight_load", false,-1);
    tracep->declBus(c+186,"weight_in", false,-1, 7,0);
    tracep->declBus(c+63,"act_in", false,-1, 7,0);
    tracep->declBus(c+141,"psum_in", false,-1, 19,0);
    tracep->declBus(c+142,"act_out", false,-1, 7,0);
    tracep->declBus(c+143,"psum_out", false,-1, 19,0);
    tracep->declBus(c+144,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+12,"weight_load", false,-1);
    tracep->declBus(c+187,"weight_in", false,-1, 7,0);
    tracep->declBus(c+64,"act_in", false,-1, 7,0);
    tracep->declBus(c+145,"psum_in", false,-1, 19,0);
    tracep->declBus(c+146,"act_out", false,-1, 7,0);
    tracep->declBus(c+147,"psum_out", false,-1, 19,0);
    tracep->declBus(c+148,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+13,"weight_load", false,-1);
    tracep->declBus(c+184,"weight_in", false,-1, 7,0);
    tracep->declBus(c+65,"act_in", false,-1, 7,0);
    tracep->declBus(c+149,"psum_in", false,-1, 19,0);
    tracep->declBus(c+150,"act_out", false,-1, 7,0);
    tracep->declBus(c+151,"psum_out", false,-1, 19,0);
    tracep->declBus(c+152,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+14,"weight_load", false,-1);
    tracep->declBus(c+185,"weight_in", false,-1, 7,0);
    tracep->declBus(c+66,"act_in", false,-1, 7,0);
    tracep->declBus(c+153,"psum_in", false,-1, 19,0);
    tracep->declBus(c+154,"act_out", false,-1, 7,0);
    tracep->declBus(c+155,"psum_out", false,-1, 19,0);
    tracep->declBus(c+156,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+15,"weight_load", false,-1);
    tracep->declBus(c+186,"weight_in", false,-1, 7,0);
    tracep->declBus(c+67,"act_in", false,-1, 7,0);
    tracep->declBus(c+157,"psum_in", false,-1, 19,0);
    tracep->declBus(c+158,"act_out", false,-1, 7,0);
    tracep->declBus(c+159,"psum_out", false,-1, 19,0);
    tracep->declBus(c+160,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBit(c+16,"weight_load", false,-1);
    tracep->declBus(c+187,"weight_in", false,-1, 7,0);
    tracep->declBus(c+68,"act_in", false,-1, 7,0);
    tracep->declBus(c+161,"psum_in", false,-1, 19,0);
    tracep->declBus(c+162,"act_out", false,-1, 7,0);
    tracep->declBus(c+163,"psum_out", false,-1, 19,0);
    tracep->declBus(c+164,"weight", false,-1, 7,0);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_top(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_top\n"); );
    // Body
    Vsystolic_array___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("systolic_array ");
    tracep->pushNamePrefix("g_row[0] ");
    tracep->pushNamePrefix("g_col[0] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[1] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[2] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[3] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_row[1] ");
    tracep->pushNamePrefix("g_col[0] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[1] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[2] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[3] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_row[2] ");
    tracep->pushNamePrefix("g_col[0] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[1] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[2] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[3] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_row[3] ");
    tracep->pushNamePrefix("g_col[0] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[1] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[2] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[3] ");
    tracep->pushNamePrefix("pe_inst ");
    Vsystolic_array___024root__trace_init_sub__TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystolic_array___024root__trace_register(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsystolic_array___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vsystolic_array___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vsystolic_array___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_top_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsystolic_array___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+2,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+3,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+4,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+5,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+6,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+7,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+8,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+9,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+10,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+11,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+12,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+13,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+14,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+15,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+16,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullCData(oldp+17,(vlSelf->systolic_array__DOT__act_h
                             [0U][0U]),8);
    bufp->fullCData(oldp+18,(vlSelf->systolic_array__DOT__act_h
                             [0U][1U]),8);
    bufp->fullCData(oldp+19,(vlSelf->systolic_array__DOT__act_h
                             [0U][2U]),8);
    bufp->fullCData(oldp+20,(vlSelf->systolic_array__DOT__act_h
                             [0U][3U]),8);
    bufp->fullCData(oldp+21,(vlSelf->systolic_array__DOT__act_h
                             [0U][4U]),8);
    bufp->fullCData(oldp+22,(vlSelf->systolic_array__DOT__act_h
                             [1U][0U]),8);
    bufp->fullCData(oldp+23,(vlSelf->systolic_array__DOT__act_h
                             [1U][1U]),8);
    bufp->fullCData(oldp+24,(vlSelf->systolic_array__DOT__act_h
                             [1U][2U]),8);
    bufp->fullCData(oldp+25,(vlSelf->systolic_array__DOT__act_h
                             [1U][3U]),8);
    bufp->fullCData(oldp+26,(vlSelf->systolic_array__DOT__act_h
                             [1U][4U]),8);
    bufp->fullCData(oldp+27,(vlSelf->systolic_array__DOT__act_h
                             [2U][0U]),8);
    bufp->fullCData(oldp+28,(vlSelf->systolic_array__DOT__act_h
                             [2U][1U]),8);
    bufp->fullCData(oldp+29,(vlSelf->systolic_array__DOT__act_h
                             [2U][2U]),8);
    bufp->fullCData(oldp+30,(vlSelf->systolic_array__DOT__act_h
                             [2U][3U]),8);
    bufp->fullCData(oldp+31,(vlSelf->systolic_array__DOT__act_h
                             [2U][4U]),8);
    bufp->fullCData(oldp+32,(vlSelf->systolic_array__DOT__act_h
                             [3U][0U]),8);
    bufp->fullCData(oldp+33,(vlSelf->systolic_array__DOT__act_h
                             [3U][1U]),8);
    bufp->fullCData(oldp+34,(vlSelf->systolic_array__DOT__act_h
                             [3U][2U]),8);
    bufp->fullCData(oldp+35,(vlSelf->systolic_array__DOT__act_h
                             [3U][3U]),8);
    bufp->fullCData(oldp+36,(vlSelf->systolic_array__DOT__act_h
                             [3U][4U]),8);
    bufp->fullCData(oldp+37,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][0U]),8);
    bufp->fullCData(oldp+38,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][1U]),8);
    bufp->fullCData(oldp+39,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][2U]),8);
    bufp->fullCData(oldp+40,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][3U]),8);
    bufp->fullCData(oldp+41,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][0U]),8);
    bufp->fullCData(oldp+42,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][1U]),8);
    bufp->fullCData(oldp+43,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][2U]),8);
    bufp->fullCData(oldp+44,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][3U]),8);
    bufp->fullCData(oldp+45,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][0U]),8);
    bufp->fullCData(oldp+46,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][1U]),8);
    bufp->fullCData(oldp+47,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][2U]),8);
    bufp->fullCData(oldp+48,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][3U]),8);
    bufp->fullCData(oldp+49,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][0U]),8);
    bufp->fullCData(oldp+50,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][1U]),8);
    bufp->fullCData(oldp+51,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][2U]),8);
    bufp->fullCData(oldp+52,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][3U]),8);
    bufp->fullCData(oldp+53,(vlSelf->systolic_array__DOT__act_h
                             [0U][0U]),8);
    bufp->fullCData(oldp+54,(vlSelf->systolic_array__DOT__act_h
                             [0U][1U]),8);
    bufp->fullCData(oldp+55,(vlSelf->systolic_array__DOT__act_h
                             [0U][2U]),8);
    bufp->fullCData(oldp+56,(vlSelf->systolic_array__DOT__act_h
                             [0U][3U]),8);
    bufp->fullCData(oldp+57,(vlSelf->systolic_array__DOT__act_h
                             [1U][0U]),8);
    bufp->fullCData(oldp+58,(vlSelf->systolic_array__DOT__act_h
                             [1U][1U]),8);
    bufp->fullCData(oldp+59,(vlSelf->systolic_array__DOT__act_h
                             [1U][2U]),8);
    bufp->fullCData(oldp+60,(vlSelf->systolic_array__DOT__act_h
                             [1U][3U]),8);
    bufp->fullCData(oldp+61,(vlSelf->systolic_array__DOT__act_h
                             [2U][0U]),8);
    bufp->fullCData(oldp+62,(vlSelf->systolic_array__DOT__act_h
                             [2U][1U]),8);
    bufp->fullCData(oldp+63,(vlSelf->systolic_array__DOT__act_h
                             [2U][2U]),8);
    bufp->fullCData(oldp+64,(vlSelf->systolic_array__DOT__act_h
                             [2U][3U]),8);
    bufp->fullCData(oldp+65,(vlSelf->systolic_array__DOT__act_h
                             [3U][0U]),8);
    bufp->fullCData(oldp+66,(vlSelf->systolic_array__DOT__act_h
                             [3U][1U]),8);
    bufp->fullCData(oldp+67,(vlSelf->systolic_array__DOT__act_h
                             [3U][2U]),8);
    bufp->fullCData(oldp+68,(vlSelf->systolic_array__DOT__act_h
                             [3U][3U]),8);
    bufp->fullIData(oldp+69,(vlSelf->systolic_array__DOT__psum_v
                             [0U][0U]),20);
    bufp->fullIData(oldp+70,(vlSelf->systolic_array__DOT__psum_v
                             [0U][1U]),20);
    bufp->fullIData(oldp+71,(vlSelf->systolic_array__DOT__psum_v
                             [0U][2U]),20);
    bufp->fullIData(oldp+72,(vlSelf->systolic_array__DOT__psum_v
                             [0U][3U]),20);
    bufp->fullIData(oldp+73,(vlSelf->systolic_array__DOT__psum_v
                             [1U][0U]),20);
    bufp->fullIData(oldp+74,(vlSelf->systolic_array__DOT__psum_v
                             [1U][1U]),20);
    bufp->fullIData(oldp+75,(vlSelf->systolic_array__DOT__psum_v
                             [1U][2U]),20);
    bufp->fullIData(oldp+76,(vlSelf->systolic_array__DOT__psum_v
                             [1U][3U]),20);
    bufp->fullIData(oldp+77,(vlSelf->systolic_array__DOT__psum_v
                             [2U][0U]),20);
    bufp->fullIData(oldp+78,(vlSelf->systolic_array__DOT__psum_v
                             [2U][1U]),20);
    bufp->fullIData(oldp+79,(vlSelf->systolic_array__DOT__psum_v
                             [2U][2U]),20);
    bufp->fullIData(oldp+80,(vlSelf->systolic_array__DOT__psum_v
                             [2U][3U]),20);
    bufp->fullIData(oldp+81,(vlSelf->systolic_array__DOT__psum_v
                             [3U][0U]),20);
    bufp->fullIData(oldp+82,(vlSelf->systolic_array__DOT__psum_v
                             [3U][1U]),20);
    bufp->fullIData(oldp+83,(vlSelf->systolic_array__DOT__psum_v
                             [3U][2U]),20);
    bufp->fullIData(oldp+84,(vlSelf->systolic_array__DOT__psum_v
                             [3U][3U]),20);
    bufp->fullIData(oldp+85,(vlSelf->systolic_array__DOT__psum_v
                             [4U][0U]),20);
    bufp->fullIData(oldp+86,(vlSelf->systolic_array__DOT__psum_v
                             [4U][1U]),20);
    bufp->fullIData(oldp+87,(vlSelf->systolic_array__DOT__psum_v
                             [4U][2U]),20);
    bufp->fullIData(oldp+88,(vlSelf->systolic_array__DOT__psum_v
                             [4U][3U]),20);
    bufp->fullCData(oldp+89,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [0U][0U]),8);
    bufp->fullCData(oldp+90,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [0U][1U]),8);
    bufp->fullCData(oldp+91,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [0U][2U]),8);
    bufp->fullCData(oldp+92,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [1U][0U]),8);
    bufp->fullCData(oldp+93,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [1U][1U]),8);
    bufp->fullCData(oldp+94,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [1U][2U]),8);
    bufp->fullCData(oldp+95,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [2U][0U]),8);
    bufp->fullCData(oldp+96,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [2U][1U]),8);
    bufp->fullCData(oldp+97,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [2U][2U]),8);
    bufp->fullCData(oldp+98,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [3U][0U]),8);
    bufp->fullCData(oldp+99,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                             [3U][1U]),8);
    bufp->fullCData(oldp+100,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [3U][2U]),8);
    bufp->fullIData(oldp+101,(vlSelf->systolic_array__DOT__psum_v
                              [0U][0U]),20);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+105,(vlSelf->systolic_array__DOT__psum_v
                              [0U][1U]),20);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+109,(vlSelf->systolic_array__DOT__psum_v
                              [0U][2U]),20);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+113,(vlSelf->systolic_array__DOT__psum_v
                              [0U][3U]),20);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+117,(vlSelf->systolic_array__DOT__psum_v
                              [1U][0U]),20);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+121,(vlSelf->systolic_array__DOT__psum_v
                              [1U][1U]),20);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+125,(vlSelf->systolic_array__DOT__psum_v
                              [1U][2U]),20);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+129,(vlSelf->systolic_array__DOT__psum_v
                              [1U][3U]),20);
    bufp->fullCData(oldp+130,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+133,(vlSelf->systolic_array__DOT__psum_v
                              [2U][0U]),20);
    bufp->fullCData(oldp+134,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+137,(vlSelf->systolic_array__DOT__psum_v
                              [2U][1U]),20);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+141,(vlSelf->systolic_array__DOT__psum_v
                              [2U][2U]),20);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+144,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+145,(vlSelf->systolic_array__DOT__psum_v
                              [2U][3U]),20);
    bufp->fullCData(oldp+146,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+149,(vlSelf->systolic_array__DOT__psum_v
                              [3U][0U]),20);
    bufp->fullCData(oldp+150,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+152,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+153,(vlSelf->systolic_array__DOT__psum_v
                              [3U][1U]),20);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+156,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+157,(vlSelf->systolic_array__DOT__psum_v
                              [3U][2U]),20);
    bufp->fullCData(oldp+158,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+160,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+161,(vlSelf->systolic_array__DOT__psum_v
                              [3U][3U]),20);
    bufp->fullCData(oldp+162,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullBit(oldp+165,(vlSelf->clk));
    bufp->fullBit(oldp+166,(vlSelf->reset));
    bufp->fullBit(oldp+167,(vlSelf->weight_load));
    bufp->fullCData(oldp+168,(vlSelf->weight_row_sel),2);
    bufp->fullIData(oldp+169,(vlSelf->weight_data),32);
    bufp->fullIData(oldp+170,(vlSelf->act_col_in),32);
    bufp->fullWData(oldp+171,(vlSelf->psum_bottom_out),80);
    bufp->fullWData(oldp+174,(vlSelf->psum_array_out),320);
    bufp->fullCData(oldp+184,((0xffU & vlSelf->weight_data)),8);
    bufp->fullCData(oldp+185,((0xffU & (vlSelf->weight_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+186,((0xffU & (vlSelf->weight_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+187,((vlSelf->weight_data 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+188,(4U),32);
    bufp->fullIData(oldp+189,(8U),32);
    bufp->fullIData(oldp+190,(0x14U),32);
    bufp->fullIData(oldp+191,(1U),32);
}
