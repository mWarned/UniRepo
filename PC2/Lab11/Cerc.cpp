#include "Cerc.h"
#include <iostream>
#include <math.h>

Cerc::Cerc(std::string color, int x, int y, int r):
  Figura(color), x(x), y(y), raza(r) {}

void Cerc::Afisare() {
  Figura::Afisare();
  std::cout << "Cercul are centrul in (" << x << ", " << y << "), si raza de " << raza << std::endl;
}

double Cerc::Perimetru() {
  return 2 * M_PI * raza;
}

double Cerc::Aria() {
  return M_PI * raza * raza;
}

