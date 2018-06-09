// Copyright (C) 2017-2018 Jonathan Müller <jonathanmueller.dev@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

#ifndef CPPAST_PREPROCESSOR_HPP_INCLUDED
#define CPPAST_PREPROCESSOR_HPP_INCLUDED

#include <cppast/cpp_preprocessor.hpp>
#include <cppast/libclang_parser.hpp>

namespace cppast
{
    namespace detail
    {
        std::unique_ptr<preprocessor_output> preprocess(const libclang_compile_config& config, const char* path,
                                                        const diagnostic_logger& logger);
    }
} // namespace cppast::detail

#endif // CPPAST_PREPROCESSOR_HPP_INCLUDED
