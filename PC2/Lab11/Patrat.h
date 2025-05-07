#include "Figura.h"

class Patrat: public Figura{
private:
  int x, y;
  int latura;

public:
  Patrat(std::string color, int x, int y, int latura);
  void Afisare();
  double Perimetru();
  double Aria();
};

