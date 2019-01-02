//
//  Command.cpp
//  Assignment1
//
//  Created by rick gessner on 10/15/18.
//  Copyright © 2018 rick gessner. All rights reserved.
//

#include "Command.hpp"
#include <iostream>

Command::Command(const char* aKeyword, int aMinArgs, int aMaxArgs)
  minArgs(aMinArgs), maxArgs(aMaxArgs), mKeyword(aKeyword) {}
  
bool Command::operator==(std::string &aKeyword) {
  return !mKeyword.compare(aKeyword);
}

int Command::operator ()(std::string &anInputString) {
  //first, retrieve arguments from inputString
  
  //if you have a valid number of arguments, output the command with args
  //otherwise return an error code related to the arguments
  
  std::cout << "called " << mKeyword << " with " << anInputString << std::endl;
  return 0; //would be an error code; 0=ok
}

Command& Command::describeError(float anErrorCode) {
  //show a text description of the error code here...
  std::cout << "some error here...";
  return *this;
}
