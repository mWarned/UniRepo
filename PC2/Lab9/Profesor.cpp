#include "Profesor.h"
#include <iostream>

Profesor::Profesor(std::string nume, std::string adresa, std::string gradDidactic, std::vector<Student> studenti) :
    Persoana(nume, adresa), m_sGradDidactic(gradDidactic), m_studenti(studenti) {}

void Profesor::acoraNota(int student, int nota) {
    m_studenti[student].schimbaNota(nota);
}

void Profesor::afiseazaStudenti(){
    for (std::vector<Student>::iterator i = m_studenti.begin(); i != m_studenti.end(); i++)
    {
        i->afisareProfil();
    }
}