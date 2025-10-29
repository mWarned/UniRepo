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

void deleteList(Elem*& head) {
  while (head) {
    Elem* tmp = head;
    head = head->next;
    delete tmp;
  }
}

void insertData(Elem* &head, int val){
  Elem* ins = new Elem;
  ins->data = val;
  ins->next = head;
  head = ins;
}

void displayList(Elem* head){
  Elem* crntVal = head; 
  while (crntVal != nullptr){
    std::cout << crntVal->data << " ";
    crntVal = crntVal->next;
  }
  std::cout << std::endl;
}

bool srcVal(Elem* head, int x){
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

void insertOnPos(Elem* head, int val, int pos){
  Elem* prevPos = head;
  for (int i = 0; i < pos - 1; i++) {
    prevPos = prevPos->next;
  }
  Elem* ins;
  ins->data = val;
  ins->next = prevPos->next;
  prevPos->next = ins;
}

void deleteOnPos(Elem* head, int pos){
  Elem* prevPos = head;
  for (int i = 0; i < pos - 1; i++) {
    prevPos = prevPos->next;
  }
  Elem* tmp = prevPos->next;
  Elem* nextPos = (prevPos->next)->next;
  prevPos->next = nextPos;
  delete tmp;
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
}

bool checkLoop(Elem* head){
  if (head->next == nullptr || head == nullptr) {
    return false;
  }

  Elem* fast = head;
  Elem* slow = head;

  do {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      return true;
    }
  } while (fast != nullptr && slow != nullptr || fast->next == nullptr); 

  return false;
}

