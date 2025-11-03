#pragma once

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
void insertOnPos(Elem*&, int, int);
bool deleteOnPos(Elem*&, int);
void srcKthFromBack(Elem*, int);
void displayBothWays(Elem*);
bool checkLoop(Elem*);
void findMiddle(Elem*);
void reverseList(Elem*&);
