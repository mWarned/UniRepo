#include "StudentMaster.h"
#include <iostream>

StudentMaster::StudentMaster(std::string cnp, std::string nume, std::string
    adresa, int anStudiu, int notaP2, std::string numeDizertaite):
  StudentAC(cnp, nume, adresa, anStudiu, notaP2),
  m_sNumeDizertatie(numeDizertaite) 
{
  std::cout << "constr. cu arg. StudentMaster" << std::endl;
}

StudentMaster::StudentMaster(): m_sNumeDizertatie(0) {}

StudentMaster::~StudentMaster() {
  std::cout << "destructor StudentMaster" << std::endl;
}

bool StudentMaster::operator<(StudentMaster s)
{
  return getNota() < s.getNota();
}

void StudentMaster::afisareProfil() {
  StudentAC::afisareProfil();
  std::cout << "Numele dizeratiei: " << m_sNumeDizertatie << std::endl;
}

