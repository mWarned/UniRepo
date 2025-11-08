#include "telefoane.h"
#include <limits> 
#include <string>
#include <iostream>

int main()
{
  Node* head = nullptr;
  int choice;
  std::string name, phone;

  do {
    std::cout << "\nMeniu:\n"
      << "1. Introduce o persoana\n"
      << "2. Sterge o persoana\n"
      << "3. Cauta un telefon dupa nume\n"
      << "4. Afiseaza agenda\n"
      << "5. Exit\n"
      << "Executa actiunea: ";
    std::cin >> choice;

    // Permite introducerea stringurilor
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (choice) {
      case 1:
        std::cout << "Nume: ";
        std::getline(std::cin, name);
        std::cout << "Telefon: ";
        std::getline(std::cin, phone);
        insert(&head, name, phone);
        break;

      case 2:
        std::cout << "Numele spre stergere: ";
        std::getline(std::cin, name);
        deletePerson(&head, name);
        break;

      case 3:
        std::cout << "Nume spre cautare: ";
        std::getline(std::cin, name);
        phone = search(head, name);
        if (phone.empty())
          std::cout << "Persoana nu a fost gasita.\n";
        else
          std::cout << "Telefon: " << phone << '\n';
        break;

      case 4:
        display(head);
        break;

      case 5:
        std::cout << "Oprire...\n";
        break;

      default:
        std::cout << "Actiunea nu exista!\n";
    }
  } while (choice != 5);

  Node* cur = head;
  while (cur) {
    Node* next = cur->next;
    delete cur;
    cur = next;
  }

  return 0;
}
