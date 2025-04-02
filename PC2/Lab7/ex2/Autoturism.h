#pragma once

#include <iostream>
#include "Roata.h"

class Autoturism{

private:
  unsigned int capacitate;
  double consum;
  Roata wheels[4];

public:
  static int cnt;
  friend std::ostream& operator<< (std::ostream& stream, const Autoturism& d);
  friend std::istream& operator>> (std::istream& input, Autoturism& a);
  Autoturism(unsigned int cap = 0, double cons = 0);
  Autoturism(Autoturism &&);
  Autoturism(const Autoturism &);
  Autoturism &operator=(Autoturism &&);
  Autoturism &operator=(const Autoturism &);
  ~Autoturism();
};
