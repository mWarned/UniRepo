#include "lab9.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
* Exercitiul 3.1
*/

void citireMatrice(int **A, int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }
}

void afisareMatrice(int **A, int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}

void calculeazaMatriceB(int **A, int **B, int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      B[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      B[i][j] = 0;
      for (int k = 0; k <= i; k++) {
        B[i][j] += A[k][j];
      }
    }
  }
}

int **alocaMatrice(int n)
{
  int **matrix = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++) {
    matrix[i] = (int *)malloc(n * sizeof(int));
  }
  return matrix;
}

void elibereazaMatrice(int **matrix, int n)
{
  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);
}

