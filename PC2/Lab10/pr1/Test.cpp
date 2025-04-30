#include "Persoana.h"
#include "Student.h"
#include "StudentMaster.h"
#include <vector>
#include <algorithm>

void afisareProfil(StudentAC x) { x.afisareProfil(); }

int main ()
{
  PersoanaAC p1("1234567890123" ,"Ana","Iasi");
  p1.afisareProfil();

  StudentAC s;
  s.afisareProfil();

  StudentAC s1("1234567890122", "Ion","Vaslui",2,10);
  s1.schimbareAdresa("Bucuresti");
  s1.inscriereAnStudiu(3);
  s1.afisareProfil();

  afisareProfil(s1);

  StudentAC s2("7564775847567", "Alex","Iasi",2,8);

  StudentAC res = s1.compare(s2);
  res.afisareProfil();

  StudentMaster sm1("1234567890122", "Ion","Vaslui",2,10, "Optimizarea sistemelor Cyber-Fizice");
  StudentMaster sm2("7564775847567", "Alex","Iasi",2,8, "Designul Arhitecturilor scalabile si tolerante la erori");
  StudentMaster sm3("1234567890123" ,"Ana","Iasi", 2,6, "Dezvoltarea framework-urilor cu incluziunea inteligentii artificiale");

  std::vector<StudentMaster> v1 = { sm1, sm2, sm3};

  for (StudentMaster s : v1) {
    s.afisareProfil();
  }

  std::sort(v1.begin(), v1.end());

  for (StudentMaster s : v1) {
    s.afisareProfil();
  }

  return 0;
}
