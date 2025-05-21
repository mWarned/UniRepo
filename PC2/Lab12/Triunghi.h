#include "Figura.h"

class Triunghi: public Figura {
  private:
    int ax, ay, bx, by, cx, cy;
  public:
    Triunghi(int, int, int, int ,int ,int);
    double perimetru();
    double semiperimetru();
    double arie();
    void afisare();
};

#include <exception>
class TriunghiErr : public std::exception
{
  public:
    const char* what() {
      return "Triunghi imposibil!";
    }
};
