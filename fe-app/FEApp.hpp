// FEApp lib
//
// Copyright (c) Claus Stovgaard - All rights reserved
// SPDX-License-Identifier: Apache-2.0
//
// Top header for FEApp lib
//
// Author(s):
//    Claus Stovgaard (claus@frosteyes.dk)
//

#ifndef FEAPP_FEAPP_H_
#define FEAPP_FEAPP_H_

namespace fe {

class FEApp {
 public:
  // Constructor, destructor
  FEApp();
  ~FEApp();

  // Main method
  void Run(int argc, char** argv);
};

}  // namespace fe

#endif  // FEAPP_FEAPP_H_
