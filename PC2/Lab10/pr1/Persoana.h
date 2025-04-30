#pragma once

#include <string>

class PersoanaAC
{
  protected:
    std::string m_sCnp;
    std::string m_sNume;
    std::string m_sAdresa;
  public:
    PersoanaAC();
    PersoanaAC(std::string cnp, std::string nume, std::string
        adresa);
    ~PersoanaAC();
    void afisareProfil();
    void schimbareAdresa(std::string adresaNoua);
};
