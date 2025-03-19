#include "Matrix.h"
#include <iostream>
#include <iomanip>

Matrix::Matrix(){
    std::cout << "Introduceti numarul de linii - ";
    std::cin >> NrL;
    std::cout << "Introduceti numarul de coloane - ";
    std::cin >> NrC;

    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            std::cin >> elemente[i][j];
        }
    }
}

Matrix::Matrix(int a, int b){
    NrL = a; NrC = b;
    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            elemente[i][j] = 0;
        }
    }
}

int Matrix::getNrL(){
    return NrL;
}

int Matrix::getNrC(){
    return NrC;
}

void Matrix::afisare(){
    std::cout << "----------------------" << std::endl;
    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            std::cout << std::setw(3) << elemente[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}

Matrix Matrix::operator+(Matrix m){
    if (m.NrL != NrL || m.NrC != NrC)
    {
        return Matrix(0,0);
    } else {
        Matrix temp = *this;
        for (int i = 0; i < NrL; i++)
        {
            for (int j = 0; j < NrC; j++)
            {
                temp.elemente[i][j] = this->elemente[i][j] + m.elemente[i][j];
            }
        }
        return temp;
    }
}

Matrix Matrix::operator-(Matrix m){
    if (m.NrL != NrL || m.NrC != NrC)
    {
        return Matrix(0,0);
    } else {
        Matrix temp = *this;
        for (int i = 0; i < NrL; i++)
        {
            for (int j = 0; j < NrC; j++)
            {
               temp.elemente[i][j] = this->elemente[i][j] - m.elemente[i][j];
            }
        }
        return temp;
    }
}

Matrix Matrix::operator*(Matrix m){
    if (m.NrL != NrL || m.NrC != NrC)
    {
        return Matrix(0,0);
    } else {
        Matrix temp = *this;
        for (int i = 0; i < NrL; i++)
        {
            for (int j = 0; j < NrC; j++)
            {
                temp.elemente[i][j] = this->elemente[i][j] * m.elemente[i][j];
            }
        }
        return temp;
    }
}

bool Matrix::operator==(Matrix m){
    if (m.NrL != NrL || m.NrC != NrC)
    {
        return false;
    } else {
        for (int i = 0; i < NrL; i++)
        {
            for (int j = 0; j < NrC; j++)
            {
                if(!(this->elemente[i][j] == m.elemente[i][j])) {
                    return false;
                }
            }
        }
        return true;
    }
}

Matrix Matrix::operator+(int x){
    Matrix temp = *this;
    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            temp.elemente[i][j] = this->elemente[i][j] + x;
        }
    }
    return temp;
}

Matrix Matrix::operator~(){
    Matrix temp = *this;
    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            temp.elemente[i][j] = this->elemente[j][i];
        }
    }
    return temp;
}

Matrix Matrix::operator++(){
    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            elemente[i][j]++;
        }
    }
    return *this;
}

Matrix Matrix::operator++(int){
    Matrix temp = *this;
    for (int i = 0; i < NrL; i++)
    {
        for (int j = 0; j < NrC; j++)
        {
            elemente[i][j]++;
        }
    }
    return temp;
}

int Matrix::operator[](int x){
    return elemente[x/NrC][x%NrC];
}

Matrix::~Matrix(){std::cout << "\t\t\t\t\t\tMatricea a fost stearsa" << std::endl;}
