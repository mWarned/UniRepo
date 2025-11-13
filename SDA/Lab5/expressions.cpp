#include <iostream>
#include "expressions.h"

void pushC(CharStack& top, char value) {
  CharNode* ins = new CharNode();
  ins->c = value;
  ins->next = top;
  top = ins;
}

void popC(CharStack& top) {
  if (isEmptyC(top)) {
    std::cout << "Nu poti face pop() dintr-o stiva goala!" << std::endl;
  } else {
    CharStack tmp = top;
    top = top->next;
    delete tmp;
  }
}

char topC(CharStack& top) {
  if (isEmptyC(top)) {
    std::cout << "Nu poti face top() dintr-o stiva goala!" << std::endl;
    return 0;
  }
  return top->c;
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

std::string infixToPostfix(const std::string& infix) {
  CharStack s = nullptr;
  std::string postfix = "";

  for (char c : infix) {
    if (isdigit(c)) {
      postfix += c;
    }
    else if (c == '(') {
      pushC(s, c);
    }
    else if (c == ')') {
      while (!isEmptyC(s) && topC(s) != '(') {
        postfix += topC(s);
        popC(s);
      }
      if (!isEmptyC(s)) popC(s);
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/') {
      while (!isEmptyC(s) && topC(s) != '(') {
        int crntOp = (c == '*' || c == '/') ? 2 : 1;
        int prevOp = (topC(s) == '*' || topC(s) == '/') ? 2 : 1;
        if (crntOp <= prevOp) {
          postfix += topC(s);
          popC(s);
        } else {
          break;
        }
      }
      pushC(s, c);
    }
  }

  while (!isEmptyC(s)) {
    postfix += topC(s);
    popC(s);
  }

  return postfix;
}

std::string postfixToPrefix(const std::string& postfix) {
    CharStack s = nullptr;

    for (char c : postfix) {
        if (std::isdigit(static_cast<unsigned char>(c))) {
            pushC(s, c);
            pushC(s, '\0');
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (isEmptyC(s) || isEmptyC(s->next) || topC(s) != '\0') {
                std::cout << "Expresie postfix invalida!\n";
                while (!isEmptyC(s)) popC(s);
                return "";
            }

            popC(s);
            std::string op2;
            while (!isEmptyC(s) && topC(s) != '\0') {
                op2 = topC(s) + op2;
                popC(s);
            }
            if (!isEmptyC(s)) popC(s);

            if (isEmptyC(s) || topC(s) != '\0') {
                std::cout << "Expresie postfix invalida!\n";
                while (!isEmptyC(s)) popC(s);
                return "";
            }
            popC(s);
            std::string op1;
            while (!isEmptyC(s) && topC(s) != '\0') {
                op1 = topC(s) + op1;
                popC(s);
            }
            if (!isEmptyC(s)) popC(s);

            std::string result = c + op1 + op2;

            for (char ch : result) {
                pushC(s, ch);
            }
            pushC(s, '\0');
        }
    }

    if (isEmptyC(s) || topC(s) != '\0') {
        std::cout << "Expresie  invalida!\n";
        while (!isEmptyC(s)) popC(s);
        return "";
    }

    popC(s);
    std::string result;
    while (!isEmptyC(s)) {
        result = topC(s) + result;
        popC(s);
    }

    if (!isEmptyC(s)) {
        std::cout << "Expresie postfix invalida!\n";
        while (!isEmptyC(s)) popC(s);
        return "";
    }

    return result;
}
