#include "Autoturism.h"
#include "Roata.h"
#include "Service.h"

using std::cout;
using std::cin;
using std::endl;

int Autoturism::cnt = 0;

int main(){
  Autoturism* a1 = new Autoturism();
  Autoturism* a2 = new Autoturism();
  Autoturism* a3 = new Autoturism();

  cin >> *a1 >> *a2 >> *a3;

  Service serv;

  serv.addAuto(a1, 0);
  serv.addAuto(a2, 1);
  serv.addAuto(a3, 2);

  serv.afisareAuto();

  delete a2;

  serv.afisareAuto();
  return 0;
}
