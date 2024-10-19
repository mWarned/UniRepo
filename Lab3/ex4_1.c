#include <stdio.h>

int suma_divizori(int n) {
    int suma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main(void) {
    int x, y, optiune;

    do {
        printf("Introduceti valorile x si y (x <= y):\n");
        scanf("%d %d", &x, &y);
    } while (x <= 0 || y <= 0 || x > y);

    int checkLoop = 1;
    
    while (checkLoop == 1) {
        printf("Alegeți o opțiune:\n");
        printf("1. Afișați toate numerele perfecte\n");
        printf("2. Afișați toate numerele abundente\n");
        printf("3. Afișați toate numerele deficiente\n");
        scanf("%d", &optiune);

        for (int i = x; i <= y; i++) {
            int suma = suma_divizori(i);

            if (optiune == 1 && suma == i) {
                printf("%d este perfect.\n", i);
            } else if (optiune == 2 && suma > i) {
                printf("%d este abundent.\n", i);
            } else if (optiune == 3 && suma < i) {
                printf("%d este deficient.\n", i);
            }
        }

        printf("Doriti sa continuati? (1 - da, 0 - iesire din meniu)\n"); scanf("%d", &checkLoop);
    }
    
    return 0;
}

