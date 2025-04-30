#include "Student.h"
#include <iostream>

Student::Student(std::string nume, std::string adresa, int anStudiu, int notaP2) :
    Persoana(nume, adresa), m_iAnStudiu(anStudiu), m_iNotaP2(notaP2) {
}

void Student::afisareProfil()
{
    //Persoana::afisareProfil();
    std::cout << "Nume: " << m_sNume << ", Adresa: " << m_sAdresa <<
    std::endl;
    std::cout << "An studiu: " << m_iAnStudiu << ", Nota P2: " << m_iNotaP2 <<
    std::endl;
}

void Student::inscriereAnStudiu(int anStudiuNou) {
    m_iAnStudiu = anStudiuNou;
}

void Student::schimbaNota(int notaNoua) {
    m_iNotaP2 = notaNoua;
}
