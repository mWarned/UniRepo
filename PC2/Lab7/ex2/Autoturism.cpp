#include "Autoturism.h"
#include "Roata.h"

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
  stream << a.capacitate << ", " << a.consum << ", Rotile: ";
  for (size_t i = 0; i < 4; i++) {
    a.wheels[i].display();
    stream << " ";
  }
  stream << endl;
  return stream;
}

std::istream& operator>> (std::istream& input, Autoturism& a)
{
  cout << "capacitatea = ";
  input >> a.capacitate;
  cout << "consumul = ";
  input >> a.consum;
  for (size_t i = 0; i < 4; i++) {
    cout << "Dimensiunea rotii " << i+1 << ":";
    int dim;
    input >> dim;
    a.wheels[i].setDimensiune(dim);
  }
  return input;
}
