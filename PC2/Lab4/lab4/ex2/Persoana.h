#include <iostream>
#include <cstring>

class Persoana
{
char *nume;
int varsta;

public:
    Persoana();
    Persoana(char *n, int v);
    Persoana(const Persoana &p);
    Persoana(Persoana &&p);
    ~Persoana();
    void afiseaza();
    bool compara(Persoana p);
};