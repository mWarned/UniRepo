#include "telefoane.h"
#include <iostream>
#include <string>

void insert(Node* &head, std::string name, std::string phone) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->phone = phone;
    newNode->next = nullptr;

    if (*head == nullptr || (*head)->name >= name) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != nullptr && current->next->name < name) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void deletePerson(Node* &head, std::string name) {
    Node* temp = *head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->name == name) {
        *head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->name != name) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
}

std::string search(Node* head, std::string name) {
    Node* current = head;
    while (current != nullptr) {
        if (current->name == name) {
            return current->phone;
        }
        current = current->next;
    }
    return "Not found";
}

void display(Node* head) {
    Node* current = head;
    if (current == nullptr) {
        std::cout << "Agenda is empty." << std::endl;
        return;
    }
    while (current != nullptr) {
        std::cout << "Name: " << current->name << ", Phone: " << current->phone << std::endl;
        current = current->next;
    }
}
