#pragma once
#ifndef LISTA_H
#define LISTA_H

typedef int Atom;

struct Elem{
    Atom data;
    Elem* next;
};

void createList(Elem* &head);
void insertData(Elem* &head, int val);
void displayList(Elem* head);
bool srcVal(Elem* head, int x);
void insertOnPos(Elem* head, int val, int pos);
void deleteOnPos(Elem* head, int pos);
void srcKthFromBack(Elem* head, int k);

#endif // LISTA_H
