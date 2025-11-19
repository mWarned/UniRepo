#include <iostream>
#include "helper.h"
#include "queue.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
  
  int rep = MENU_main();

  while (rep) {
    if (rep == 1) {
      QueueS v;
      initSQ(v);
      std::cout << "Lista este goala? " << ((isEmptySQ(v)) ? "Da" : "Nu") << std::endl;
      std::cout << "Lista este plina? " << ((isFullSQ(v)) ? "Da" : "Nu") << std::endl;
      frontSQ(v);
      getSQ(v);
      putSQ(v, 1);
      putSQ(v, 1);
      putSQ(v, 1);
      putSQ(v, 1);
      putSQ(v, 1);
      putSQ(v, 1);
      putSQ(v, 1);
      putSQ(v, 1);

      std::cout << "Lista este goala? " << ((isEmptySQ(v)) ? "Da" : "Nu") << std::endl;
      std::cout << "Lista este plina? " << ((isFullSQ(v)) ? "Da" : "Nu") << std::endl;

      rep = MENU_main();
    } else if (rep == 2) {
      Queue v;
      init(v);
      std::cout << "Lista este goala? " << ((isEmpty(v)) ? "Da" : "Nu") << std::endl;
      front(v);
      get(v);
      put(v, 1);
      put(v, 1);
      put(v, 1);
      put(v, 1);
      put(v, 1);
      put(v, 1);
      put(v, 1);
      put(v, 1);
      std::cout << "Lista este goala? " << ((isEmpty(v)) ? "Da" : "Nu") << std::endl;

      rep = MENU_main();
    } else {
      cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
      rep = MENU_main();
    }
  }

  return 0;
}
