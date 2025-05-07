#include "Figura.h"

class Cerc: public Figura{
private:
  int x, y;
  int raza;

public:
  Cerc(std::string color, int x, int y, int raza);
  void Afisare();
  double Perimetru();
  double Aria();
};

