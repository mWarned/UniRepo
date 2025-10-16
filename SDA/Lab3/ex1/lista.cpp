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
    (prevPos->next)->data = 0;
    Elem* nextPos = (prevPos->next)->next;
    prevPos->next = nextPos;
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
