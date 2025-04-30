#include "Student.h"
#include <iostream>

StudentAC::StudentAC(): nume(std::string()), nota(-1){}

StudentAC::StudentAC(std::string nume, int nota): nume(nume), nota(nota) {}

void StudentAC::afisare(){
  std::cout << nume << ", nota: " << nota << std::endl;
}

void StudentAC::modificareNota(int nouaNota){
  nota = nouaNota;
}

bool StudentAC::operator<(StudentAC stud){
  return nota < student.nota;
}
