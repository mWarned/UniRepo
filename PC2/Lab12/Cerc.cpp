#include "Cerc.h"
#include <iostream>

Cerc::Cerc(int a, int b, int raza)
{
  x = a;
  y = b;
  r = raza;
}

double Cerc::perimetru() {
  return 2 * 3.14 * r;
}

double Cerc::arie()
{
  return 3.14 * r * r;
}

void Cerc::afisare()
{
  std::cout << "Cerc cu coordonatele (" << x << "," << y << "), raza "
    << r << " aria " << arie() << " si perimetrul " << perimetru() << std::endl;
}
