#pragma once

#include <string>

struct StringNode {
  std::string str;
  StringNode* next;
};
typedef StringNode* StringStack;

void pushS(StringStack&, const std::string&);
void popS(StringStack&);
std::string topS(StringStack&);
bool isEmptyS(StringStack&);

std::string infixToPostfix(const std::string&);
std::string postfixToPrefix(const std::string&);

