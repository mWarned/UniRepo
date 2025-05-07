#include "Figura.h"
#include "Cerc.h"
#include "Patrat.h"
#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {

  std::vector<Figura *> figuri;
  Figura *f1 = new Cerc("rosu", 0, 0, 1);
  Figura *f2 = new Cerc("albastru", 1, 0, 5);
  Figura *f3 = new Patrat("galben", 3, 2, 4);
  Figura *f4 = new Patrat("verde", 5, 6, 1);

  figuri.push_back(f1);
  figuri.push_back(f2);
  figuri.push_back(f3);
  figuri.push_back(f4);

  for (std::vector<Figura *>::iterator i = figuri.begin(); i != figuri.end(); i++) {
    (*i)->Afisare();
  }

  Figura *maxf = f1;
  double max = f1->Aria();

  for (std::vector<Figura *>::iterator i = figuri.begin(); i != figuri.end(); i++) {
    std::cout << (*i)-> Aria() << std::endl;
    if ((*i)->Aria() > max) {
      maxf = *i;
      max = (*i)->Aria();
    }
  }

  maxf->Afisare();

  return 0;
}
