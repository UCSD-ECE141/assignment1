//
//  Command.hpp
//  Assignment1
//
//  Created by rick gessner on 10/15/18.
//  Copyright © 2018 rick gessner. All rights reserved.
//

#ifndef Command_hpp
#define Command_hpp

#include <string>

class Command {
public: //why public?
  
  Command(const char* aKeyword, int aMinArgs, int aMaxArgs);
  
  virtual bool      operator==(std::string &aKeyword);
  virtual int       operator ()(std::string &anInputString);
  virtual Command&  describeError (int anError);

private: //why private?
  std::string mKeyword;
  int minArgs;
  int maxArgs;
};

#endif /* Command_hpp */
