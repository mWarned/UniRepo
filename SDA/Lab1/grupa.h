#ifndef GRUPA_H
#define GRUPA_H

#include "student.h"

struct Grupa {
    Student* tab;
    int nr;
    int id;
};

void InitGrupa (Grupa&);
void AfisGrupa (Grupa);
void StergeGrupa (Grupa&);
void CautaStudent (Grupa&, char*);
void NotaMinMax (Grupa&);

#endif  // GRUPA_H
