//
//  CommandProcessor.cpp
//  Assignment1
//
//  Created by rick gessner on 10/15/18.
//  Copyright © 2018 rick gessner. All rights reserved.
//

#include "CommandProcessor.hpp"
#include "Command.hpp"
#include <iostream>

//Why is this a stand-alone function, and not a method on CommandProcessor?
size_t getUserInput(std::string &anInput) {
  cout << "> ";
  getline(std::cin, anInput);
  return anInput.length();
}

CommandProcessor::CommandProcessor() : mCommands() {
  addCommand(new Command("cd"), 1, 1);
  addCommand(new Command("ls"), 0, 1);
  addCommand(Command("mv"), 2 );
}

size_t CommandProcessor::addCommand(Command* aCommand) {
  mCommands.push_back(aCommand);
  return mCommands.size();
}

Command* CommandProcessor::findCommand(std::string &anInput) {
  std::string theKeyword = anInput.substr(0, anInput.find(" "));
  for (auto *theCmd : mCommands) {
    if((*theCmd)==theKeyword) {
      return theCmd;
    }
  }
  return nullptr;
}

int runTests() {
  //add a test for each known command...
  std::cout << "runTests " << std::endl;
  return 0;
}

int CommandProcessor::runInteractive() {
  std::string theInput;
  while(getUserInput(theInput)) {
    if(Command* theCmd = findCommand(theInput)) {
      if(int theResult=(*theCmd)(theInput)) {
        (*theCmd).describeError(theResult);
      }
    }
  }
  return 0;
}

