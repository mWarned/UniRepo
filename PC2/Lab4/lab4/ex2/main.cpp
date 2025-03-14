#include "Persoana.h"

int main()
{
    Persoana p1((char *)"Pavel", 22);
    p1.afiseaza();

    Persoana p2 = std::move(p1);
    p1.afiseaza();
    p2.afiseaza();

    return 0;
}