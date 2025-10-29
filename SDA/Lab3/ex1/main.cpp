#include <iostream>
#include "lista.h"

int main () {

  Elem* head = nullptr;

  createList(head);

  displayList(head);

  std::cout << "Valoarea cautata x: ";
  int x;
  std::cin >> x;

  if (srcVal(head, x)){
    std::cout << "Valoarea se afla in lista!" << std::endl;
  } else {
    std::cout << "Valoarea nu se afla in lista!" << std::endl;
  }

  std::cout << "Numarul ce doriti sa-l inserati - ";
  std::cin >> x;
  std::cout << "Pozitia pe care doriti sa-l inserati - ";
  int pos;
  std::cin >> pos;

  insertOnPos(head, x, pos);

  displayList(head);

  std::cout << "Introduceti pozitia care doriti sa o stergeti - ";
  std::cin >> pos;

  deleteOnPos(head, pos);

  displayList(head);

  std::cout << "Introduceti positia k - ";
  std::cin >> x;

  srcKthFromBack(head, x);

  displayBothWays(head);
  std::cout << std::endl;

  bool hasLoop = checkLoop(head);
  if (hasLoop) {
    std::cout << "Lista are bucla!" << std::endl;
  } else {
    std::cout << "Lista nu are bucle!" << std::endl;
  }

  // Crearea unei bucle pentru verificare
  Elem* posVar = head;
  Elem* restoration = nullptr;
  for (int i = 0; i < 3; i++) {
    posVar = posVar->next;
  }

  restoration = posVar->next;
  posVar->next = head->next;

  displayBothWays(head);
  std::cout << std::endl;

  hasLoop = checkLoop(head);
  if (hasLoop) {
    std::cout << "Lista are bucla!" << std::endl;
  } else {
    std::cout << "Lista nu are bucle!" << std::endl;
  }

  posVar->next = restoration;

  return 0;
}
