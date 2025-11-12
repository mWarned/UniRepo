#include <iostream>

#include "lista.h"
#include "ex3.h"

int MENU_ex3(){
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "===========================================" << std::endl;
  std::cout << "                 Exercitiul 3              " << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "1 - Definirea datelor\n";
  std::cout << "2 - Afisarea permutarilor listei circulare\n";
  std::cout << "3 - Inversarea listei circulare\n";
  std::cout << "0 - Exit" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;
  std::cout << "\033[H\033[J";
  return choice;
}

void runEx3_1(Elem*& head) {
    head = nullptr;
    int x;
    std::cout << "Introdu numerele (0 pentru a termina): ";
    std::cin >> x;
    while (x != 0) {
        insertDataCL(head, x);
        std::cin >> x;
    }
    std::cout << "Lista circulara creata!\n";
    displayCL(head);
}

void runEx3_2(Elem* head) {
    if (!head) {
      std::cout << "Lista este goala!\n";
      return;
    }

    std::cout << "Toate rotarile listei circulare:\n";
    std::cout << "================================\n";

    Elem* start = head;
    do {
        Elem* p = head;
        do {
            std::cout << p->data << " ";
            p = p->next;
        } while (p != head);
        std::cout << std::endl;

        head = head->next;
    } while (head != start);
}

void runEx3_3(Elem*& head) {
    if (!head || head->next == head) {
        std::cout << "Lista are 0 sau 1 element - nu se schimba.\n";
        return;
    }

    std::cout << "Inversare lista circulara...\n";
    reverseCL(head);
    std::cout << "Lista inversata cu succes!\n";
    displayCL(head);
}
