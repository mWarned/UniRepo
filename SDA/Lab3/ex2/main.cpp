#include <iostream>
#include "lista.h"

int main() {
    
    Elem* headX = nullptr;
    Elem* headY = nullptr;

    createList(headX);
    createList(headY);

    std::cout << "Lista X:" << std::endl;
    displayList(headX);

    std::cout << "Lista Y:" << std::endl;
    displayList(headY);

    Elem* headZ1 = headX;
    Elem* point = headZ1;
    while (point->next != nullptr) {
        point = point->next;
    }
    point->next = headY;

    displayList(headZ1);

    Elem* headZ2 = headX;
    Elem* crntX = headX;
    Elem* crntY = headY;
    Elem* point2 = headZ2;

    while (crntX->next != nullptr && crntY->next != nullptr) {
        point2->next = crntY;
        point2 = crntY;
        point2->next = crntX;
        point2 = crntX;

        crntX = crntX->next;
        crntY = crntY->next;
    }

    if (crntX->next == nullptr) {
        while (crntY->next != nullptr) {
            point2->next = crntY;
            point2 = crntY;
            crntY = crntY->next;
        }
    } else {
        while (crntX->next != nullptr) {
            point2->next = crntX;
            point2 = crntX;
            crntX = crntY->next;
        }
    }

    displayList(headZ2);

    return 0;
}
