#pragma once

#include <string>

class Figura {
private:
  std::string culoare;
public:
  Figura(std::string color);
  virtual void Afisare();
  virtual double Perimetru();
  virtual double Aria();
};

