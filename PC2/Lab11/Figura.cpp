#include "Figura.h"
#include <iostream>

Figura::Figura(std::string color): culoare(color) {}

void Figura::Afisare() {
  std::cout << "Figura are culoare " << culoare << std::endl;
}

double Figura::Perimetru() {
  return 0;
}

double Figura::Aria() {
  return 0;
}

