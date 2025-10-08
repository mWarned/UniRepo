#include <iostream>
#include <cstring>
#include "grupa.h"
#include "student.h"

using std::cout;
using std::cin;
using std::endl;

void InitGrupa (Grupa& grupa){
    cout << "Introduceti numarul grupei - ";
    cin >> grupa.id;

    cout << "Introduceti numarul de studenti - ";
    cin >> grupa.nr;

    for (size_t i = 0; i < grupa.nr; i++)
    {
        InitStudent(grupa.tab[i]);
    }
}

void AfisGrupa (Grupa grupa){
    cout << "Grupa " << grupa.id << " are " << grupa.nr << " studenti:" << endl;
    for (size_t i = 0; i < grupa.nr; i++)
    {
        AfisStudent(grupa.tab[i]);
    }
    
}

void StergeGrupa (Grupa& grupa){
    for (size_t i = 0; i < grupa.nr; i++) {
        StergeStudent(grupa.tab[i]);
    } 
    grupa.tab = nullptr;
    grupa.nr = 0;
    grupa.id = 0;
}

void CautaStudent (Grupa& grupa, char* src){
    bool found = false;

    for (size_t i = 0; i < grupa.nr; i++) {
        if (strcmp(grupa.tab[i].nume, src) == 0) {
            cout << "Nota studentului : " << grupa.tab[i].nota << endl;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Studentul nu a fost gasit!" << endl;
    }
}

void NotaMinMax (Grupa& grupa){
    int min = grupa.tab[0].nota;
    int max = grupa.tab[0].nota;
    for (size_t i = 1; i < grupa.nr; i++) {
       if (grupa.tab[i].nota > max) {
            max = grupa.tab[i].nota;
       }
       if (grupa.tab[i].nota < min) {
            min = grupa.tab[i].nota;
       }
    }
    cout << "Grupa " << grupa.id << " are cea mai mica nota - " << min << ", si cea mai mare nota - " << max << endl;
}

