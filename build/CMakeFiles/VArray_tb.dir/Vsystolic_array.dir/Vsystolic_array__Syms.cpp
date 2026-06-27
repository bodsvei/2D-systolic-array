// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array.h"
#include "Vsystolic_array___024root.h"
#include "Vsystolic_array_PE__P14.h"

// FUNCTIONS
Vsystolic_array__Syms::~Vsystolic_array__Syms()
{
}

Vsystolic_array__Syms::Vsystolic_array__Syms(VerilatedContext* contextp, const char* namep,Vsystolic_array* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[0].g_col[0].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[0].g_col[1].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[0].g_col[2].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[0].g_col[3].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[1].g_col[0].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[1].g_col[1].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[1].g_col[2].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[1].g_col[3].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[2].g_col[0].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[2].g_col[1].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[2].g_col[2].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[2].g_col[3].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[3].g_col[0].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[3].g_col[1].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[3].g_col[2].pe_inst")}
    , TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst{this, Verilated::catName(namep, "systolic_array.g_row[3].g_col[3].pe_inst")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst;
    TOP.__PVT__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst = &TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__Vconfigure(true);
    TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst.__Vconfigure(false);
    TOP__systolic_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst.__Vconfigure(false);
}
