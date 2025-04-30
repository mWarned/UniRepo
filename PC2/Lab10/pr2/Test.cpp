#include "Profesor.h"

int main()
{
  std::string s0("Ion");
  Profesor p1("Ion",23,100.08,1);
  Profesor p2(s0,23,100.08,1);
  Profesor p3(std::string("Ionescu", 0, 3),23,100.08,1);
  return 0;
}
