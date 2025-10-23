#pragma once

typedef int Atom;

struct Elem{
    Atom data;
    Elem *prev, *next;
};

struct DLList{
    Elem *first, *last;
};

void createDLL(DLList&);
void insertDataDLL(DLList&, int);
void displayDLL(DLList);
void createCL(Elem* &head);
void insertDataCL(Elem* &head, int);
void displayCL(Elem* head);
bool srcVal(Elem* head, int);
void insertOnPosDLL(Elem* head, int, int);
void deleteOnPosDLL(Elem* head, int);
void srcKthFromBack(Elem* head, int);
void displayBothWays(Elem* head);

