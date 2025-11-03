#pragma once

typedef int Atom;

struct Elem{
    Atom data;
    Elem* next;
    Elem(Atom val, Elem* addr): data(val), next(addr) {}
};

void createList(Elem* &head);
void insertData(Elem* &head, int val);
void deleteList(Elem*&);
void displayList(Elem* head);
void cpyList(Elem*, Elem*&);
void concat(Elem*, Elem*);
void interclasare(Elem*&, Elem*, Elem*);
