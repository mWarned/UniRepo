#pragma once

#include <iostream>
#include <limits>

template <typename T>
struct NodeSLL {
  T data;
  NodeSLL<T>* next;
};

template <typename T>
using SimpleLL = NodeSLL<T>* ;

template <typename T>
SimpleLL<T> create(){
  std::cout << "Inserarea elementului - ";
  T n;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin >> n;
  if (n) {
    NodeSLL<T>* ins = new NodeSLL<T>();
    ins->next = create<T>();
    ins->data = n;
    return ins;
  }
  return 0;
}

template <typename T>
void display(SimpleLL<T> head){
  while (head) {
    std::cout << head->data << " ";
    head = head->next;
  }
  std::cout << std::endl;
}

template <typename T>
void displayFromBack(SimpleLL<T> head) {
  if (head->next) {
    displayFromBack(head->next);
  }
  std::cout << head->data << " ";
}

template <typename T>
void deleteList(SimpleLL<T> head) {
  while (head->next) {
    SimpleLL<T> tmp = head;
    head = head->next;
    delete tmp;
  }
  delete head;
}

int cmmdc(int, int);
float S(float x, int n);
