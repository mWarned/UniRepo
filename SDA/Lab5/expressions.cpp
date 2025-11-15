#include <iostream>
#include "expressions.h"

void pushS(StringStack& top, const std::string& value) {
  StringNode* ins = new StringNode();
  ins->str = value;
  ins->next = top;
  top = ins;
}

void popS(StringStack& top) {
  if (isEmptyS(top)) {
    std::cout << "Nu poti face pop() dintr-o stiva goala!" << std::endl;
  } else {
    StringStack tmp = top;
    top = top->next;
    delete tmp;
  }
}

std::string topS(StringStack& top) {
  if (isEmptyS(top)) {
    std::cout << "Nu poti face top() dintr-o stiva goala!" << std::endl;
    return "";
  }
  return top->str;
}

bool isEmptyS(StringStack& top){
  return top == nullptr;
}

bool isdigit(char c){
  if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
      || c == '7' || c == '8' || c == '9') {
    return true;
  }
  return false;
}

std::string infixToPostfix(const std::string& infix) {
  StringStack s = nullptr;
  std::string postfix = "";

  for (char c : infix) {
    if (isdigit(c)) {
      postfix += c;
    }
    else if (c == '(') {
      pushS(s, std::string(1, c));
    }
    else if (c == ')') {
      while (!isEmptyS(s) && topS(s) != "(") {
        postfix += topS(s);
        popS(s);
      }
      if (!isEmptyS(s)) popS(s);
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/') {
      while (!isEmptyS(s) && topS(s) != "(") {
        std::string topOp = topS(s);
        int crntOp = (c == '*' || c == '/') ? 2 : 1;
        int prevOp = (topOp == "*" || topOp == "/") ? 2 : 1;
        if (crntOp <= prevOp) {
          postfix += topS(s);
          popS(s);
        } else {
          break;
        }
      }
      pushS(s, std::string(1, c));
    }
  }

  while (!isEmptyS(s)) {
    postfix += topS(s);
    popS(s);
  }

  return postfix;
}

std::string postfixToPrefix(const std::string& postfix) {
  StringStack s = nullptr;
  
  for (char c : postfix) {
    if (isdigit(c)) {
      pushS(s, std::string(1, c));
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/') {
      std::string op1 = topS(s); popS(s);
      std::string op2 = topS(s); popS(s);
      
      std::string prefix = std::string(1, c) + op2 + op1;
      
      pushS(s, prefix);
    }
  }
  
  std::string result = topS(s);
  popS(s);
  return result;
}
