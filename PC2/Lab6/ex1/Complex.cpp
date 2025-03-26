#include "Complex.h"
#include <iostream>
#include <cmath>

int Complex::GetRe(){return re;}

int Complex::GetIm(){return im;}

void Complex::SetRe(int r){re = r;}

void Complex::SetIm(int i){im = i;}

void Complex::afisare(){std::cout << re << " + " << im << "i" << std::endl;}

Complex Complex::operator+(Complex c){return Complex(re + c.re, im + c.im);}

Complex Complex::operator++(){
    re++;
    im++;
    return *this;
}

Complex Complex::operator++(int){
    Complex temp = *this;
    re++;
    im++;
    return temp;
}

float Complex::operator~(){return sqrt((re*re) + (im*im));}

Complex Complex::operator-(Complex c){return Complex(re - c.re, im - c.im);}

Complex Complex::operator*(Complex c){return Complex(re * c.re, im * c.im);}

void Complex::operator!(){this->afisare();}

Complex::Complex(int a, int b): re(a), im(b){}
