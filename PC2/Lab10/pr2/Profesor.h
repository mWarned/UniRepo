#include "Persoana.h"
#include "Angajat.h"
#include <string>

class Profesor: public Persoana, public Angajat
{
  private:
    int m_iGradDidactic;
  public:
    Profesor(std::string nume, int varsta, double salariu, int gradDidactic): 
      Persoana(nume, varsta),
      Angajat(salariu),
      m_iGradDidactic(gradDidactic) {}
};
