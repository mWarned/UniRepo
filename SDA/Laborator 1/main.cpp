#include <iostream>
#include "student.h"
#include "grupa.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    Grupa g1202A;
    
    InitGrupa(g1202A);
    AfisGrupa(g1202A);

    char* srcname = new char[30];
    cout << "Numele studentului cautat: ";
    cin.ignore();
    cin.getline(srcname, 30);

    CautaStudent(g1202A, srcname);

    NotaMinMax(g1202A);

    StergeGrupa(g1202A);

    return 0;
}
