#include "Angajat.h"

class Companie
{
  Angajat* arrayAngajati[2];
  
  public:
  void addAngajat(Angajat* a, unsigned int poz)
  {
    arrayAngajati[poz] = a;
  }
  void AfisareAngajati()
  {
    for (unsigned int i = 0; i < 2; i++)
    {
      std::cout << arrayAngajati[i]->GetVechime() << " ";
      std::cout << std::endl;
    }
  }
};
