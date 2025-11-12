#include <iostream>

#include "lista.h"
#include "ex2.h"

int MENU_ex2(){
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "===========================================" << std::endl;
  std::cout << "                 Exercitiul 2              " << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "1 - Definirea datelor" << std::endl;
  std::cout << "2 - Afisarea listelor" << std::endl;
  std::cout << "3 - Concatenarea listelor" << std::endl;
  std::cout << "4 - Interclasarea listelor" << std::endl;
  std::cout << "0 - Exit" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;
  std::cout << "\033[H\033[J";
  return choice;
}

void runEx2_1(DLList& lista1, DLList& lista2){
  createDLL(lista1);
  createDLL(lista2);
}

void runEx2_2(const DLList& lista1,const DLList& lista2){
  std::cout << "Lista 1: ";
  displayDLL(lista1);
  std::cout << "Lista 2: ";
  displayDLL(lista2);
}

DLList runEx2_3(const DLList& lista1,const DLList& lista2){
  DLList result;
  Elem* crnt = lista1.first;
  while (crnt) {
    insertDataDLL(result, crnt->data);
    crnt = crnt->next;
  }
  crnt = lista2.first;
  while (crnt) {
    insertDataDLL(result, crnt->data);
    crnt = crnt->next;
  }

  return result;
}

DLList runEx2_4(const DLList& lista1, const DLList& lista2) {
    DLList result;
    result.first = result.last = nullptr;

    Elem* p1 = lista1.first;
    Elem* p2 = lista2.first;

    while (p1 || p2) {
        if (p1) {
            insertDataDLL(result, p1->data);
            p1 = p1->next;
        }
        if (p2) {
            insertDataDLL(result, p2->data);
            p2 = p2->next;
        }
    }

    return result;
}
