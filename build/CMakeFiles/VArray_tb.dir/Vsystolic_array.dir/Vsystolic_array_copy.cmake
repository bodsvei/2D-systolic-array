# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/Users/anirudhsinghair/Developer/verilator-v4.224" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vsystolic_array_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vsystolic_array_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vsystolic_array_SC 1)
# Coverage output mode?  0/1 (from --coverage)
set(Vsystolic_array_COVERAGE 1)
# Threaded output mode?  0/1/N threads (from --threads)
set(Vsystolic_array_THREADS 0)
# Threaded tracing output mode?  0/1/N threads (from --threads/--trace-threads)
set(Vsystolic_array_TRACE_THREADS 0)
set(Vsystolic_array_TRACE_FST_WRITER_THREAD 0)
# Struct output mode?  0/1 (from --trace-structs)
set(Vsystolic_array_TRACE_STRUCTS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vsystolic_array_TRACE_VCD 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vsystolic_array_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(Vsystolic_array_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_c.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_sc.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vsystolic_array_CLASSES_SLOW "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array___024root__Slow.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array___024root__DepSet_hf9a61689__0__Slow.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array___024root__DepSet_h9e4918b9__0__Slow.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array_PE__P14__Slow.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array_PE__P14__DepSet_ha6c3c7f8__0__Slow.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array_PE__P14__DepSet_hb43af16d__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(Vsystolic_array_CLASSES_FAST "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array___024root__DepSet_hf9a61689__0.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array___024root__DepSet_h9e4918b9__0.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array_PE__P14__DepSet_hb43af16d__0.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array_PE__P14__DepSet_hb43af16d__1.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vsystolic_array_SUPPORT_SLOW "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array__Syms.cpp" "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array__Trace__0__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vsystolic_array_SUPPORT_FAST "/Users/anirudhsinghair/Documents/GitHub/2D-systolic-array/build/CMakeFiles/VArray_tb.dir/Vsystolic_array.dir/Vsystolic_array__Trace__0.cpp")
# All dependencies
set(Vsystolic_array_DEPS "/Users/anirudhsinghair/Developer/verilator-v4.224/bin/verilator_bin" "pe.v" "systolic_array.v")
# User .cpp files (from .cpp's on Verilator command line)
set(Vsystolic_array_USER_CLASSES )
