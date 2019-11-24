#pragma once
// #include <p/macro_magic/MM_APPLY.hpp>
// Copyright (c) 2013, 2017 Alf P. Steinbach, distributed under Boost license 1.0.

#include <p/macro_magic/MM_NARGS.hpp>   // MM_INVOKE, MM_INVOKE_B, MM_CONCAT, MM_NARGS

#define MM_APPLY_1( macroname, a1 ) \
    MM_INVOKE_B( macroname, (a1) )

#define MM_APPLY_2( macroname, a1, a2 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_1( macroname, a2 )

#define MM_APPLY_3( macroname, a1, a2, a3 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_2( macroname, a2, a3 )

#define MM_APPLY_4( macroname, a1, a2, a3, a4 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_3( macroname, a2, a3, a4 )

#define MM_APPLY_5( macroname, a1, a2, a3, a4, a5 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_4( macroname, a2, a3, a4, a5 )

#define MM_APPLY_6( macroname, a1, a2, a3, a4, a5, a6 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_5( macroname, a2, a3, a4, a5, a6 )

#define MM_APPLY_7( macroname, a1, a2, a3, a4, a5, a6, a7 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_6( macroname, a2, a3, a4, a5, a6, a7 )

#define MM_APPLY_8( macroname, a1, a2, a3, a4, a5, a6, a7, a8 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_7( macroname, a2, a3, a4, a5, a6, a7, a8 )

#define MM_APPLY_9( macroname, a1, a2, a3, a4, a5, a6, a7, a8, a9 ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_8( macroname, a2, a3, a4, a5, a6, a7, a8, a9 )

#define MM_APPLY_10( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_9( macroname, a2, a3, a4, a5, a6, a7, a8, a9, a10 )

#define MM_APPLY_11( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_10( macroname, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 )

#define MM_APPLY_12( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_11( macroname, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12 )

#define MM_APPLY_13( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_12( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13 \
        )

#define MM_APPLY_14( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_13( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14 \
        )

#define MM_APPLY_15( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_14( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15 \
        )

#define MM_APPLY_16( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_15( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16 \
        )

#define MM_APPLY_17( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_16( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17 \
        )

#define MM_APPLY_18( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_17( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18 \
        )

#define MM_APPLY_19( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18, a19 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_18( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18, a19 \
        )

#define MM_APPLY_20( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18, a19, a20 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_19( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18, a19, a20 \
        )

#define MM_APPLY_21( macroname, \
    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
    a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, \
    a21 \
    ) \
    MM_INVOKE_B( macroname, (a1) ) \
    MM_APPLY_20( macroname, \
        a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, \
        a12, a13, a14, a15, a16, a17, a18, a19, a20, a21 \
        )

#define MM_APPLY( macroname, ... ) \
    MM_INVOKE( \
        MM_CONCAT( MM_APPLY_, MM_NARGS( __VA_ARGS__ ) ), \
        ( macroname, __VA_ARGS__ ) \
        )
