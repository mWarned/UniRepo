#include <iostream>
#include "lista.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"

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
      deleteDLL(lista);
      rep = MENU_main();
    } else if (rep == 2) {
      DLList lista1, lista2, lista3;

      int ex2Ch = MENU_ex2();
      while (ex2Ch) {
        if (ex2Ch == 1) {
          runEx2_1(lista1, lista2);
          ex2Ch = MENU_ex2();
        } else if (ex2Ch == 2) {
          runEx2_2(lista1, lista2);
          ex2Ch = MENU_ex2();
        } else if (ex2Ch == 3) {
          lista3 = runEx2_3(lista1, lista2);
          displayDLL(lista3);
          ex2Ch = MENU_ex2();
        } else if (ex2Ch == 4) {
          lista3 = runEx2_4(lista1, lista2);
          displayDLL(lista3);
          ex2Ch = MENU_ex2();
        } else {
          cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
          ex2Ch = MENU_ex2();
        }
      }
      deleteDLL(lista1);
      deleteDLL(lista2);
      deleteDLL(lista3);
      rep = MENU_main();
    } else if (rep == 3) {
      Elem* head = nullptr;

      int ex3Ch = MENU_ex3();
      while (ex3Ch) {
        if (ex3Ch == 1) {
          runEx3_1(head);
          ex3Ch = MENU_ex3();
        } else if (ex3Ch == 2) {
          runEx3_2(head);
          ex3Ch = MENU_ex3();
        } else if (ex3Ch == 3) {
          runEx3_3(head);
          ex3Ch = MENU_ex3();
        } else {
          cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
          ex3Ch = MENU_ex3();
        }
      }
      deleteCL(head);
      rep = MENU_main();
    } else if (rep == 4) {
      Elem* head1 = nullptr;
      Elem* head2 = nullptr;

      int ex4Ch = MENU_ex4();
      while (ex4Ch) {
        if (ex4Ch == 1) {
          runEx4_1(head1, head2);
          ex4Ch = MENU_ex4();
        } else if (ex4Ch == 2) {
          runEx4_2(head1, head2);
          ex4Ch = MENU_ex4();
        } else if (ex4Ch == 3) {
          runEx4_3(head1, head2);
          ex4Ch = MENU_ex4();
        } else if (ex4Ch == 4) {
          runEx4_4(head1, head2);
          ex4Ch = MENU_ex4();
        } else {
          cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
          ex4Ch = MENU_ex4();
        }
      }

      deleteCL(head1);
      deleteCL(head2);
      rep = MENU_main();
    } else if (rep == 5) {

      int ex5Ch = MENU_ex5();
      while (ex5Ch) {
        if (ex5Ch == 1) {
          ElemS* head = nullptr;
          createCLS(head);
          runEx5_1(head);
          delete head;
          ex5Ch = MENU_ex5();
        } else if (ex5Ch == 2){

          ex5Ch = MENU_ex5();
        } else {
          cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
          ex5Ch = MENU_ex5();
        }
      }

      rep = MENU_main();
    } else {
      cout << "\033[1;31mAction number not in menu!\033[0m" << endl;
      rep = MENU_main();
    }
  }

  return 0;
}
