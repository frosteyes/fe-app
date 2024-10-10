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
#include <boost/program_options.hpp>
#include <iostream>

namespace fe {

using std::cerr;
using std::cout;
using std::endl;

ArgumentParser::ArgumentParser(int argc, char** argv) {
    Parse(argc, argv);
}


ArgumentParser::~ArgumentParser() {
}


void ArgumentParser::Parse(int argc, char** argv) {
  // Use boost program options to parse arguments
  namespace po = boost::program_options;

  po::options_description desc("Options");
  desc.add_options()
    ("help,h", "Print this help message");

  po::variables_map vm;
  try {
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
      PrintHelpMessage();
      exit(EXIT_SUCCESS);
    }
  } catch(po::error& e) {
    cerr << "Error: " << e.what() << endl;
    PrintHelpMessage();
    exit(EXIT_FAILURE);
  }
}


void ArgumentParser::PrintHelpMessage() {
  cout << "FEApp - is a test app for FrostEyes" << endl
       << "USAGE: ./ntech [-h]" << endl;
}


}  // namespace fe
