#include <iostream>
#include <vector>
#include "Cerc.h"
#include "Dreptunghi.h"
#include "Triunghi.h"
#include "Figura.h"

Figura *figCuArieMax(std::vector<Figura *> figuri)
{
  double arieMax = 0;
  Figura *figMax = nullptr;
  for (std::vector<Figura *>::iterator i = figuri.begin(); i != figuri.end(); i++)
  {
    if ((*i)->arie() > arieMax)
    {
      arieMax = (*i)->arie();
      figMax = *i;
    }
  }
  return figMax;
}

Figura *figCuPerimMax(std::vector<Figura *> figuri)
{
  double perimMax = 0;
  Figura *figMax = nullptr;
  for (std::vector<Figura *>::iterator i = figuri.begin(); i != figuri.end(); i++)
  {
    if ((*i)->perimetru() > perimMax)
    {
      perimMax = (*i)->perimetru();
      figMax = *i;
    }
  }
  return figMax;
}

int main (int argc, char *argv[]) {
  std::vector<Figura *> figuri;

  Dreptunghi d1(0, 0, 20, 5);
  Triunghi t1(0, 0, 2, 2, 4, 1);
  Cerc c1(0, 0, 3);

  figuri.push_back(&d1);
  figuri.push_back(&t1);
  figuri.push_back(&c1);

  Figura *figMaxA = figCuArieMax(figuri);
  Figura *figMaxP = figCuPerimMax(figuri);

  std::cout << "Dintre figurile: " << std::endl;
  for (std::vector<Figura *>::iterator i = figuri.begin(); i != figuri.end(); i++)
  {
    (*i)->afisare();
  }

  std::vector<Triunghi *> trv;
  for (std::vector<Figura *>::iterator i = figuri.begin(); i != figuri.end(); i++)
  {
    trv.push_back(dynamic_cast<Triunghi *>(*i));
  }

  for (std::vector<Triunghi *>::iterator i = trv.begin(); i != trv.end(); i++)
  {
    if (*i) {
      std::cout << (*i)->semiperimetru() << std::endl;
    }
  }

  std::cout << std::endl << "Aria maxima o are: " << std::endl;
  figMaxA->afisare();
  std::cout << std::endl << "Perimetrul maxim o are: " << std::endl;
  figMaxP->afisare();

  try {
    Triunghi terr(0, 0, 2, 0, 4, 0);
  } catch (TriunghiErr e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
