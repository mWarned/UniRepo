#include "lab10.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
* Exercitiul 3.1
*/

void citirePolinom(POLINOM *polinom) {
  if (isatty(fileno(stdin))) {
    printf("Introdu gradul polinomului (0-19): ");
  }
  scanf("%d", &polinom->n);

  if (polinom->n < 0 || polinom->n >= 20) {
    do{
      printf("Introduceti un grad valit al polinomului(0-19): "); scanf("%d", &polinom->n);
    } while(polinom->n < 0 || polinom->n >= 20);
  }

  if (isatty(fileno(stdin))) {
    printf("Introdu coeficientii polinomului (de la grad maxim la constant):\n");
  }
  for (int i = 0; i <= polinom->n; i++) {
    if (isatty(fileno(stdin))) {
      printf("Coeficient pentru x^%d: ", polinom->n - i);
    }
    scanf("%lf", &polinom->c[i]);
  }
}

void afisarePolinom(const POLINOM *polinom) {
  printf("Polinomul este: ");
  for (int i = 0; i <= polinom->n; i++) {
    if (i > 0 && polinom->c[i] >= 0) {
      printf(" + ");
    }
    printf("%.2lf", polinom->c[i]);
    if (i < polinom->n) {
      printf("x^%d", polinom->n - i);
    }
  }
  printf("\n");
}

double horner(const POLINOM *polinom, double z) {
    double rezultat = polinom->c[0];
    for (int i = 1; i <= polinom->n; i++) {
        rezultat = rezultat * z + polinom->c[i];
    }
    return rezultat;
}

