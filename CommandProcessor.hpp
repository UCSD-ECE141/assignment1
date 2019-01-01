//
//  CommandProcessor.hpp
//  Assignment1
//
//  Created by rick gessner on 10/15/18.
//  Copyright © 2018 rick gessner. All rights reserved.
//

#ifndef CommandProcessor_hpp  //what does this do?
#define CommandProcessor_hpp

#include <stdio.h>
#include <string>
#include <vector>

class Command; //what is this doing here?

class CommandProcessor {
public: //why public?
  
            CommandProcessor();
  size_t    addCommand(Command* aCommand);
  Command*  findCommand(std::string &anInput);
  int       runInteractive();
  int       runTests();

private:  //why make these private?
  std::vector< Command*> mCommands; //subtle problem here...
};

#endif /* CommandProcessor_hpp */
