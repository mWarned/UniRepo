#include <iostream>

#include "lista.h"

int MENU_ex2(){
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "===========================================" << std::endl;
  std::cout << "                 Exercitiul 2              " << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "1 - Definirea datelor" << std::endl;
  std::cout << "2 - Concatenarea listelor" << std::endl;
  std::cout << "0 - Exit" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;
  std::cout << "\033[H\033[J";
  return choice;
}

void runEx2_1(DLList lista1, DLList lista2){
  createDLL(lista1);
  createDLL(lista2);
}

void runEx2_2(DLList lista1, DLList lista2, DLList lista3){
  lista3.first = lista1.first;
  lista3.last = lista2.last;
  lista1.last->next = lista2.first;

  displayDLL(lista3);
}
