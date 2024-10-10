// FEApp lib
//
// Copyright (c) Claus Stovgaard - All rights reserved
// SPDX-License-Identifier: Apache-2.0
//
// Handle commandline arguments to the program
//
// Author(s):
//    Claus Stovgaard (claus@frosteyes.dk)
//

#ifndef FEAPP_ARGUMENTPARSER_H_
#define FEAPP_ARGUMENTPARSER_H_

namespace fe {

class ArgumentParser {
 public:
  // Constructor, destructor
  ArgumentParser(int argc, char** argv);
  ~ArgumentParser();

  // Location for get functions

 protected:
 private:
  // Parse the commandline arguements - called by constructor
  void Parse(int argc, char** argv);

  void PrintHelpMessage();

  // Location for variables of arguments
};

}  // namespace fe

#endif  // NTECH_APPARGUMENTPARSER_H_
