#include "lab11.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
  /*
    * Exercitiu 2.1
    */

  RVECTOR vector;

  if (isatty(fileno(stdin))) {
    printf("Introduceti denumirea vectorului: ");
  }

  vector.nume = citireString();

  if (isatty(fileno(stdin))) {
    printf("Introduceti numarul de elemente din Vector: ");
  }

  scanf("%d", &vector.n);

  if (isatty(fileno(stdin))) {
    printf("Introduceti elementele vectorului: \n");
  }
  vector.x = citireVectorDouble(vector.n);

  printf("Vectorul introdus:\n%s\n%d\n", vector.nume, vector.n);
  printf("{");
  for (int i = 0; i < vector.n - 1; i++) {
    printf("%.3lf, ", vector.x[i]);
  }
  printf("%.3lf}\n", vector.x[vector.n - 1]);

  return 0;
}

