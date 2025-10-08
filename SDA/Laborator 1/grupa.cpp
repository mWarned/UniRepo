#include <iostream>
#include "grupa.h"
#include "student.h"

using std::cin;
using std::cout;
using std::endl;

void InitGrupa (Grupa& grupa){
    cout << "Introduceti numarul grupei - ";
    int id;
    cin >> id;
    grupa.id = id;

    cout << "Introduceti numarul de student - ";
    int nrStudenti;
    cin >> nrStudenti;
    grupa.nr = nrStudenti;

    Student *lista[nrStudenti];
    for (size_t i = 0; i < nrStudenti; i++)
    {
        lista[i] = new Student;
        InitStudent(*lista[i]);
    }
    grupa.tab = *lista;
}

void AfisGrupa (Grupa grupa){
    cout << "Grupa " << grupa.id << " are " << grupa.nr << "studenti:" << endl;
    for (size_t i = 0; i < grupa.nr; i++)
    {
        AfisStudent(grupa.tab[i]);
    }
    
}

void StergeGrupa (Grupa& grupa){

}