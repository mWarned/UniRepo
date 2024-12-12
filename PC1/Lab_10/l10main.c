#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include "lab10.h"

int main(void)
{
  /*
    * Exercitiul 3.1
    */

  struct _POLINOM polinom;
  double z;

  citirePolinom(&polinom);

  afisarePolinom(&polinom);

  if (isatty(fileno(stdin))) {
    printf("Introdu punctul z unde se evalueaza polinomul: ");
  }
  scanf("%lf", &z);

  double valoare = horner(&polinom, z);
  printf("Valoarea polinomului in punctul %.2lf este %.2lf\n", z, valoare);

  return 0;
}

