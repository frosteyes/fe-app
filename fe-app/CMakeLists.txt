#  FEApp lib
#
#  Copyright (c) Claus Stovgaard - All rights reserved.
#  SPDX-License-Identifier: Apache-2.0
#
#  CMake setup for FEApp lib
#
#  Author(s):
#     Claus Stovgaard (claus@frosteyes.dk)

find_package (Boost CONFIG)

add_library(FEApp
            FEApp.cpp)

target_link_libraries (FEApp ${Boost_LIBRARIES})

target_include_directories(FEApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
