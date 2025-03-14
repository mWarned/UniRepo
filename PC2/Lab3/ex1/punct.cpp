#include "punct.h"
#include <iostream>
#include <cmath>

void Punct::SetX(int x1)
{
    x = x1;
}

void Punct::SetY(int y1)
{
    y = y1;
}

int Punct::GetX()
{
    return x;
}

int Punct::getY()
{
    return y;
}

double Punct::distantaO(){
    return sqrt(x*x + y*y);
}

double Punct::distantaLa(Punct p)
{
    return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
}

void Punct::compareWith(Punct p)
{
    if (this->distantaO() > p.distantaO())
    {
        std::cout << "Distanta este mai mare!" << std::endl;
    } else {
        std::cout << "Distanta este mai mica!" << std::endl;
    }
    
}

Punct::Punct(int x1, int y1)
{
    x = x1;
    y = y1;
}
