#include <iostream>
#include "helper.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
  
  int rep = MENU_main();

  while (rep) {
    if (rep == 1) {
      cout << "Did Something, yay!" << endl;
      rep = MENU_main();
    } else {
      cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
      rep = MENU_main();
    }
  }

  return 0;
}
