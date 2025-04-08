#include <iostream>
#include "Companie.h"
#include "Angajat.h"

int main()
{
  Angajat* a1 = new Angajat(2);
  Angajat* a2 = new Angajat(5);
  Companie c1;
  c1.addAngajat(a1, 0);
  c1.addAngajat(a2, 1);
  c1.AfisareAngajati();
  delete a1;
  a1 = 0;
  delete a2;
  a2 = 0;
  return 0;
}
