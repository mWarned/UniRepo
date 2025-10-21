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

    return 0;
}
