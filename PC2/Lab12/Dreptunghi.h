#pragma once
#include "Figura.h"

class Dreptunghi : public Figura
{
  private:
    int x1, y1, x2, y2;
  public:
    Dreptunghi(int x1, int y1, int x2, int y2);
    double perimetru();
    double arie();
    void afisare();
};
