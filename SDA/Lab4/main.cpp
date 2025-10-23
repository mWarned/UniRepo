#include <iostream>
#include "lista.h"
#include "ex1.h"
#include "ex2.h"

using std::cout;
using std::cin;
using std::endl;

int MENU_main() {
  int choice = 0;

  cout << "\n\n\033[1;32m";
  cout << "=================================" << endl;
  cout << "              Menu               " << endl;
  cout << "=================================" << endl;
  cout << "1 - Exercitiul 1" << endl;
  cout << "2 - Exercitiul 2" << endl;
  cout << "3 - Exercitiul 3" << endl;
  cout << "4 - Exercitiul 4" << endl;
  cout << "5 - Exercitiul 5" << endl;
  cout << "6 - Exercitiul 6" << endl;
  cout << "0 - Exit" << endl;
  cout << "---------------------------------" << endl;
  cout << "\033[0m\n";
  cout << "Action number - ";

  cin >> choice;
  cout << "\033[H\033[J";
  return choice;
}

int main() {
  cout << "\033[H\033[J";
 
  int rep = MENU_main();

  while (rep) {
    if (rep == 1) {
      DLList lista;
      lista.first = nullptr;
      lista.last = nullptr;

      int ex1Ch = MENU_ex1();
      while(ex1Ch){
        if (ex1Ch == 1) {
          runEx1_1(lista);
          ex1Ch = MENU_ex1();
        } else if (ex1Ch == 2) {
          runEx1_2(lista);
          ex1Ch = MENU_ex1();
        } else if (ex1Ch == 3) {
          runEx1_3(lista);
          ex1Ch = MENU_ex1();
        } else if (ex1Ch == 4) {
          runEx1_4(lista);
          ex1Ch = MENU_ex1();
        } else {
          cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
          ex1Ch = MENU_ex1();
        }
      }
      rep = MENU_main();
    } else if (rep == 2) {
      DLList lista1, lista2, lista3;

      int ex2Ch = MENU_ex2();
      while (ex2Ch) {
        if (ex2Ch == 1) {
          runEx2_1(lista1, lista2);
          ex2Ch = MENU_ex2();
        } else if (ex2Ch == 2) {
          runEx2_2(lista1, lista2, lista3);
          ex2Ch = MENU_ex2();
        } else {
          cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
          ex2Ch = MENU_ex1();
        }
      }
    } else if (rep == 3) {
      Elem* head = nullptr;
      
      createCL(head);
      displayCL(head);
      insertDataCL(head, 10);
      displayCL(head);
    } else {
      cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
      rep = MENU_main();
    }
  }

  return 0;
}
