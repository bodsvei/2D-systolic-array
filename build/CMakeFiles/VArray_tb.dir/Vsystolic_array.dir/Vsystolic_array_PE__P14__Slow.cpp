// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array_PE__P14.h"
#include "Vsystolic_array__Syms.h"

void Vsystolic_array_PE__P14___ctor_var_reset(Vsystolic_array_PE__P14* vlSelf);

Vsystolic_array_PE__P14::Vsystolic_array_PE__P14(Vsystolic_array__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsystolic_array_PE__P14___ctor_var_reset(this);
}

void Vsystolic_array_PE__P14___configure_coverage(Vsystolic_array_PE__P14* vlSelf, bool first);

void Vsystolic_array_PE__P14::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vsystolic_array_PE__P14___configure_coverage(this, first);
}

Vsystolic_array_PE__P14::~Vsystolic_array_PE__P14() {
}

// Coverage
void Vsystolic_array_PE__P14::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
