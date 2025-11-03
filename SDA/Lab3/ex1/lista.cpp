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

void insertOnPos(Elem*& head, int val, int pos) {
    if (pos < 0) return;
    if (pos == 0) {
        insertData(head, val);
        return;
    }

    Elem* prev = head;
    for (int i = 0; i < pos - 1; ++i) {
        if (!prev) return;
        prev = prev->next;
    }
    if (!prev) return;

    Elem* ins = new Elem;
    ins->data = val;
    ins->next = prev->next;
    prev->next = ins;
}

bool deleteOnPos(Elem*& head, int pos) {
    if (!head || pos < 0) return false;

    if (pos == 0) {
        Elem* tmp = head;
        head = head->next;
        delete tmp;
        return true;
    }

    Elem* prev = head;
    for (int i = 0; i < pos - 1; ++i) {
        if (!prev->next) return false;
        prev = prev->next;
    }
    if (!prev->next) return false;

    Elem* tmp = prev->next;
    prev->next = tmp->next;
    delete tmp;
    return true;
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

  while (fast->next->next != nullptr && slow != nullptr) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      return true;
    } 
    if(fast->next == nullptr) {
      return false;
    }
  }

  return false;
}

void findMiddle(Elem* head) {
  Elem* slow = head;
  Elem* fast = head;

  while(fast->next != nullptr && fast->next->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;

    if (fast->next == nullptr) {
      std::cout << "Mijlocul listei este - " << slow->data << std::endl;
    } else if (fast->next->next == nullptr) {
      std::cout << "Mijlocul listei este - " << slow->data << " si " << slow->next->data << std::endl;
    }
  }
}

void reverseList(Elem* &head) {
  if (head == nullptr && head->next == nullptr) return;

  Elem* newhead = head->next;
  head->next = nullptr;

  while(newhead->next){
    Elem* tmp = newhead->next;
    newhead->next = head;
    head = newhead;
    newhead = tmp;
  }

  newhead->next = head;
  head = newhead;
}

