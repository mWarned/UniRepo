#include <iostream>
#include <cstring>
#include "student.h"

using std::cin;
using std::cout;
using std::endl;

void InitStudent (Student &s) {
    cout << "Numele studentului - ";
    s.nume = new char[30];
    cin.ignore();
    cin.getline(s.nume, 30);

    cout << "Nota studentului - ";
    cin >> s.nota;
}

void AfisStudent (Student s) {
    cout << "Studentul " << s.nume << " are nota " << s.nota << endl;
}

void StergeStudent (Student &s) {
    if (s.nume) {
      delete[] s.nume;
    }
    s.nume = nullptr;
    s.nota = 0;
}
