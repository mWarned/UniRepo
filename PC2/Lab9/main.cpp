#include "Persoana.h"
#include "Student.h"

int main()
{
    Persoana p1("Ion", "str. Libertatii");
    Persoana p2("Andrei", "str. Calea Victoriei");
    Student s1("Mihai", "str. Cuza Voda", 2, 5);
    Student s2("Petru", "str. Stefan cel mare", 2, 3);
    p1.afisareProfil();
    p2.afisareProfil();
    s1.afisareProfil();
    s2.afisareProfil();
    return 0;
}