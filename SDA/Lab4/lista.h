#pragma once
#include <iostream>
#include <string>
#include <limits>

typedef int Atom;

struct Elem {
    Atom data;
    Elem *prev, *next;
    Elem() : data(0), prev(nullptr), next(nullptr) {}
};

struct ElemS {
    std::string name;
    ElemS* next;
};

struct DLList {
    Elem *first, *last;
    DLList() : first(nullptr), last(nullptr) {}
};

// Liste dublu linkate
void createDLL(DLList&);
void insertDataDLL(DLList&, int);
void displayDLL(const DLList&);
bool deleteOnPosDLL(DLList&, int);
void deleteDLL(DLList&);
void insertOnPosDLL(DLList&, int, int);

// Liste circulare
void createCL(Elem*&);
void insertDataCL(Elem*&, int);
void insertCLToBack(Elem*&, int);
void displayCL(Elem*);
void reverseCL(Elem*&);
void deleteCL(Elem*&);

// Lista circulara cu string
void createCLS(ElemS*&);
void displayCLS(ElemS*);
void deleteCLS(ElemS*&);
