#include <iostream>
#include <cstring>

class Autoturism
{
private:
    char *culoare;
    unsigned int an_fabricatie; 

public:
    Autoturism();
    Autoturism(char *culoare, unsigned int an = 0);
    Autoturism(const Autoturism &a);
    Autoturism(Autoturism &&a);
    ~Autoturism();
    void afisare();
    void setColor(char *color){
        culoare = new char[strlen(color) + 1];
        strcpy(culoare, color);
    };
    void setYear(unsigned int an){
        an_fabricatie = an;
    };
    void setCar(char *color, unsigned int an){
        culoare = new char[strlen(color) + 1];
        strcpy(culoare, color);
        an_fabricatie = an;
    }
    bool compara(const Autoturism p);
};
