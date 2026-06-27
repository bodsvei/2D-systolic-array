// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsystolic_array__Syms.h"


void Vsystolic_array___024root__trace_chg_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_array___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_top_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsystolic_array___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array___024root__trace_chg_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__systolic_array__clk));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__systolic_array__reset));
        bufp->chgBit(oldp+2,(vlSelf->__Vcellinp__systolic_array__weight_load));
        bufp->chgCData(oldp+3,(vlSelf->__Vcellinp__systolic_array__weight_row_sel),2);
        bufp->chgIData(oldp+4,(vlSelf->__Vcellinp__systolic_array__weight_data),32);
        bufp->chgIData(oldp+5,(vlSelf->__Vcellinp__systolic_array__act_col_in),32);
        bufp->chgBit(oldp+6,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
        bufp->chgCData(oldp+7,((0xffU & vlSelf->__Vcellinp__systolic_array__weight_data)),8);
        bufp->chgBit(oldp+8,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
        bufp->chgCData(oldp+9,((0xffU & (vlSelf->__Vcellinp__systolic_array__weight_data 
                                         >> 8U))),8);
        bufp->chgBit(oldp+10,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
        bufp->chgCData(oldp+11,((0xffU & (vlSelf->__Vcellinp__systolic_array__weight_data 
                                          >> 0x10U))),8);
        bufp->chgBit(oldp+12,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
        bufp->chgCData(oldp+13,((vlSelf->__Vcellinp__systolic_array__weight_data 
                                 >> 0x18U)),8);
        bufp->chgBit(oldp+14,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+15,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+16,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+17,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+18,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+19,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+20,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+21,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+22,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+23,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+24,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__weight_load));
        bufp->chgBit(oldp+25,(vlSelf->systolic_array__DOT____Vcellinp__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__weight_load));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+26,(vlSelf->systolic_array__DOT__act_h
                                [0U][0U]),8);
        bufp->chgCData(oldp+27,(vlSelf->systolic_array__DOT__act_h
                                [0U][1U]),8);
        bufp->chgCData(oldp+28,(vlSelf->systolic_array__DOT__act_h
                                [0U][2U]),8);
        bufp->chgCData(oldp+29,(vlSelf->systolic_array__DOT__act_h
                                [0U][3U]),8);
        bufp->chgCData(oldp+30,(vlSelf->systolic_array__DOT__act_h
                                [0U][4U]),8);
        bufp->chgCData(oldp+31,(vlSelf->systolic_array__DOT__act_h
                                [1U][0U]),8);
        bufp->chgCData(oldp+32,(vlSelf->systolic_array__DOT__act_h
                                [1U][1U]),8);
        bufp->chgCData(oldp+33,(vlSelf->systolic_array__DOT__act_h
                                [1U][2U]),8);
        bufp->chgCData(oldp+34,(vlSelf->systolic_array__DOT__act_h
                                [1U][3U]),8);
        bufp->chgCData(oldp+35,(vlSelf->systolic_array__DOT__act_h
                                [1U][4U]),8);
        bufp->chgCData(oldp+36,(vlSelf->systolic_array__DOT__act_h
                                [2U][0U]),8);
        bufp->chgCData(oldp+37,(vlSelf->systolic_array__DOT__act_h
                                [2U][1U]),8);
        bufp->chgCData(oldp+38,(vlSelf->systolic_array__DOT__act_h
                                [2U][2U]),8);
        bufp->chgCData(oldp+39,(vlSelf->systolic_array__DOT__act_h
                                [2U][3U]),8);
        bufp->chgCData(oldp+40,(vlSelf->systolic_array__DOT__act_h
                                [2U][4U]),8);
        bufp->chgCData(oldp+41,(vlSelf->systolic_array__DOT__act_h
                                [3U][0U]),8);
        bufp->chgCData(oldp+42,(vlSelf->systolic_array__DOT__act_h
                                [3U][1U]),8);
        bufp->chgCData(oldp+43,(vlSelf->systolic_array__DOT__act_h
                                [3U][2U]),8);
        bufp->chgCData(oldp+44,(vlSelf->systolic_array__DOT__act_h
                                [3U][3U]),8);
        bufp->chgCData(oldp+45,(vlSelf->systolic_array__DOT__act_h
                                [3U][4U]),8);
        bufp->chgCData(oldp+46,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [0U][0U]),8);
        bufp->chgCData(oldp+47,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [0U][1U]),8);
        bufp->chgCData(oldp+48,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [0U][2U]),8);
        bufp->chgCData(oldp+49,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [0U][3U]),8);
        bufp->chgCData(oldp+50,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [1U][0U]),8);
        bufp->chgCData(oldp+51,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [1U][1U]),8);
        bufp->chgCData(oldp+52,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [1U][2U]),8);
        bufp->chgCData(oldp+53,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [1U][3U]),8);
        bufp->chgCData(oldp+54,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [2U][0U]),8);
        bufp->chgCData(oldp+55,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [2U][1U]),8);
        bufp->chgCData(oldp+56,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [2U][2U]),8);
        bufp->chgCData(oldp+57,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [2U][3U]),8);
        bufp->chgCData(oldp+58,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [3U][0U]),8);
        bufp->chgCData(oldp+59,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [3U][1U]),8);
        bufp->chgCData(oldp+60,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [3U][2U]),8);
        bufp->chgCData(oldp+61,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_chain
                                [3U][3U]),8);
        bufp->chgCData(oldp+62,(vlSelf->systolic_array__DOT__act_h
                                [0U][0U]),8);
        bufp->chgCData(oldp+63,(vlSelf->systolic_array__DOT__act_h
                                [0U][1U]),8);
        bufp->chgCData(oldp+64,(vlSelf->systolic_array__DOT__act_h
                                [0U][2U]),8);
        bufp->chgCData(oldp+65,(vlSelf->systolic_array__DOT__act_h
                                [0U][3U]),8);
        bufp->chgCData(oldp+66,(vlSelf->systolic_array__DOT__act_h
                                [1U][0U]),8);
        bufp->chgCData(oldp+67,(vlSelf->systolic_array__DOT__act_h
                                [1U][1U]),8);
        bufp->chgCData(oldp+68,(vlSelf->systolic_array__DOT__act_h
                                [1U][2U]),8);
        bufp->chgCData(oldp+69,(vlSelf->systolic_array__DOT__act_h
                                [1U][3U]),8);
        bufp->chgCData(oldp+70,(vlSelf->systolic_array__DOT__act_h
                                [2U][0U]),8);
        bufp->chgCData(oldp+71,(vlSelf->systolic_array__DOT__act_h
                                [2U][1U]),8);
        bufp->chgCData(oldp+72,(vlSelf->systolic_array__DOT__act_h
                                [2U][2U]),8);
        bufp->chgCData(oldp+73,(vlSelf->systolic_array__DOT__act_h
                                [2U][3U]),8);
        bufp->chgCData(oldp+74,(vlSelf->systolic_array__DOT__act_h
                                [3U][0U]),8);
        bufp->chgCData(oldp+75,(vlSelf->systolic_array__DOT__act_h
                                [3U][1U]),8);
        bufp->chgCData(oldp+76,(vlSelf->systolic_array__DOT__act_h
                                [3U][2U]),8);
        bufp->chgCData(oldp+77,(vlSelf->systolic_array__DOT__act_h
                                [3U][3U]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+78,(vlSelf->__Vcellout__systolic_array__psum_bottom_out),80);
        bufp->chgWData(oldp+81,(vlSelf->__Vcellout__systolic_array__psum_array_out),320);
        bufp->chgIData(oldp+91,(vlSelf->systolic_array__DOT__psum_v
                                [0U][0U]),20);
        bufp->chgIData(oldp+92,(vlSelf->systolic_array__DOT__psum_v
                                [0U][1U]),20);
        bufp->chgIData(oldp+93,(vlSelf->systolic_array__DOT__psum_v
                                [0U][2U]),20);
        bufp->chgIData(oldp+94,(vlSelf->systolic_array__DOT__psum_v
                                [0U][3U]),20);
        bufp->chgIData(oldp+95,(vlSelf->systolic_array__DOT__psum_v
                                [1U][0U]),20);
        bufp->chgIData(oldp+96,(vlSelf->systolic_array__DOT__psum_v
                                [1U][1U]),20);
        bufp->chgIData(oldp+97,(vlSelf->systolic_array__DOT__psum_v
                                [1U][2U]),20);
        bufp->chgIData(oldp+98,(vlSelf->systolic_array__DOT__psum_v
                                [1U][3U]),20);
        bufp->chgIData(oldp+99,(vlSelf->systolic_array__DOT__psum_v
                                [2U][0U]),20);
        bufp->chgIData(oldp+100,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][1U]),20);
        bufp->chgIData(oldp+101,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][2U]),20);
        bufp->chgIData(oldp+102,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][3U]),20);
        bufp->chgIData(oldp+103,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][0U]),20);
        bufp->chgIData(oldp+104,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][1U]),20);
        bufp->chgIData(oldp+105,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][2U]),20);
        bufp->chgIData(oldp+106,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][3U]),20);
        bufp->chgIData(oldp+107,(vlSelf->systolic_array__DOT__psum_v
                                 [4U][0U]),20);
        bufp->chgIData(oldp+108,(vlSelf->systolic_array__DOT__psum_v
                                 [4U][1U]),20);
        bufp->chgIData(oldp+109,(vlSelf->systolic_array__DOT__psum_v
                                 [4U][2U]),20);
        bufp->chgIData(oldp+110,(vlSelf->systolic_array__DOT__psum_v
                                 [4U][3U]),20);
        bufp->chgCData(oldp+111,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [0U][0U]),8);
        bufp->chgCData(oldp+112,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [0U][1U]),8);
        bufp->chgCData(oldp+113,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [0U][2U]),8);
        bufp->chgCData(oldp+114,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [1U][0U]),8);
        bufp->chgCData(oldp+115,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [1U][1U]),8);
        bufp->chgCData(oldp+116,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [1U][2U]),8);
        bufp->chgCData(oldp+117,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [2U][0U]),8);
        bufp->chgCData(oldp+118,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [2U][1U]),8);
        bufp->chgCData(oldp+119,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [2U][2U]),8);
        bufp->chgCData(oldp+120,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [3U][0U]),8);
        bufp->chgCData(oldp+121,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [3U][1U]),8);
        bufp->chgCData(oldp+122,(vlSelf->systolic_array__DOT__g_skew__DOT__skew_reg
                                 [3U][2U]),8);
        bufp->chgIData(oldp+123,(vlSelf->systolic_array__DOT__psum_v
                                 [0U][0U]),20);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+127,(vlSelf->systolic_array__DOT__psum_v
                                 [0U][1U]),20);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+131,(vlSelf->systolic_array__DOT__psum_v
                                 [0U][2U]),20);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+135,(vlSelf->systolic_array__DOT__psum_v
                                 [0U][3U]),20);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+139,(vlSelf->systolic_array__DOT__psum_v
                                 [1U][0U]),20);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+143,(vlSelf->systolic_array__DOT__psum_v
                                 [1U][1U]),20);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+147,(vlSelf->systolic_array__DOT__psum_v
                                 [1U][2U]),20);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+150,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+151,(vlSelf->systolic_array__DOT__psum_v
                                 [1U][3U]),20);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+155,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][0U]),20);
        bufp->chgCData(oldp+156,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+159,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][1U]),20);
        bufp->chgCData(oldp+160,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+162,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+163,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][2U]),20);
        bufp->chgCData(oldp+164,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+167,(vlSelf->systolic_array__DOT__psum_v
                                 [2U][3U]),20);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+170,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+171,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][0U]),20);
        bufp->chgCData(oldp+172,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+174,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+175,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][1U]),20);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+178,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+179,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][2U]),20);
        bufp->chgCData(oldp+180,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__PVT__weight),8);
        bufp->chgIData(oldp+183,(vlSelf->systolic_array__DOT__psum_v
                                 [3U][3U]),20);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.act_out),8);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.psum_out),20);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__PVT__weight),8);
    }
}

void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_cleanup\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
