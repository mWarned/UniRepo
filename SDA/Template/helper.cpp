#include <iostream>
#include <unistd.h>
#include "helper.h"

int MENU_main() {
  int choice = 0;

  std::cout << "\n\n\033[1;32m";
  std::cout << "=================================" << std::endl;
  std::cout << "              Menu               " << std::endl;
  std::cout << "=================================" << std::endl;
  std::cout << "1 - Do something" << std::endl;
  std::cout << "0 - Exit" << std::endl;
  std::cout << "---------------------------------" << std::endl;
  std::cout << "\033[0m\n";
  std::cout << "Action number - ";

  std::cin >> choice;

  printf("\033[H\033[J");
  return choice;
}

void readInt(const std::string msg, int& val){
  if(isatty(fileno(stdin))){
    std::cout << msg;
  }
  std::cin >> val;
}
