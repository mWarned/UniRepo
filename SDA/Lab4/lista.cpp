#include <iostream>
#include "lista.h"

void createDLL(DLList &lista){
  int x;
  std::cout << "Insert elements until 0 is inserted" << std::endl;
  std::cin >> x;
  while (x) {
    insertDataDLL(lista, x);
    std::cin >> x;
  }
}

void insertDataDLL(DLList &lista, int val){
  Elem* ins = new Elem();
  ins->data = val;
  if (lista.first == nullptr) {
    lista.first = ins;
    lista.last = ins;
  } else {
    ins->next = lista.first;
    lista.first->prev = ins;
    lista.first = ins;
  }
}

void displayDLL(DLList lista){
  Elem* crntVal = lista.first; 
  while (crntVal != nullptr){
    std::cout << crntVal->data << " ";
    crntVal = crntVal->next;
  }
  std::cout << std::endl;
}

void createCL(Elem* &head){
  int x;
  std::cout << "Insert elements until 0 is inserted" << std::endl;
  std::cin >> x;
  while (x) {
    insertDataCL(head, x);
    std::cin >> x;
  }
}

void insertDataCL(Elem* &head, int val){
  Elem *ins = new Elem();
  ins->data = val;
  if (head == nullptr) {
    ins->next = ins;
    head = ins;
  } else {
    ins->next = head->next;
    head->next = ins;
    head = ins;
  }
}

void displayCL(Elem* head){
  Elem* crntVal = head->next;
  std::cout << head->data << " ";
  while (crntVal != head) {
    std::cout << crntVal->data << " ";
    crntVal = crntVal->next;
  }
}

bool srcVal(Elem* &head, int x){
  bool found = false;
  Elem* crntVal = head;
  while (crntVal != nullptr) {
    if (crntVal->data == x) {
      found = true;
      break;
    } else {
      crntVal = crntVal->next;
    }
  }
  return found;
}

void insertOnPosDLL(Elem* head, int val, int pos){
  if (head != nullptr) {
    Elem* prevPos = head;
    for (int i = 1; i < pos - 1; i++) {
      prevPos = prevPos->next;
    }
    Elem* ins;
    ins->data = val;
    ins->prev = nullptr;
    ins->next = prevPos->next;
    head->prev = ins;
    head = ins;
    prevPos->next = ins;
  } else {
    std::cout << "Lista nu are date!";
  }
}

void deleteOnPosDLL(Elem* head, int pos){
  if (head != nullptr) {
    Elem* prevPos = head;
    for (int i = 0; i < pos - 2; i++) {
      prevPos = prevPos->next;
    }
    (prevPos->next)->data = 0;
    Elem* nextPos = (prevPos->next)->next;
    prevPos->next = nextPos;
    nextPos->prev = prevPos;
  } else{
    std::cout << "Lista nu are date!";
  }
}

void srcKthFromBack(Elem* head, int k){
  Elem* first = head;
  Elem* second = head;

  for (int i = 0; i < k; i++) {
    first = first->next;
  }

  while (first->next != nullptr) {
    first = first->next;
    second = second->next;
  }

  std::cout << "Elementul k numarat din spate = " << second->data << std::endl;
}

void displayBothWays(Elem* head){
  if (head == nullptr) {
    std::cout << std::endl;
    return;
  }

  std::cout << head->data << " ";
  displayBothWays(head->next);
  std::cout << head->data << " ";   

  if (head == nullptr) {
    std::cout << std::endl;
    return;
  }
}

