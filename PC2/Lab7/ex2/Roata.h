#pragma once

class Roata {
private:
  unsigned int dimensiune;

public:
  void display() const;
  void setDimensiune(unsigned int);
  Roata(int dim = 0);
};
