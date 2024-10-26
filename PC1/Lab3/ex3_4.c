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

int main() {
    int x, y;

    printf("Introduceti capetele intervalului [x, y]:\n");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0 || x > y) {
        printf("Date eronate! x si y trebuie sa fie numere naturale, iar x <= y.\n");
        return 1;
    }

    printf("Numere prietene din intervalul [%d, %d]:\n", x, y);
    for (int a = x; a <= y; a++) {
        int b = suma_divizori(a);
        if (b > a && b <= y && suma_divizori(b) == a) {
            printf("%d si %d sunt numere prietene.\n", a, b);
        }
    }

    return 0;
}

