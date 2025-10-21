#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int MENU_main() {
  int choice = 0;

  cout << "\n\n\033[1;32m";
  cout << "=================================" << endl;
  cout << "              Menu               " << endl;
  cout << "=================================" << endl;
  cout << "1 - Do something" << endl;
  cout << "0 - Exit" << endl;
  cout << "---------------------------------" << endl;
  cout << "\033[0m\n";
  cout << "Action number - ";

  cin >> choice;

  printf("\033[H\033[J");
  return choice;
}

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
