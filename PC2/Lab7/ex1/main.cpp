#include "Autoturism.h"

using std::cout;
using std::cin;
using std::endl;

int Autoturism::cnt = 0;

int main(){
  Autoturism a1(50, 5);
  Autoturism a2;

  cin >> a2;

  cout << a1 << endl;
  cout << a2 << endl;

  cout << "Numarul de obiecte - " << Autoturism::cnt << endl;
}
