#pragma once
#include <string>
#include <iostream>

struct Node {
    std::string name;
    std::string phone;
    Node* next;
};

void insert(Node** head, const std::string& name, const std::string& phone);
void deletePerson(Node** head, const std::string& name);
std::string search(Node* head, const std::string& name);
void display(Node* head);
