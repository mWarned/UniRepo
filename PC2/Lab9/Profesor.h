#include "Persoana.h"
#include "Student.h"
#include <vector>
#include <string>

class Profesor: public Persoana
{
    std::string m_sGradDidactic;
    std::vector<Student> m_studenti;
public:
    Profesor(std::string nume, std::string adresa, std::string gradDidactic, std::vector<Student> studenti);
    void acoraNota(int student, int nota);
    void afiseazaStudenti();
    void sorteaza();
};