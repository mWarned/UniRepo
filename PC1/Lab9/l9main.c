#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include "lab9.h"

int main(void)
{
  /*
    * Exercitiul 3.1
    */
  int menu = 1;

  do {
    int n;
    scanf("%d", &n);

    while (n <= 0 || n > 20) {
      printf("Dimensiunea matricei trebuie sa fie intre 1 si 20.\n");
      scanf("%d", &n); 
    }

    int **A = alocaMatrice(n);
    int **B = alocaMatrice(n);

    printf("Introduceti matricea A (%d x %d):\n", n, n);
    citireMatrice(A, n);

    printf("Matricea A citita este:\n");
    afisareMatrice(A, n);

    calculeazaMatriceB(A, B, n);

    printf("Matricea B calculata este:\n");
    afisareMatrice(B, n);

    elibereazaMatrice(A, n);
    elibereazaMatrice(B, n);

    printf("Daca doriti sa reluati programul, introduceti 1: "); scanf("%d", menu);
  } while(menu);

  return 0;
}

