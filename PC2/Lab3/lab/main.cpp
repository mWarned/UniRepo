#include "dreptunghi.h"
#include <iostream>

using namespace std;

int main()
{
    Dreptunghi d1(3, 2);
    Dreptunghi d2(0, 0);
    Dreptunghi d3;
    cout << "Aria = " << d1.Aria() << endl;
    cout << "Aria = " << d2.Aria() << endl;
    cout << "Aria = " << d3.Aria() << endl;

    return 0;
}