#include "Persoana.h"
#include <iostream>

Persoana::Persoana(): nume(new char[1]()), varsta(0){}

Persoana::Persoana(char *n, int v): nume(new char[strlen(n) + 1]), varsta(v)
{
    std::strcpy(nume, n);
}

Persoana::Persoana(const Persoana &p): nume(new char[strlen(p.nume) + 1]), varsta(p.varsta)
{
    strcpy(nume, p.nume);
}

Persoana::Persoana(Persoana &&p): nume(new char[strlen(p.nume) + 1]), varsta(p.varsta)
{
    strcpy(nume, p.nume);
    p.nume = new char[1];
    p.varsta = 0;
}

Persoana::~Persoana()
{
    if (nume)
    delete[] nume;
}

void Persoana::afiseaza()
{
    std::cout << "Nume = " << nume << " varsta = " << varsta << std::endl;
}

bool Persoana::compara(Persoana p)
{
    if (varsta > p.varsta)
    {
        return true;
    }
    else
    {
        return false;
    }
}