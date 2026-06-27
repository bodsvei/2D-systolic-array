// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array___024root.h"

void Vsystolic_array___024root___ctor_var_reset(Vsystolic_array___024root* vlSelf);

Vsystolic_array___024root::Vsystolic_array___024root(Vsystolic_array__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsystolic_array___024root___ctor_var_reset(this);
}

void Vsystolic_array___024root___configure_coverage(Vsystolic_array___024root* vlSelf, bool first);

void Vsystolic_array___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vsystolic_array___024root___configure_coverage(this, first);
}

Vsystolic_array___024root::~Vsystolic_array___024root() {
}

// Coverage
void Vsystolic_array___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
