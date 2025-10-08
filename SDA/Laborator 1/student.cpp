#include <iostream>
#include <cstring>
#include "student.h"

using std::cin;
using std::cout;
using std::endl;

void InitStudent (Student& s) {
    cout << "Numele studentului - ";
    char buf[30];
    cin.getline(buf, 30);
    s.nume = new char[strlen(buf) - 1];
    strcpy(s.nume, buf);

    cout << "Nota studentului - ";
    int nota = 0;
    cin >> nota;
    s.nota = nota;
}

void AfisStudent (Student s) {
    cout << "Studentul " << s.nume << " are nota " << s.nota << endl;
}

void StergeStudent (Student&) {

}