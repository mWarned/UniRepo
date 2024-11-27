#include "lab7.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
    if(isatty(fileno(stdin))){
      printf("a(%d) = ", i);
    }
    scanf("%lf", a+i);
  }
  
  return a;
}

void afisareVector(double *a, int n)
{
  printf("{");
  for (int i = 0; i < n - 1; i++) {
    printf("%.2lf, ", *(a + i));
  }
  printf("%.2lf}\n\n", *(a + n - 1));
}

void inputVectors(double *a, double *b, int *n, int *m){
  if (isatty(fileno(stdin))){
    printf("Introduceti numarul de elemente din primul vector: \n");
  }
  scanf("%d", n);

  if(isatty(fileno(stdin))){
    printf("Introduceti valorile vectorului A:\n");
  }
  a = pcitireVector(*n); 
  
  printf("\nValorile vectorului A: "); afisareVector(a, *n);

  if(isatty(fileno(stdin))){
    printf("Introduceti numarul de elemente din al doilea vector: \n");  
  }
  scanf("%d", m);

  if(isatty(fileno(stdin))){
    printf("Introduceti valorile vectorului B:\n");
  }
  b = pcitireVector(*m); 
  printf("\nValorile vectorului B: "); afisareVector(b, *m);
}
