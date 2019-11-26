# Meta macro, a.k.a. *cppx-core-language-meta-macro*

Meta macro is a header-only library with a macro `CPPX_APPLY` to invoke a specified macro on each of up to 63 arguments. There's also `CPPX_APPLY_WITH_FIXED_ARG` to pass a specified fixed first argument to the invoked macro, and there's `CPPX_N_ARGUMENTS` to count the number of arguments passed to a variadic macro.

Especially `CPPX_N_ARGUMENTS` is functionality that ideally should be provided by the core language or the standard library.

## About the macro names.

All uppercase is a common strong convention for macro names in C++.

The idea is that all uppercase is so unpleasant to the eye that it should be reserved for the kind of identifiers, macros, that only should be used as a last resort.

However, unless `CPPX_NO_DOLLARS_PLEASE` is defined these macros can also be used by the less visually annoying names `$apply`, `$apply_with_fixed_arg` and `$n_arguments`. As of C++17 the $ names are formally non-standard, but as far as I know they're accepted by all extant desktop system C++ compilers. And I find that I prefer the more normal tone of voice in these names, as opposed to the shouting uppercase.

## Credit

The `$n_arguments` macro, `CPPX_N_ARGUMENTS`, is based on original code and idea by Laurent Deniau in a 17 January 2006 posting titled “\_\_VA\_NARG\_\_” in (Google Groups link) Usenet group [“comp.std.c”](
https://groups.google.com/forum/?fromgroups=#!topic/comp.std.c/d-6Mj5Lko_s).
