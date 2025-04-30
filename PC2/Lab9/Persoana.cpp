#include "Persoana.h"
#include <iostream>

Persoana::Persoana(std::string nume, std::string adresa)
{
    m_sNume = nume;
    m_sAdresa = adresa;
}

void Persoana::afisareProfil()
{
    std::cout << "Nume: " << m_sNume << ", Adresa: " << m_sAdresa << std::endl;
}

void Persoana::schimbareAdresa(std::string adresaNoua){
    m_sAdresa = adresaNoua;
}
