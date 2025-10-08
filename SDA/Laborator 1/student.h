#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    char* nume;
    int nota;
};

void InitStudent (Student&);
void AfisStudent (Student);
void StergeStudent (Student&);

#endif // STUDENT_H
