#include <iostream>
#include "Complex.h"

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 2);
    
    c1.afisare();
    c2.afisare();

    Complex c3 = std::move(c2);
    c3.afisare();
    c2.afisare();

    return 0;
}
