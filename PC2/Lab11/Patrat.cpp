#include "Patrat.h"
#include <iostream>

Patrat::Patrat(std::string color, int x, int y, int l):
  Figura(color), x(x), y(y), latura(l) {}

void Patrat::Afisare() {
  Figura::Afisare();
  std::cout << "Varful din stanga jos a patratului se afla la coordonatele (" << x << ", " << y << "), cu latura de " << latura << std::endl;
}

double Patrat::Perimetru() {
  return 4 * latura;
}

double Patrat::Aria() {
  return latura * latura;
}

