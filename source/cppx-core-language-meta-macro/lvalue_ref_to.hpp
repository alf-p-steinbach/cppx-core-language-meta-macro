#pragma once    // Source encoding: UTF-8 with BOM (π is a lowercase Greek "pi").
/// \file
/// \brief Provides the `lvalue_ref_to` helper for restricting macro arguments.

#include <type_traits>  // std::is_rvalue_reference_v

namespace cppx::_
{
    /// A helper for restricting macro arguments, used e.g. in `$items_of`.
    template< class Type >
    inline auto lvalue_ref_to( Type&& c )
        -> Type&
    {
        using Argument_type = Type&&;
        static_assert( not std::is_rvalue_reference_v<Argument_type> );
        return c;
    }

}  // namespace cppx::_

// Exporting namespace:
namespace cppx {
    using cppx::_::lvalue_ref_to;
}  // namespace cppx
