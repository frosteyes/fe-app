#  FEApp lib
#
#  Copyright (c) Claus Stovgaard - All rights reserved.
#  SPDX-License-Identifier: Apache-2.0
#
#  CMake setup for FEApp lib
#
#  Author(s):
#     Claus Stovgaard (claus@frosteyes.dk)

find_package (Boost COMPONENTS program_options system REQUIRED)

add_library(FEApp
            ArgumentParser.cpp
            FEApp.cpp)

include_directories(${Boost_INCLUDE_DIRS})

target_link_libraries (FEApp ${Boost_LIBRARIES})

target_include_directories(FEApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
