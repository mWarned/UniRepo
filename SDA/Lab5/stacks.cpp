#include <iostream>

#include "stacks.h"

void init(Stack &s){
  s = nullptr;
}

void push(Stack& top, Atom value) {
  Stack ins = new Node();
  ins->data = value;
  ins->next = top;
  top = ins;
}

void pop(Stack& top) {
  if (isEmpty(top)) {
    std::cout << "Nu poti face pop() dintr-o stiva goala!" << std::endl;
  } else {
    Stack tmp = top;
    top = top->next;
    delete tmp;
  }
}

Atom top(Stack& top) {
  if (isEmpty(top)) {
    std::cout << "Nu poti face top() dintr-o stiva goala!" << std::endl;
    return 0;
  }
  return top->data;
}

bool isEmpty(Stack& top){
  return top == nullptr;
}

void clear(Stack& top) {
  while (!isEmpty(top)) {
    pop(top);
  }
}

void initV(StaticS &s){
  s.top = -1;
}

bool isEmptyV(const StaticS &s){
  if (s.top == -1) return true;
  return false;
}

bool isFull(const StaticS &s){
  if (s.top == MAX_DIM - 1) return true;
  return false;
}

Atom topV(const StaticS &s){
  if (!isEmptyV(s)) {
    return s.v[s.top];
  } else {
    std::cout << "Stiva goala!" << std::endl;
    return 0;
  }
}

void pushV(StaticS &s, Atom val){
  if (!isFull(s)) {
    s.top++;
    s.v[s.top] = val;
  } else {
    std::cout << "Stiva este plina! Nu poti face push!" << std::endl;
  }
}

void popV(StaticS &s) {
  if (!isEmptyV(s)) {
    s.top--;
  } else {
    std::cout << "Stiva este goala! Nu poti face pop!" << std::endl;
  }
}

