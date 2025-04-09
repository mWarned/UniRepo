#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"

void displayVector(std::vector<StudentAC> vec){
  for (std::vector<StudentAC>::iterator i = vec.begin(); i != vec.end(); i++) {
    i->afisare();
  }

  std::cout << std::endl;
}

std::vector<StudentAC> listToVector(StudentAC *stud, int n){
  std::vector<StudentAC> vec;
  for (int i = 0; i < n; i++) {
    vec.push_back(*(stud+i));
  }
  return vec;
}

bool myComp(StudentAC i, StudentAC j) {return i<j;}

int main(){
  std::vector<StudentAC> vec = {StudentAC("Alex", 8), StudentAC("Ion", 9), StudentAC("Vasile", 6)};

  displayVector(vec);

  std::cout << std::endl;
  
  std::sort(vec.begin(), vec.end(), myComp);

  displayVector(vec);

  std::cout << std::endl;

  StudentAC list[] = {StudentAC("Marin", 7), StudentAC("Marcel", 2), StudentAC("Victor", 10)};
  std::vector<StudentAC> vec2 = listToVector(list, 3);

  displayVector(vec2);

  return 0;
}
