#include "Complex.h"
#include <iostream>

// Complex operator+(Complex c1, Complex c2){return Complex(c1.GetRe() + c2.GetRe(), c1.GetIm() + c2.GetIm());}

int main(){

    Complex c1(1, 2), c2(3, 4), c3, c4(5, 6);

    c3 = c1 + c2; // 4 + 6i
    c3.afisare();

    ++c4; // 6 + 7i
    c4.afisare();

    Complex c5 = ++c1; // 2 + 3i
    c5.afisare();

    Complex c6 = c2++; // 3 + 4i  |  4 + 5i
    c6.afisare();
    c2.afisare();

    std::cout << "Valoarea absoluta a c1 = " << ~c1 << std::endl; 

    Complex c7 = c2 - c1; // 2 + 2i
    c7.afisare();

    Complex c8 = c1 * c2; //  8 + 15i
    c8.afisare();

    !c1;

    return 0;
}