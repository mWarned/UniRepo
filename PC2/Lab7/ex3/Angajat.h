#pragma once

class Angajat
{
  unsigned int vechimeMunca;
  public:
  Angajat(unsigned int vm = 0) : vechimeMunca(vm)
  {
    std::cout << "Constructor Angajat" << std::endl;
  }
  ~Angajat()
  {
    std::cout << "Destructor Angajat " << vechimeMunca << std::endl;
  }
  unsigned int GetVechime()
  {
    return vechimeMunca;
  }
};
