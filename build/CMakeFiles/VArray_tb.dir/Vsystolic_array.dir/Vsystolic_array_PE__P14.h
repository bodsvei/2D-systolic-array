// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY_PE__P14_H_
#define VERILATED_VSYSTOLIC_ARRAY_PE__P14_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vsystolic_array__Syms;
VL_MODULE(Vsystolic_array_PE__P14) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(weight_load,0,0);
    VL_IN8(weight_in,7,0);
    VL_IN8(act_in,7,0);
    VL_OUT8(act_out,7,0);
    CData/*7:0*/ __PVT__weight;
    CData/*0:0*/ __Vtogcov__weight_load;
    CData/*7:0*/ __Vtogcov__act_in;
    CData/*7:0*/ __Vtogcov__act_out;
    CData/*7:0*/ __Vtogcov__weight;
    VL_IN(psum_in,19,0);
    VL_OUT(psum_out,19,0);
    IData/*19:0*/ __Vtogcov__psum_in;
    IData/*19:0*/ __Vtogcov__psum_out;

    // INTERNAL VARIABLES
    Vsystolic_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array_PE__P14(Vsystolic_array__Syms* symsp, const char* name);
    ~Vsystolic_array_PE__P14();
    VL_UNCOPYABLE(Vsystolic_array_PE__P14);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
