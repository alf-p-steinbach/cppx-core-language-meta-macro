#pragma once
// Copyright (c) 2013 Alf P. Steinbach, distributed under Boost license 1.0.

#define MM_INVOKE( macro, args ) macro args
#define MM_INVOKE_B( macro, args ) macro args     // For nested invocation with g++.
