#include <iostream>
#include "Masini.h"

template <typename T>
T maxim(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  Masina m1("alb", 2012), m2("negru", 2018);
  Masina m3 = maxim <Masina> (m1, m2);
  m3.afiseaza();  

  return 0;
}
