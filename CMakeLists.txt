cmake_minimum_required(VERSION 3.16)
project(SystolicArray CXX)

#Finding Verilator
find_package(verilator REQUIRED HINTS ${VERILATOR_ROOT} $ENV{VERILATOR_ROOT})

#SystemC dependencies
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

#Find SystemC using SystemC's CMake Integration
find_package(SystemCLanguage PATHS ${SYSTEMC_HOME})

add_executable(VArray_tb
    systolic_array_tb.cc
)

set_property(
    TARGET VArray_tb
    PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD}
)

verilate(VArray_tb
    SYSTEMC
    COVERAGE
    TRACE
    INCLUDE_DIRECTORIES "."
    SOURCES 
        systolic_array.sv
        pe.sv
)

verilator_link_systemc(VArray_tb)