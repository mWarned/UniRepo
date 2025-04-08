#include "Autoturism.h"

using std::cout;
using std::endl;

Autoturism::Autoturism(unsigned int cap, double cons): capacitate(cap), consum(cons) {
  Autoturism::cnt++;
}

Autoturism::~Autoturism() {
  Autoturism::cnt--;
}

std::ostream& operator<< (std::ostream& stream, const Autoturism& a)
{
  stream << a.capacitate << ", " << a.consum;
  return stream;
}

std::istream& operator>> (std::istream& input, Autoturism& a)
{
  cout << "capacitatea = ";
  input >> a.capacitate;
  cout << "consumul = ";
  input >> a.consum;
  return input;
}
