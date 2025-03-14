#include <iostream>
#include "Autoturism.h"
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    Autoturism cars[n];

    for (size_t i = 0; i < n; i++)
    {
        char* culoare = new char[50];
        unsigned int an;
        std::cin >> culoare >> an;
        cars[i].setCar(culoare, an);
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cars[i].afisare();
    }
    
    std::cout << std::endl;

    int celMaiNou = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (!cars[celMaiNou].compara(cars[i]))
        {
            celMaiNou = i;
        }
    }

    cars[celMaiNou].afisare();

    return 0;
}