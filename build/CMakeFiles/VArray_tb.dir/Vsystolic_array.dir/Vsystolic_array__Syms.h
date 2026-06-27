// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSYSTOLIC_ARRAY__SYMS_H_
#define VERILATED_VSYSTOLIC_ARRAY__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsystolic_array.h"

// INCLUDE MODULE CLASSES
#include "Vsystolic_array___024root.h"
#include "Vsystolic_array_PE__P14.h"

// SYMS CLASS (contains all model state)
class Vsystolic_array__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsystolic_array* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsystolic_array___024root      TOP;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_array_PE__P14        TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;

    // COVERAGE
    uint32_t __Vcoverage[397];

    // CONSTRUCTORS
    Vsystolic_array__Syms(VerilatedContext* contextp, const char* namep, Vsystolic_array* modelp);
    ~Vsystolic_array__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
