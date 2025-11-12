#include <iostream>
#include "lista.h"
#include "ex1.h"

int MENU_ex1(){
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "===========================================" << std::endl;
  std::cout << "                 Exercitiul 1              " << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "1 - Inserarea unei liste" << std::endl;
  std::cout << "2 - Afisarea listei" << std::endl;
  std::cout << "3 - Inserarea unei valori pe o pozitie data" << std::endl;
  std::cout << "4 - Stergerea unei valori pe o pozitie data" << std::endl;
  std::cout << "0 - Exit" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;
  std::cout << "\033[H\033[J";
  return choice;
}

void runEx1_1(DLList &lista){
  lista.first = nullptr;
  lista.last = nullptr;
  createDLL(lista);
}

void runEx1_2(DLList lista){
  displayDLL(lista);
}

void runEx1_3(DLList lista){
  int val, poz;
  std::cout << "Dati valoarea pe care doriti sa o inserati - ";
  std::cin >> val;
  std::cout << "Dati pozitia pe care doriti sa inserati valoarea - ";
  std::cin >> poz;
  insertOnPosDLL(lista, val, poz);
}

void runEx1_4(DLList lista){
  int val, poz;
  std::cout << "Dati pozitia pe care doriti sa stergeti valoarea - ";
  std::cin >> poz;
  deleteOnPosDLL(lista, poz);
}
