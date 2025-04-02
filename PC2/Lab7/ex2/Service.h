#pragma once
#include "Autoturism.h"

class Service {
private:
    Autoturism* autos[3] = {nullptr};

public:
    void addAuto(Autoturism* a, unsigned int poz) {
        autos[poz] = a;
    }

    void afisareAuto() const {
        for (unsigned int i = 0; i < 3; i++) {
            if (autos[i]) { 
                std::cout << *autos[i] << " ";
            }
        }
        std::cout << std::endl;
    }
};
