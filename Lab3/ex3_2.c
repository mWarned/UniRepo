#include <stdio.h>
#include <stdbool.h>

_Bool esteTriunghi(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

_Bool esteEchilateral(int a, int b, int c) {
    return (a == b) && (b == c);
}

_Bool esteIsoscel(int a, int b, int c) {
    return (a == b) || (a == c) || (b == c);
}

_Bool esteDreptunghic(int a, int b, int c) {
    return (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);
}

int main() {
    int a, b, c;

    printf("Introduceti cele trei laturi ale triunghiului: \n"); scanf("%d %d %d", &a, &b, &c);

    if (!esteTriunghi(a, b, c)) {
        printf("Nu este un triunghi valid.\n");
        return 1;
    }

    if (esteEchilateral(a, b, c)) {
        printf("Triunghiul este echilateral.\n");
    } else if (esteDreptunghic(a, b, c)) {
        printf("Triunghiul este dreptunghic.\n");
    } else if (esteIsoscel(a, b, c)) {
        printf("Triunghiul este isoscel.\n");
    } else {
        printf("Triunghi oarecare.\n");
    }

    return 0;
}

