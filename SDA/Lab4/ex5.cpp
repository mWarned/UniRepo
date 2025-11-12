#include <iostream>

#include "lista.h"
#include "ex5.h"

int MENU_ex5(){
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "===========================================" << std::endl;
  std::cout << "                 Exercitiul 5              " << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "1 - Efectuarea executarii\n";
  std::cout << "0 - Exit" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;
  std::cout << "\033[H\033[J";
  return choice;
}

void runEx5_1(ElemS*& head) {
    if (!head) {
        std::cout << "Lista este goala!\n";
        return;
    }

    int m, p0;
    std::cout << "Dati pozitia p0: ";
    std::cin >> p0;
    std::cout << "Dati valoarea m: ";
    std::cin >> m;

    if (m <= 0) {std::cout << "m > 0!\n";return;}
    if (p0 < 0) {std::cout << "Pozitia initiala invalida!\n"; return;}

    displayCLS(head);
    std::cout << "\nOrdinea executiilor:\n";
    std::cout << "========================\n";

    while (head->next != head) {
        ElemS* prev = head;
        for (int i = 0; i < p0 - 1; i++) {
            prev = prev->next;
        }

        for (int i = 0; i < m - 1; i++) {
            prev = prev->next;
        }

        ElemS* to_delete = prev->next;
        std::cout << "Executat: " << to_delete->name << std::endl;

        prev->next = to_delete->next;
        
        if (to_delete == head) {
            head = to_delete->next;
        }

        delete to_delete;
    }

    std::cout << "\nA supravietuit: " << head->name << std::endl;
}

