#include <iostream>

#include "lista.h"
#include "ex4.h"

int MENU_ex4(){
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "===========================================" << std::endl;
  std::cout << "                 Exercitiul 4              " << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "1 - Definirea datelor\n";
  std::cout << "2 - Afisarea listelor\n";
  std::cout << "3 - Concatenarea listelor\n";
  std::cout << "4 - Interclasarea listelor \n";
  std::cout << "0 - Exit" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;
  std::cout << "\033[H\033[J";
  return choice;
}

void runEx4_1(Elem*& head1, Elem*& head2) {
  createCL(head1);
  createCL(head2);
}

void runEx4_2(Elem* head1, Elem* head2) {
  if (!head1) {
    std::cout << "Lista 1 este goala!\n";
  } else {
    std::cout << "Lista 1: "; displayCL(head1);
  }

  if (!head2) {
    std::cout << "Lista 2 este goala!\n";
  } else {
    std::cout << "Lista 2: "; displayCL(head2);
  }
}

void runEx4_3(Elem* head1, Elem* head2) {
  if(!head1 && !head2) {
    std::cout << "Nu pot fi concatenate 2 liste goale!";
    return ;
  }
  Elem* result = nullptr;

  Elem* p1 = head1;
  Elem* p2 = head2;

  if (head1) {
    do {
      insertCLToBack(result, p1->data);
      p1 = p1->next;
    } while(p1 != head1);
  }
  if (head2) {
    do {
      insertCLToBack(result, p2->data);
      p2 = p2->next;
    } while(p2 != head2);
  }

  displayCL(result);
  deleteCL(result);
}

void runEx4_4(Elem* head1, Elem* head2) {
  if(!head1 && !head2) {
    std::cout << "Nu pot fi interclasate 2 liste goale!";
    return ;
  }
  Elem* res = nullptr;

  Elem* p1 = head1;
  Elem* p2 = head2;

  bool first1_done = (head1 == nullptr);
  bool first2_done = (head2 == nullptr);

  while (!first1_done || !first2_done) {
    if (!first1_done) {
      insertCLToBack(res, p1->data);
      p1 = p1->next;
      if (p1 == head1) first1_done = true;
    }
    if (!first2_done) {
      insertCLToBack(res, p2->data);
      p2 = p2->next;
      if (p2 == head2) first2_done = true;
    }
  }

  displayCL(res);
  deleteCL(res);
}
