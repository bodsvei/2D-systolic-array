cmake_minimum_required(VERSION 3.16)
project(SystolicArray CXX)

find_package(verilator REQUIRED HINTS ${VERILATOR_ROOT} $ENV{VERILATOR_ROOT})

add_executable(VArray_tb
    systolic_array_tb.cc
)

verilate(VArray_tb
    COVERAGE
    TRACE
    INCLUDE_DIRECTORIES "."
    SOURCES 
        systolic_array.v
        pe.v
)
