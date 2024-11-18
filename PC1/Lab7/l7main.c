#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lab7.h"

int main(void)
{
  /*
    * Exercitiul 2.2
    */

  int n;

  printf("Introduceti numarul de elemente din vectori: \n"); scanf("%d", &n);

  printf("Introduceti valorile vectorului A:\n");
  double *a = pcitireVector(n); 
  printf("\nValorile vectorului A: "); afisareVector(a, n);

  printf("Introduceti valorile vectorului B:\n");
  double *b = pcitireVector(n); 
  printf("\nValorile vectorului B: "); afisareVector(b, n);

  memset(a, 0, n * sizeof(double)); free(a); 
  memset(b, 0, n * sizeof(double)); free(b);
  return 0;
}

