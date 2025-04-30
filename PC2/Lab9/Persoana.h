
#pragma once

#include <string>

class Persoana
{
protected:
    std::string m_sNume;
    std::string m_sAdresa;
public:
    Persoana(std::string nume, std::string adresa);
    void schimbareAdresa(std::string adresaNoua);
    void afisareProfil();
};