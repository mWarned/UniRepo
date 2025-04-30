#include "Student.h"
#include <string>

class StudentMaster: public StudentAC 
{
  private:
    std::string m_sNumeDizertatie;
  public:
    StudentMaster();
    StudentMaster(std::string cnp, std::string nume, std::string
        adresa, int anStudiu, int notaP2, std::string numeDizertaite);
    ~StudentMaster();
    bool operator<(StudentMaster);
    void afisareProfil();
};

