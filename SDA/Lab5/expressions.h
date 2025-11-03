#pragma once

struct CharNode {
  char c;
  CharNode* next;
};
typedef CharNode* CharStack;

void pushC(CharStack&, char);
void popC(CharStack&);
char topC(CharStack&);
bool isEmptyC(CharStack&)
string infixToPostfix(const string&);
