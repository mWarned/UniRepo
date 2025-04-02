#include "Roata.h"
#include <iostream>

using std::cout;

Roata::Roata(int dim): dimensiune(dim) {}

void Roata::display() const { cout << dimensiune; }

void Roata::setDimensiune(unsigned int dim) {
  dimensiune = dim;
}

