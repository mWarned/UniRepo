#include "punct.h"
#include <iostream>

using namespace std;

int max(Punct p[5])
{
    int max = 0;
    int j = 0;
    for (int i = 1; i < 10; i++)
    {
        if (p[i].distantaO() > p[j].distantaO())
        {
            max = i;
            j = i;
        }
    }
    
    return max;
}

bool eTriunghi(Punct a, Punct b, Punct c)
{
    double aria = 0.5 * abs(a.GetX() * (b.getY() - c.getY()) + b.GetX() * (c.getY() - a.getY()) + c.GetX() * (a.getY() - b.getY()));
    return aria > 0;
}

bool eEchilateral(Punct a, Punct b, Punct c)
{
    double ab = a.distantaLa(b);
    double bc = b.distantaLa(c);
    double ca = c.distantaLa(a);

    return eTriunghi(a, b, c) && (ab == bc && bc == ca);
}

void checkTriunghi(Punct p[5])
{
    for (int i = 0; i < 5 - 2; i++)
    {
        for (int j = i; j < 5 - 1; j++)
        {
            for (int k = j; k < 5; k++)
            {
                if (eEchilateral(p[i], p[j], p[k]))
                {
                    std::cout << "Punctele: " << i << ", " << j << " si " << k << " sunt puncte ale unui triunghi echilateral." << std::endl;
                } else if(eTriunghi(p[i], p[j], p[k])){
                    std::cout << "Punctele: " << i << ", " << j << " si " << k << " sunt puncte ale unui triunghi oarecare." << std::endl;
                }
            }
        }
    }
}

int main()
{
    Punct p0(3,4);
    Punct p1;
    Punct p2(4,0);
    Punct p3(9,3);
    Punct p4(2,3);

    std::cout << "Distanta pana la origine = " << p1.distantaO() << std::endl;

    p1.compareWith(p2);
    p2.compareWith(p1);

    Punct p[5] = {p0, p1, p2, p3, p4};
    int maxim = max(p);

    std::cout << "Punctul cu distanta maxima este " << maxim << ", cu distanta = " << p[maxim].distantaO() << std::endl;

    checkTriunghi(p);

    return 0;
}
