#include <iostream>
#include "Complex.h"

template <typename T>
T suma(T a, T b)
{
  return a + b;
}

int main()
{
  int ai = 5, bi = 7;
  float af = 7.7, bf = 1.2;
  Complex ac(3,3), bc(1,7);

  std::cout << "Integer - " << suma(ai,bi) << std::endl;
  std::cout << "Float - " << suma(af,bf) << std::endl;
  std::cout << "Complex - "; suma(ac,bc).afisare(); std::cout << std::endl;

  return 0;
}
