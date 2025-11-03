#include <iostream>
#include "lista.h"

void createList(Elem* &head){
  int x;
  std::cout << "Inseart elements until 0 is inserted" << std::endl;
  std::cin >> x;
  while (x) {
    insertData(head, x);
    std::cin >> x;
  }
}

void insertData(Elem* &head, int val){
  Elem* ins = new Elem(val, head);
  head = ins;
}

void deleteList(Elem* &head) {
  while (head) {
    Elem* tmp = head;
    head = head->next;
    delete tmp;
  }
}

void displayList(Elem* head){
  Elem* crntVal = head; 
  while (crntVal != nullptr){
    std::cout << crntVal->data << " ";
    crntVal = crntVal->next;
  }
  std::cout << std::endl;
}

void cpyList(Elem* list, Elem* &cpy) {
  if(!list) {
    cpy = nullptr;
    return;
  }

  cpyList(list->next, cpy);
  insertData(cpy, list->data);
}

void concat(Elem* head, Elem* list){
   while(head->next) head = head->next;
   head->next = list;
}

void interclasare(Elem* &head, Elem* x, Elem* y) {
  head = x;
  Elem* pointX = x;
  Elem* pointY = y;

  while (pointX && pointY) {
    Elem* succX = pointX->next;
    Elem* succY = pointY->next;

    pointX->next = pointY;
    if (succX) {
      pointY->next = succX;
    } else {
      pointY->next = succY;
    }

    pointX = succX;
    pointY = succY;
  }
}
