#pragma once

#include <string>

struct CharNode {
  char c;
  CharNode* next;
};
typedef CharNode* CharStack;

void pushC(CharStack&, char);
void popC(CharStack&);
char topC(CharStack&);
bool isEmptyC(CharStack&);
std::string infixToPostfix(const std::string&);
std::string postfixToPrefix(const std::string&);
