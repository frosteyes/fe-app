#  simple test application
#
#  Copyright (c) Claus Stovgaard - All rights reserved.
#  SPDX-License-Identifier: Apache-2.0
#
#  Top cmake
#
#  Author(s):
#     Claus Stovgaard - claus@frosteyes.dk

cmake_minimum_required (VERSION 3.22)

# Use clang
find_program (CMAKE_C_COMPILER clang)
find_program (CMAKE_CXX_COMPILER clang++)

# The project itself
project (fe-boost-app)

# Compiler definitions
add_definitions ("-g"
                 "-Wall"
                 "-Werror"
                 "-pedantic"
                 "-std=c++11")

add_subdirectory (fe-app)

add_executable (fe-test
                src/main.cpp)

target_link_libraries (fe-test
                       LINK_PUBLIC FEApp)
