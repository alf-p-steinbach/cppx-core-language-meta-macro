#pragma once
// Copyright (c) 2013 Alf P. Steinbach.

#define MM_INVOKE( macro, args ) macro args
#define MM_INVOKE_B( macro, args ) macro args     // For nested invocation with g++.
