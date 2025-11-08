#include <iostream>
#include "helper.h"
#include "stacks.h"
#include "expressions.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

  int rep = MENU_main();

  while (rep) {
    if (rep == 1) {
      StaticS s;
      initV(s);
      cout << "Teste pentru stiva goala:" << endl;
      cout << "Este goala? - ";
      if (isEmptyV(s)) {
        cout << "Da" << endl;
      } else {
        cout << "Nu" << endl;
      }
      cout << "Este plina? - ";
      if (isEmptyV(s)) {
        cout << "Da" << endl;
      } else {
        cout << "Nu" << endl;
      }
      cout << "-------------------------\n";
      topV(s);
      popV(s);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 1);
      pushV(s, 8);
      pushV(s, 9);
      pushV(s, 10);
      cout << "-------------------------\n";
      cout << "Teste pentru stiva plina:" << endl;
      cout << "Este goala? - ";
      if (isEmptyV(s)) {
        cout << "Da" << endl;
      } else {
        cout << "Nu" << endl;
      }
      cout << "Este plina? - ";
      if (isEmptyV(s)) {
        cout << "Da" << endl;
      } else {
        cout << "Nu" << endl;
      }
      cout << topV(s) << endl;
      popV(s);
      cout << topV(s) << endl;
      popV(s);
      cout << topV(s) << endl;
      popV(s);
      cout << topV(s) << endl;
      popV(s);
      cout << topV(s) << endl;
      popV(s);
      popV(s);
      popV(s);
      popV(s);
      popV(s);
      popV(s);
      popV(s);
      rep = MENU_main();
    } else if (rep == 2) {
      Stack s;
      init(s);
      cout << "Este goala? - ";
      if (isEmpty(s)) {
        cout << "Da" << endl;
      } else {
        cout << "Nu" << endl;
      }

      pop(s);
      push(s, 1);
      push(s, 2);
      push(s, 3);
      push(s, 4);
      push(s, 5);

      cout << top(s) << endl;
      pop(s);
      cout << top(s) << endl;
      clear(s);
      rep = MENU_main();
    } else {
      cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
      rep = MENU_main();
    }
  }

  return 0;
}
