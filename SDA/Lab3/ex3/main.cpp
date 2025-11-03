// main.cpp
#include "telefoane.h"
#include <iostream>
#include <string>

int main() {
    Node* head = nullptr;
    int choice;
    string name, phone;

    do {
        std::cout << "\nAgenda Menu:\n";
        std::cout << "1. Insert a person\n";
        std::cout << "2. Delete a person\n";
        std::cout << "3. Search phone by name\n";
        std::cout << "4. Display entire agenda\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // To handle newline after input

        switch (choice) {
            case 1:
                std::cout << "Enter name: ";
                std::getline(std::cin, name);
                std::cout << "Enter phone: ";
                std::getline(std::cin, phone);
                insert(&head, name, phone);
                break;
            case 2:
                std::cout << "Enter name to delete: ";
                std::getline(std::cin, name);
                deletePerson(&head, name);
                break;
            case 3:
                std::cout << "Enter name to search: ";
                std::getline(std::cin, name);
                phone = search(head, name);
                std::cout << "Phone: " << phone << std::endl;
                break;
            case 4:
                display(head);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
