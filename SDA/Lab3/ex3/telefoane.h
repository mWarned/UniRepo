#pragma once

#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Node {
    string name;
    string phone;
    Node* next;
};

void insert(Node* &head, string name, string phone);
void deletePerson(Node* &head, string name);
string search(Node* head, string name);
void display(Node* head);
