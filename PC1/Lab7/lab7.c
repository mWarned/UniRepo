#include "lab7.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double *pcitireVector(int n)
{
  double *a = 0;

  a = (double *)malloc(n * sizeof(double));

  if(0 == a)
  {
    fprintf(stderr, "Alocare de memorie esuata\n");
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < n; i++) {
    printf("a(%d) = ", i);
    scanf("%lf", &a[i]);
  }
  
  return a;
}

void afisareVector(double *a, int n)
{
  printf("{");
  for (int i = 0; i < n - 1; i++) {
    printf("%.2lf, ", *(a + i));
  }
  printf("%.2lf}\n", *(a + n - 1));
}

