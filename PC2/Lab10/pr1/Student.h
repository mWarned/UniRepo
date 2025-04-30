#pragma once

#include "Persoana.h"
#include <string>

class StudentAC : public PersoanaAC
{
  private:
    int m_ianStudiu;
    int m_inotaP2;
  public:
    StudentAC();
    StudentAC(std::string cnp, std::string nume, 
        std::string adresa, int anStudiu, int notaP2);
    ~StudentAC();
    int getNota() const { return m_inotaP2; };
    void afisareProfil();
    void inscriereAnStudiu(int anStudiuNou);
    StudentAC compare(StudentAC s);
};
