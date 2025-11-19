#include <iostream>
#include "helper.h"
#include "recurs.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
  
  int rep = MENU_main();

  while (rep) {
    if (rep == 1) {
      SimpleLL<int> head1 = create<int>();
      display(head1);
      displayFromBack(head1);
      deleteList<int>(head1); std::cout << "\n";
      SimpleLL<float> head = create<float>();
      display(head);
      displayFromBack(head);
      deleteList<float>(head);

      rep = MENU_main();
    } if (rep == 2) {
      std::cout << "Introduceti 2 valori: ";
      int m,n;
      std::cin >> m >> n;
      std::cout << "Cel mai mare divizor comun - " << cmmdc(m,n);

      rep = MENU_main();
    } if (rep == 3) {
      float x; int i;
      std::cout << "Dati variabila x - "; std::cin >> x;
      std::cout << "Dati variabila i - "; std::cin >> i;

      std::cout << "Rezultatul sumei - " << S(x,i) << std::endl;

      rep = MENU_main();
    } else {
      cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
      rep = MENU_main();
    }
  }

  return 0;
}
