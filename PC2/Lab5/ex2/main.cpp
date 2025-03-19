#include <iostream>
#include "Matrix.h"

Matrix operator+(int x, Matrix mat){
    Matrix rez(mat.getNrL(), mat.getNrC());
    rez = mat + x;
    return rez;
}

int main(){
    Matrix mat1;
    mat1.afisare();

    Matrix mat2;
    mat2.afisare();

    Matrix matout = mat1;
    matout = mat1 + mat2;
    matout.afisare();
    matout = mat1 - mat2;
    matout.afisare();
    matout = mat1 * mat2;
    matout.afisare();

    if (mat1 == mat2)
    {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    

    matout = mat1 + 5;
    matout.afisare();
    matout = 3 + mat1;
    matout.afisare();
    matout = ~mat1;
    matout.afisare();
    matout = mat1++;
    matout.afisare();
    mat1.afisare();
    matout = ++mat1;
    matout.afisare();
    mat1.afisare();

    int c = mat1[3];
    std::cout << c << std::endl;

    return 0;
}
