#include <string>

class Persoana
{
  private:
    std::string m_sNume;
    int m_iVarsta;
  public:
    Persoana(std::string nume, int varsta)
      : m_sNume (nume), m_iVarsta(varsta)
    {}
    int getVarsta()
    {
      return m_iVarsta;
    }
};

