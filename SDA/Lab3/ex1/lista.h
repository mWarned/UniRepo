#pragma once
#ifndef LISTA_H
#define LISTA_H

typedef int Atom;

struct Elem{
  Atom data;
  Elem* next;
};

void createList(Elem*&);
void deleteList(Elem*&);
void insertData(Elem*&, int);
void displayList(Elem*);
bool srcVal(Elem*, int);
void insertOnPos(Elem*, int, int);
void deleteOnPos(Elem*, int);
void srcKthFromBack(Elem*, int);
void displayBothWays(Elem*);
bool checkLoop(Elem*);

#endif // LISTA_H
