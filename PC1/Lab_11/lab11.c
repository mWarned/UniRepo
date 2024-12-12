#include "lab11.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
* Exercitiul 2.1
*/

char *citireString() {
  char *str = 0;
  char ch;
  size_t size = 0;
  size_t capacity = 1;

  str = (char*)malloc(capacity * sizeof(char));
  if (!str) {
    fprintf(stderr, "Alocare de memorie esuata\n");
    exit(EXIT_FAILURE);
  }

  while ((ch = getchar()) != '\n' && ch != EOF) {
    if (size + 1 >= capacity) {
      capacity++;
      char *temp = (char*)realloc(str, capacity * sizeof(char));
      if (!temp) {
        free(str);
        fprintf(stderr, "Alocare de memorie esuata\n");
        exit(EXIT_FAILURE);
      }
      str = temp;
    }
    str[size++] = ch;
  }

  str[size] = '\0';

  return str;
}

double *citireVectorDouble(int n)
{
  double *vector = (double*)malloc(n * sizeof(double));
  if(0 == vector){
    free(vector);
    fprintf(stderr, "Alocare de memorie esuata\n");
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < n; i++) {
    if (isatty(fileno(stdin))) {
      printf("x[%d] = ", i);
    }
    scanf("%lf", &vector[i]);
  }

  return vector;
}

