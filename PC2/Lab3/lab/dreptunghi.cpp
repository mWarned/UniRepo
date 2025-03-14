#include "dreptunghi.h"
#include <iostream>

void Dreptunghi::SetLungime(int lung)
{
    lungime = lung;
}

void Dreptunghi::SetLatime(int lat)
{
    latime = lat;
}

int Dreptunghi::Aria()
{
    return lungime * latime;
}

Dreptunghi::Dreptunghi(int lung, int lat)
{
    lungime = lung;
    latime = lat;
}

Dreptunghi::~Dreptunghi(){
    std::cout << "Destructor!" << std::endl;
}
