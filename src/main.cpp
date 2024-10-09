// FrostEyes test application - fe-test
//
// Copyright (c) Claus Stovgaard - All rights reserved
// SPDX-License-Identifier: Apache-2.0
//
// This module is the main starting point for the application.
// Enter the OO world
//
// Author(s):
//    Claus Stovgaard (claus@frosteyes.dk)
//

#include <cassert>
#include "FEApp.hpp"

using fe::FEApp;

int main(int argc, char** argv) {
  auto* app = new FEApp;

  assert(app);

  app->Run(argc, argv);

  return 0;
}
