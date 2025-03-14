#include<iostream>
#include "Complex.h"

Complex::Complex(int r, int i): re(r), im(i) {}

Complex::Complex(const Complex &c): re(c.re), im(c.im){}


Complex::Complex(Complex &&c): re(c.re), im(c.im){
    c.re = 0;
    c.im = 0;
}


Complex Complex::aduna(Complex c2) {
    Complex rez;
    rez.re = re + c2.re;
    rez.im = im + c2.im;
    return rez;
}

void Complex::afisare() {
    std::cout << "(" << re << "," << im << ")" << std::endl;
}