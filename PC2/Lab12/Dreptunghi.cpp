#include "Dreptunghi.h"
#include <iostream>

Dreptunghi::Dreptunghi(int a1, int b1, int a2, int b2)
{
  x1 = a1;
  y1 = b1;
  x2 = a2;
  y2 = b2;
}

double Dreptunghi::perimetru() {
  return 2 * ((x2-x1) + (y2-y1));
}

double Dreptunghi::arie()
{
  return (x2 - x1)*(y2 - y1);
}

void Dreptunghi::afisare() {
  std::cout << "Dreptunghi cu coordonatele (" << x1 << "," << y1
    << ")-(" << x2 << "," << y2 << "), aria " << arie() << " si perimetrul " << perimetru() << std::endl;
}
