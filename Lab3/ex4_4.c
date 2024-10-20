#include <stdio.h>

double power(double x, int n) {
    double rezultat = 1.0;
    double puterea_curenta = x;

    while (n > 0) {
        if (n % 2 == 1) {
            rezultat *= puterea_curenta;
        }
        puterea_curenta *= puterea_curenta;
        n /= 2;
    }

    return rezultat;
}

int main() {
    double x;
    int n;

    printf("Introduceti baza x: ");
    scanf("%lf", &x);
    printf("Introduceti exponentul n: ");
    scanf("%d", &n);

    double rezultat = power(x, n);

    printf("Rezultatul este %.2lf\n", rezultat);

    return 0;
}

