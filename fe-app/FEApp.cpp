// FEApp lib
//
// Copyright (c) Claus Stovgaard - All rights reserved
// SPDX-License-Identifier: Apache-2.0
//
// See header file for description
//
// Author(s):
//    Claus Stovgaard (claus@frosteyes.dk)
//

#include "ArgumentParser.hpp"
#include "FEApp.hpp"
#include <cassert>
#include <iostream>

namespace fe {

using std::cout;
using std::endl;


FEApp::FEApp() {
}


FEApp::~FEApp() {
}


void FEApp::Run(int argc, char** argv) {
  // Handle program arguments
  ArgumentParser ap(argc, argv);

  // TODO - use the arguments for something
}

} // namespace fe
