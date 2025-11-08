#include <iostream>
#include <string>
#include <cctype>
#include "expressions.h"

void pushC(CharStack& top, char value) {
  Stack ins = new Node();
  ins->data = value;
  ins->next = top;
  top = ins;
}

void popC(CharStack& top) {
  if (isEmpty(top)) {
    std::cout << "Nu poti face pop() dintr-o stiva goala!" << std::endl;
  } else {
    Stack tmp = top;
    top = top->next;
    delete tmp;
  }
}

char topC(CharStack& top) {
  if (isEmpty(top)) {
    std::cout << "Nu poti face top() dintr-o stiva goala!" << std::endl;
    return 0;
  }
  return top->data;
}

bool isEmptyC(CharStack& top){
  return top == nullptr;
}

bool isdigit(char c){
  if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
      || c == '7' || c == '8' || c == '9') {
    return true;
  }
  return false;
}

std::string infixToPostfix(const string& infix) {
    CharStack s;
    std::string postfix = "";

    for (char c : infix) {
        if (isdigit(c)) {
            postfix += c;
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty()) s.pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!s.empty() && s.top() != '(') {
                char topOp = s.top();
                int precC = (c == '*' || c == '/') ? 2 : 1;
                int precTop = (topOp == '*' || topOp == '/') ? 2 : 1;
                if (precC <= precTop) {
                    postfix += topOp;
                    s.pop();
                } else {
                    break;
                }
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

