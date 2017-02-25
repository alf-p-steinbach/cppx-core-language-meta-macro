#pragma once
// #include <p/macro_magic/MM_APPLY_WITH_FIXED_ARG.hpp>
// Copyright (c) 2017 Alf P. Steinbach, distributed under Boost license 1.0.

#include <p/macro_magic/MM_NARGS.hpp>   // MM_INVOKE, MM_INVOKE_B, MM_CONCAT, MM_NARGS

#define MM_APPLY_WFA_1( macroname, fixed_arg, a1 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) )

#define MM_APPLY_WFA_2( macroname, fixed_arg, a1, a2 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_1( macroname, fixed_arg, a2 )

#define MM_APPLY_WFA_3( macroname, fixed_arg, a1, a2, a3 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_2( macroname, fixed_arg, a2, a3 )

#define MM_APPLY_WFA_4( macroname, fixed_arg, a1, a2, a3, a4 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_3( macroname, fixed_arg, a2, a3, a4 )

#define MM_APPLY_WFA_5( macroname, fixed_arg, a1, a2, a3, a4, a5 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_4( macroname, fixed_arg, a2, a3, a4, a5 )

#define MM_APPLY_WFA_6( macroname, fixed_arg, a1, a2, a3, a4, a5, a6 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_5( macroname, fixed_arg, a2, a3, a4, a5, a6 )

#define MM_APPLY_WFA_7( macroname, fixed_arg, a1, a2, a3, a4, a5, a6, a7 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_6( macroname, fixed_arg, a2, a3, a4, a5, a6, a7 )

#define MM_APPLY_WFA_8( macroname, fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_7( macroname, fixed_arg, a2, a3, a4, a5, a6, a7, a8 )

#define MM_APPLY_WFA_9( macroname, fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9 ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_8( macroname, fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9 )

#define MM_APPLY_WFA_10( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_9( macroname, fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10 )

#define MM_APPLY_WFA_11( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_10( macroname, fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 )

#define MM_APPLY_WFA_12( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_11( macroname, fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12 )

#define MM_APPLY_WFA_13( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_12( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13 \
        )

#define MM_APPLY_WFA_14( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_13( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14 \
        )

#define MM_APPLY_WFA_15( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_14( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15 \
        )

#define MM_APPLY_WFA_16( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_15( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16 \
        )

#define MM_APPLY_WFA_17( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_16( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17 \
        )

#define MM_APPLY_WFA_18( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_17( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18 \
        )

#define MM_APPLY_WFA_19( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18, a19 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_18( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18, a19 \
        )

#define MM_APPLY_WFA_20( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18, a19, a20 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_19( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18, a19, a20 \
        )

#define MM_APPLY_WFA_21( macroname, \
    fixed_arg, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, \
    a21 \
    ) \
    MM_INVOKE_B( macroname, (fixed_arg, a1) ) \
    MM_APPLY_WFA_20( macroname, \
        fixed_arg, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18, a19, a20, a21 \
        )

#define MM_APPLY_WITH_FIXED_ARG( macroname, fixed_arg, ... ) \
    MM_INVOKE( \
        MM_CONCAT( MM_APPLY_WFA_, MM_NARGS( __VA_ARGS__ ) ), \
        ( macroname, fixed_arg, __VA_ARGS__ ) \
        )
