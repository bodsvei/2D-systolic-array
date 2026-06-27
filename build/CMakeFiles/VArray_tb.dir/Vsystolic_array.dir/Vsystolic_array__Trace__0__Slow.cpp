// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsystolic_array__Syms.h"


VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("systolic_array ");
    tracep->declBus(c+188,"N", false,-1, 31,0);
    tracep->declBus(c+189,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+190,"PSUM_W", false,-1, 31,0);
    tracep->declBus(c+191,"SKEW_EN", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"weight_load", false,-1);
    tracep->declBus(c+4,"weight_row_sel", false,-1, 1,0);
    tracep->declBus(c+5,"weight_data", false,-1, 31,0);
    tracep->declBus(c+6,"act_col_in", false,-1, 31,0);
    tracep->declArray(c+79,"psum_bottom_out", false,-1, 79,0);
    tracep->declArray(c+82,"psum_array_out", false,-1, 319,0);
    tracep->pushNamePrefix("act_h");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+27,"[0]", false,-1, 7,0);
    tracep->declBus(c+28,"[1]", false,-1, 7,0);
    tracep->declBus(c+29,"[2]", false,-1, 7,0);
    tracep->declBus(c+30,"[3]", false,-1, 7,0);
    tracep->declBus(c+31,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+32,"[0]", false,-1, 7,0);
    tracep->declBus(c+33,"[1]", false,-1, 7,0);
    tracep->declBus(c+34,"[2]", false,-1, 7,0);
    tracep->declBus(c+35,"[3]", false,-1, 7,0);
    tracep->declBus(c+36,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+37,"[0]", false,-1, 7,0);
    tracep->declBus(c+38,"[1]", false,-1, 7,0);
    tracep->declBus(c+39,"[2]", false,-1, 7,0);
    tracep->declBus(c+40,"[3]", false,-1, 7,0);
    tracep->declBus(c+41,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+42,"[0]", false,-1, 7,0);
    tracep->declBus(c+43,"[1]", false,-1, 7,0);
    tracep->declBus(c+44,"[2]", false,-1, 7,0);
    tracep->declBus(c+45,"[3]", false,-1, 7,0);
    tracep->declBus(c+46,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("psum_v");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+92,"[0]", false,-1, 19,0);
    tracep->declBus(c+93,"[1]", false,-1, 19,0);
    tracep->declBus(c+94,"[2]", false,-1, 19,0);
    tracep->declBus(c+95,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+96,"[0]", false,-1, 19,0);
    tracep->declBus(c+97,"[1]", false,-1, 19,0);
    tracep->declBus(c+98,"[2]", false,-1, 19,0);
    tracep->declBus(c+99,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+100,"[0]", false,-1, 19,0);
    tracep->declBus(c+101,"[1]", false,-1, 19,0);
    tracep->declBus(c+102,"[2]", false,-1, 19,0);
    tracep->declBus(c+103,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+104,"[0]", false,-1, 19,0);
    tracep->declBus(c+105,"[1]", false,-1, 19,0);
    tracep->declBus(c+106,"[2]", false,-1, 19,0);
    tracep->declBus(c+107,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declBus(c+108,"[0]", false,-1, 19,0);
    tracep->declBus(c+109,"[1]", false,-1, 19,0);
    tracep->declBus(c+110,"[2]", false,-1, 19,0);
    tracep->declBus(c+111,"[3]", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_skew ");
    tracep->pushNamePrefix("skew_chain");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+47,"[0]", false,-1, 7,0);
    tracep->declBus(c+48,"[1]", false,-1, 7,0);
    tracep->declBus(c+49,"[2]", false,-1, 7,0);
    tracep->declBus(c+50,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+51,"[0]", false,-1, 7,0);
    tracep->declBus(c+52,"[1]", false,-1, 7,0);
    tracep->declBus(c+53,"[2]", false,-1, 7,0);
    tracep->declBus(c+54,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+55,"[0]", false,-1, 7,0);
    tracep->declBus(c+56,"[1]", false,-1, 7,0);
    tracep->declBus(c+57,"[2]", false,-1, 7,0);
    tracep->declBus(c+58,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+59,"[0]", false,-1, 7,0);
    tracep->declBus(c+60,"[1]", false,-1, 7,0);
    tracep->declBus(c+61,"[2]", false,-1, 7,0);
    tracep->declBus(c+62,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("skew_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+112,"[0]", false,-1, 7,0);
    tracep->declBus(c+113,"[1]", false,-1, 7,0);
    tracep->declBus(c+114,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+115,"[0]", false,-1, 7,0);
    tracep->declBus(c+116,"[1]", false,-1, 7,0);
    tracep->declBus(c+117,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+118,"[0]", false,-1, 7,0);
    tracep->declBus(c+119,"[1]", false,-1, 7,0);
    tracep->declBus(c+120,"[2]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+121,"[0]", false,-1, 7,0);
    tracep->declBus(c+122,"[1]", false,-1, 7,0);
    tracep->declBus(c+123,"[2]", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+7,"weight_load", false,-1);
    tracep->declBus(c+8,"weight_in", false,-1, 7,0);
    tracep->declBus(c+63,"act_in", false,-1, 7,0);
    tracep->declBus(c+124,"psum_in", false,-1, 19,0);
    tracep->declBus(c+125,"act_out", false,-1, 7,0);
    tracep->declBus(c+126,"psum_out", false,-1, 19,0);
    tracep->declBus(c+127,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+9,"weight_load", false,-1);
    tracep->declBus(c+10,"weight_in", false,-1, 7,0);
    tracep->declBus(c+64,"act_in", false,-1, 7,0);
    tracep->declBus(c+128,"psum_in", false,-1, 19,0);
    tracep->declBus(c+129,"act_out", false,-1, 7,0);
    tracep->declBus(c+130,"psum_out", false,-1, 19,0);
    tracep->declBus(c+131,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+11,"weight_load", false,-1);
    tracep->declBus(c+12,"weight_in", false,-1, 7,0);
    tracep->declBus(c+65,"act_in", false,-1, 7,0);
    tracep->declBus(c+132,"psum_in", false,-1, 19,0);
    tracep->declBus(c+133,"act_out", false,-1, 7,0);
    tracep->declBus(c+134,"psum_out", false,-1, 19,0);
    tracep->declBus(c+135,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+13,"weight_load", false,-1);
    tracep->declBus(c+14,"weight_in", false,-1, 7,0);
    tracep->declBus(c+66,"act_in", false,-1, 7,0);
    tracep->declBus(c+136,"psum_in", false,-1, 19,0);
    tracep->declBus(c+137,"act_out", false,-1, 7,0);
    tracep->declBus(c+138,"psum_out", false,-1, 19,0);
    tracep->declBus(c+139,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+15,"weight_load", false,-1);
    tracep->declBus(c+8,"weight_in", false,-1, 7,0);
    tracep->declBus(c+67,"act_in", false,-1, 7,0);
    tracep->declBus(c+140,"psum_in", false,-1, 19,0);
    tracep->declBus(c+141,"act_out", false,-1, 7,0);
    tracep->declBus(c+142,"psum_out", false,-1, 19,0);
    tracep->declBus(c+143,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+16,"weight_load", false,-1);
    tracep->declBus(c+10,"weight_in", false,-1, 7,0);
    tracep->declBus(c+68,"act_in", false,-1, 7,0);
    tracep->declBus(c+144,"psum_in", false,-1, 19,0);
    tracep->declBus(c+145,"act_out", false,-1, 7,0);
    tracep->declBus(c+146,"psum_out", false,-1, 19,0);
    tracep->declBus(c+147,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+17,"weight_load", false,-1);
    tracep->declBus(c+12,"weight_in", false,-1, 7,0);
    tracep->declBus(c+69,"act_in", false,-1, 7,0);
    tracep->declBus(c+148,"psum_in", false,-1, 19,0);
    tracep->declBus(c+149,"act_out", false,-1, 7,0);
    tracep->declBus(c+150,"psum_out", false,-1, 19,0);
    tracep->declBus(c+151,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+18,"weight_load", false,-1);
    tracep->declBus(c+14,"weight_in", false,-1, 7,0);
    tracep->declBus(c+70,"act_in", false,-1, 7,0);
    tracep->declBus(c+152,"psum_in", false,-1, 19,0);
    tracep->declBus(c+153,"act_out", false,-1, 7,0);
    tracep->declBus(c+154,"psum_out", false,-1, 19,0);
    tracep->declBus(c+155,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+19,"weight_load", false,-1);
    tracep->declBus(c+8,"weight_in", false,-1, 7,0);
    tracep->declBus(c+71,"act_in", false,-1, 7,0);
    tracep->declBus(c+156,"psum_in", false,-1, 19,0);
    tracep->declBus(c+157,"act_out", false,-1, 7,0);
    tracep->declBus(c+158,"psum_out", false,-1, 19,0);
    tracep->declBus(c+159,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+20,"weight_load", false,-1);
    tracep->declBus(c+10,"weight_in", false,-1, 7,0);
    tracep->declBus(c+72,"act_in", false,-1, 7,0);
    tracep->declBus(c+160,"psum_in", false,-1, 19,0);
    tracep->declBus(c+161,"act_out", false,-1, 7,0);
    tracep->declBus(c+162,"psum_out", false,-1, 19,0);
    tracep->declBus(c+163,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+21,"weight_load", false,-1);
    tracep->declBus(c+12,"weight_in", false,-1, 7,0);
    tracep->declBus(c+73,"act_in", false,-1, 7,0);
    tracep->declBus(c+164,"psum_in", false,-1, 19,0);
    tracep->declBus(c+165,"act_out", false,-1, 7,0);
    tracep->declBus(c+166,"psum_out", false,-1, 19,0);
    tracep->declBus(c+167,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+22,"weight_load", false,-1);
    tracep->declBus(c+14,"weight_in", false,-1, 7,0);
    tracep->declBus(c+74,"act_in", false,-1, 7,0);
    tracep->declBus(c+168,"psum_in", false,-1, 19,0);
    tracep->declBus(c+169,"act_out", false,-1, 7,0);
    tracep->declBus(c+170,"psum_out", false,-1, 19,0);
    tracep->declBus(c+171,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+23,"weight_load", false,-1);
    tracep->declBus(c+8,"weight_in", false,-1, 7,0);
    tracep->declBus(c+75,"act_in", false,-1, 7,0);
    tracep->declBus(c+172,"psum_in", false,-1, 19,0);
    tracep->declBus(c+173,"act_out", false,-1, 7,0);
    tracep->declBus(c+174,"psum_out", false,-1, 19,0);
    tracep->declBus(c+175,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+24,"weight_load", false,-1);
    tracep->declBus(c+10,"weight_in", false,-1, 7,0);
    tracep->declBus(c+76,"act_in", false,-1, 7,0);
    tracep->declBus(c+176,"psum_in", false,-1, 19,0);
    tracep->declBus(c+177,"act_out", false,-1, 7,0);
    tracep->declBus(c+178,"psum_out", false,-1, 19,0);
    tracep->declBus(c+179,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+25,"weight_load", false,-1);
    tracep->declBus(c+12,"weight_in", false,-1, 7,0);
    tracep->declBus(c+77,"act_in", false,-1, 7,0);
    tracep->declBus(c+180,"psum_in", false,-1, 19,0);
    tracep->declBus(c+181,"act_out", false,-1, 7,0);
    tracep->declBus(c+182,"psum_out", false,-1, 19,0);
    tracep->declBus(c+183,"weight", false,-1, 7,0);
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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+26,"weight_load", false,-1);
    tracep->declBus(c+14,"weight_in", false,-1, 7,0);
    tracep->declBus(c+78,"act_in", false,-1, 7,0);
    tracep->declBus(c+184,"psum_in", false,-1, 19,0);
    tracep->declBus(c+185,"act_out", false,-1, 7,0);
    tracep->declBus(c+186,"psum_out", false,-1, 19,0);
    tracep->declBus(c+187,"weight", false,-1, 7,0);
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
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__systolic_array__clk));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__systolic_array__reset));
    bufp->fullBit(oldp+3,(vlSelf->__Vcellinp__systolic_array__weight_load));
    bufp->fullCData(oldp+4,(vlSelf->__Vcellinp__systolic_array__weight_row_sel),2);
    bufp->fullIData(oldp+5,(vlSelf->__Vcellinp__systolic_array__weight_data),32);
    bufp->fullIData(oldp+6,(vlSelf->__Vcellinp__systolic_array__act_col_in),32);
    bufp->fullBit(oldp+7,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullCData(oldp+8,((0xffU & vlSelf->__Vcellinp__systolic_array__weight_data)),8);
    bufp->fullBit(oldp+9,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullCData(oldp+10,((0xffU & (vlSelf->__Vcellinp__systolic_array__weight_data 
                                       >> 8U))),8);
    bufp->fullBit(oldp+11,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullCData(oldp+12,((0xffU & (vlSelf->__Vcellinp__systolic_array__weight_data 
                                       >> 0x10U))),8);
    bufp->fullBit(oldp+13,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullCData(oldp+14,((vlSelf->__Vcellinp__systolic_array__weight_data 
                              >> 0x18U)),8);
    bufp->fullBit(oldp+15,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+16,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+17,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+18,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+19,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+20,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+21,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+22,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+23,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+24,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+25,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
    bufp->fullBit(oldp+26,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    bufp->fullCData(oldp+27,(vlSelf->systolic_array__DOT__act_h
                             [0U][0U]),8);
    bufp->fullCData(oldp+28,(vlSelf->systolic_array__DOT__act_h
                             [0U][1U]),8);
    bufp->fullCData(oldp+29,(vlSelf->systolic_array__DOT__act_h
                             [0U][2U]),8);
    bufp->fullCData(oldp+30,(vlSelf->systolic_array__DOT__act_h
                             [0U][3U]),8);
    bufp->fullCData(oldp+31,(vlSelf->systolic_array__DOT__act_h
                             [0U][4U]),8);
    bufp->fullCData(oldp+32,(vlSelf->systolic_array__DOT__act_h
                             [1U][0U]),8);
    bufp->fullCData(oldp+33,(vlSelf->systolic_array__DOT__act_h
                             [1U][1U]),8);
    bufp->fullCData(oldp+34,(vlSelf->systolic_array__DOT__act_h
                             [1U][2U]),8);
    bufp->fullCData(oldp+35,(vlSelf->systolic_array__DOT__act_h
                             [1U][3U]),8);
    bufp->fullCData(oldp+36,(vlSelf->systolic_array__DOT__act_h
                             [1U][4U]),8);
    bufp->fullCData(oldp+37,(vlSelf->systolic_array__DOT__act_h
                             [2U][0U]),8);
    bufp->fullCData(oldp+38,(vlSelf->systolic_array__DOT__act_h
                             [2U][1U]),8);
    bufp->fullCData(oldp+39,(vlSelf->systolic_array__DOT__act_h
                             [2U][2U]),8);
    bufp->fullCData(oldp+40,(vlSelf->systolic_array__DOT__act_h
                             [2U][3U]),8);
    bufp->fullCData(oldp+41,(vlSelf->systolic_array__DOT__act_h
                             [2U][4U]),8);
    bufp->fullCData(oldp+42,(vlSelf->systolic_array__DOT__act_h
                             [3U][0U]),8);
    bufp->fullCData(oldp+43,(vlSelf->systolic_array__DOT__act_h
                             [3U][1U]),8);
    bufp->fullCData(oldp+44,(vlSelf->systolic_array__DOT__act_h
                             [3U][2U]),8);
    bufp->fullCData(oldp+45,(vlSelf->systolic_array__DOT__act_h
                             [3U][3U]),8);
    bufp->fullCData(oldp+46,(vlSelf->systolic_array__DOT__act_h
                             [3U][4U]),8);
    bufp->fullCData(oldp+47,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][0U]),8);
    bufp->fullCData(oldp+48,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][1U]),8);
    bufp->fullCData(oldp+49,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][2U]),8);
    bufp->fullCData(oldp+50,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [0U][3U]),8);
    bufp->fullCData(oldp+51,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][0U]),8);
    bufp->fullCData(oldp+52,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][1U]),8);
    bufp->fullCData(oldp+53,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][2U]),8);
    bufp->fullCData(oldp+54,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [1U][3U]),8);
    bufp->fullCData(oldp+55,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][0U]),8);
    bufp->fullCData(oldp+56,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][1U]),8);
    bufp->fullCData(oldp+57,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][2U]),8);
    bufp->fullCData(oldp+58,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [2U][3U]),8);
    bufp->fullCData(oldp+59,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][0U]),8);
    bufp->fullCData(oldp+60,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][1U]),8);
    bufp->fullCData(oldp+61,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][2U]),8);
    bufp->fullCData(oldp+62,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                             [3U][3U]),8);
    bufp->fullCData(oldp+63,(vlSelf->systolic_array__DOT__act_h
                             [0U][0U]),8);
    bufp->fullCData(oldp+64,(vlSelf->systolic_array__DOT__act_h
                             [0U][1U]),8);
    bufp->fullCData(oldp+65,(vlSelf->systolic_array__DOT__act_h
                             [0U][2U]),8);
    bufp->fullCData(oldp+66,(vlSelf->systolic_array__DOT__act_h
                             [0U][3U]),8);
    bufp->fullCData(oldp+67,(vlSelf->systolic_array__DOT__act_h
                             [1U][0U]),8);
    bufp->fullCData(oldp+68,(vlSelf->systolic_array__DOT__act_h
                             [1U][1U]),8);
    bufp->fullCData(oldp+69,(vlSelf->systolic_array__DOT__act_h
                             [1U][2U]),8);
    bufp->fullCData(oldp+70,(vlSelf->systolic_array__DOT__act_h
                             [1U][3U]),8);
    bufp->fullCData(oldp+71,(vlSelf->systolic_array__DOT__act_h
                             [2U][0U]),8);
    bufp->fullCData(oldp+72,(vlSelf->systolic_array__DOT__act_h
                             [2U][1U]),8);
    bufp->fullCData(oldp+73,(vlSelf->systolic_array__DOT__act_h
                             [2U][2U]),8);
    bufp->fullCData(oldp+74,(vlSelf->systolic_array__DOT__act_h
                             [2U][3U]),8);
    bufp->fullCData(oldp+75,(vlSelf->systolic_array__DOT__act_h
                             [3U][0U]),8);
    bufp->fullCData(oldp+76,(vlSelf->systolic_array__DOT__act_h
                             [3U][1U]),8);
    bufp->fullCData(oldp+77,(vlSelf->systolic_array__DOT__act_h
                             [3U][2U]),8);
    bufp->fullCData(oldp+78,(vlSelf->systolic_array__DOT__act_h
                             [3U][3U]),8);
    bufp->fullWData(oldp+79,(vlSelf->__Vcellout__systolic_array__psum_bottom_out),80);
    bufp->fullWData(oldp+82,(vlSelf->__Vcellout__systolic_array__psum_array_out),320);
    bufp->fullIData(oldp+92,(vlSelf->systolic_array__DOT__psum_v
                             [0U][0U]),20);
    bufp->fullIData(oldp+93,(vlSelf->systolic_array__DOT__psum_v
                             [0U][1U]),20);
    bufp->fullIData(oldp+94,(vlSelf->systolic_array__DOT__psum_v
                             [0U][2U]),20);
    bufp->fullIData(oldp+95,(vlSelf->systolic_array__DOT__psum_v
                             [0U][3U]),20);
    bufp->fullIData(oldp+96,(vlSelf->systolic_array__DOT__psum_v
                             [1U][0U]),20);
    bufp->fullIData(oldp+97,(vlSelf->systolic_array__DOT__psum_v
                             [1U][1U]),20);
    bufp->fullIData(oldp+98,(vlSelf->systolic_array__DOT__psum_v
                             [1U][2U]),20);
    bufp->fullIData(oldp+99,(vlSelf->systolic_array__DOT__psum_v
                             [1U][3U]),20);
    bufp->fullIData(oldp+100,(vlSelf->systolic_array__DOT__psum_v
                              [2U][0U]),20);
    bufp->fullIData(oldp+101,(vlSelf->systolic_array__DOT__psum_v
                              [2U][1U]),20);
    bufp->fullIData(oldp+102,(vlSelf->systolic_array__DOT__psum_v
                              [2U][2U]),20);
    bufp->fullIData(oldp+103,(vlSelf->systolic_array__DOT__psum_v
                              [2U][3U]),20);
    bufp->fullIData(oldp+104,(vlSelf->systolic_array__DOT__psum_v
                              [3U][0U]),20);
    bufp->fullIData(oldp+105,(vlSelf->systolic_array__DOT__psum_v
                              [3U][1U]),20);
    bufp->fullIData(oldp+106,(vlSelf->systolic_array__DOT__psum_v
                              [3U][2U]),20);
    bufp->fullIData(oldp+107,(vlSelf->systolic_array__DOT__psum_v
                              [3U][3U]),20);
    bufp->fullIData(oldp+108,(vlSelf->systolic_array__DOT__psum_v
                              [4U][0U]),20);
    bufp->fullIData(oldp+109,(vlSelf->systolic_array__DOT__psum_v
                              [4U][1U]),20);
    bufp->fullIData(oldp+110,(vlSelf->systolic_array__DOT__psum_v
                              [4U][2U]),20);
    bufp->fullIData(oldp+111,(vlSelf->systolic_array__DOT__psum_v
                              [4U][3U]),20);
    bufp->fullCData(oldp+112,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [0U][0U]),8);
    bufp->fullCData(oldp+113,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [0U][1U]),8);
    bufp->fullCData(oldp+114,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [0U][2U]),8);
    bufp->fullCData(oldp+115,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [1U][0U]),8);
    bufp->fullCData(oldp+116,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [1U][1U]),8);
    bufp->fullCData(oldp+117,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [1U][2U]),8);
    bufp->fullCData(oldp+118,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [2U][0U]),8);
    bufp->fullCData(oldp+119,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [2U][1U]),8);
    bufp->fullCData(oldp+120,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [2U][2U]),8);
    bufp->fullCData(oldp+121,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [3U][0U]),8);
    bufp->fullCData(oldp+122,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [3U][1U]),8);
    bufp->fullCData(oldp+123,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                              [3U][2U]),8);
    bufp->fullIData(oldp+124,(vlSelf->systolic_array__DOT__psum_v
                              [0U][0U]),20);
    bufp->fullCData(oldp+125,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+127,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+128,(vlSelf->systolic_array__DOT__psum_v
                              [0U][1U]),20);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+132,(vlSelf->systolic_array__DOT__psum_v
                              [0U][2U]),20);
    bufp->fullCData(oldp+133,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+136,(vlSelf->systolic_array__DOT__psum_v
                              [0U][3U]),20);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+140,(vlSelf->systolic_array__DOT__psum_v
                              [1U][0U]),20);
    bufp->fullCData(oldp+141,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+143,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+144,(vlSelf->systolic_array__DOT__psum_v
                              [1U][1U]),20);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+148,(vlSelf->systolic_array__DOT__psum_v
                              [1U][2U]),20);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+151,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+152,(vlSelf->systolic_array__DOT__psum_v
                              [1U][3U]),20);
    bufp->fullCData(oldp+153,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+155,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+156,(vlSelf->systolic_array__DOT__psum_v
                              [2U][0U]),20);
    bufp->fullCData(oldp+157,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+159,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+160,(vlSelf->systolic_array__DOT__psum_v
                              [2U][1U]),20);
    bufp->fullCData(oldp+161,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+163,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+164,(vlSelf->systolic_array__DOT__psum_v
                              [2U][2U]),20);
    bufp->fullCData(oldp+165,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+167,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+168,(vlSelf->systolic_array__DOT__psum_v
                              [2U][3U]),20);
    bufp->fullCData(oldp+169,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+171,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+172,(vlSelf->systolic_array__DOT__psum_v
                              [3U][0U]),20);
    bufp->fullCData(oldp+173,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+175,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+176,(vlSelf->systolic_array__DOT__psum_v
                              [3U][1U]),20);
    bufp->fullCData(oldp+177,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+180,(vlSelf->systolic_array__DOT__psum_v
                              [3U][2U]),20);
    bufp->fullCData(oldp+181,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+183,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+184,(vlSelf->systolic_array__DOT__psum_v
                              [3U][3U]),20);
    bufp->fullCData(oldp+185,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
    bufp->fullCData(oldp+187,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    bufp->fullIData(oldp+188,(4U),32);
    bufp->fullIData(oldp+189,(8U),32);
    bufp->fullIData(oldp+190,(0x14U),32);
    bufp->fullIData(oldp+191,(1U),32);
}
