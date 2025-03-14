#include "Autoturism.h"

Autoturism::Autoturism(): culoare(new char[1]()), an_fabricatie(0){}

Autoturism::Autoturism(char *newCuloare, unsigned int an): culoare(new char[strlen(newCuloare) + 1]), an_fabricatie(an){
    std::strcpy(culoare, newCuloare);
}

Autoturism::Autoturism(const Autoturism &p): culoare(new char[strlen(p.culoare) + 1]), an_fabricatie(p.an_fabricatie){
    std::strcpy(culoare, p.culoare);
}

Autoturism::Autoturism(Autoturism &&p): culoare(new char[strlen(p.culoare) + 1]), an_fabricatie(p.an_fabricatie){
    p.culoare = new char[1];
    p.an_fabricatie = 0;
}

Autoturism::~Autoturism(){if (culoare) delete[] culoare;}

void Autoturism::afisare(){
    std::cout << "Culoarea - " << this->culoare << ", Anul fabricatiei - " << this->an_fabricatie << std::endl;
}

bool Autoturism::compara(const Autoturism p){
    return an_fabricatie > p.an_fabricatie;
}
