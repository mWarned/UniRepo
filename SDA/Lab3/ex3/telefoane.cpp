#include "telefoane.h"
#include <limits>

void insert(Node** head, const std::string& name, const std::string& phone)
{
    Node* newNode = new Node{name, phone, nullptr};

    if (*head == nullptr || (*head)->name >= name) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* cur = *head;
    while (cur->next != nullptr && cur->next->name < name)
        cur = cur->next;

    newNode->next = cur->next;
    cur->next = newNode;
}

void deletePerson(Node** head, const std::string& name)
{
    if (*head == nullptr) return;

    Node* temp = *head;
    if (temp->name == name) {
        *head = temp->next;
        delete temp;
        return;
    }

    while (temp->next != nullptr && temp->next->name != name)
        temp = temp->next;

    if (temp->next == nullptr) return;

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

std::string search(Node* head, const std::string& name)
{
    for (Node* cur = head; cur != nullptr; cur = cur->next)
        if (cur->name == name)
            return cur->phone;
    return {};
}

void display(Node* head)
{
    if (!head) {
        std::cout << "Agenda este goala.\n";
        return;
    }
    for (Node* cur = head; cur != nullptr; cur = cur->next)
        std::cout << "Nume: " << cur->name << ", Telefon: " << cur->phone << '\n';
}
