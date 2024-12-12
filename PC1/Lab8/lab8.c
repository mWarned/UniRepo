#include "lab8.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * Exercitiul 3.1
 */

void citireDate(int n, int m, int stoc[n][m], int comenzi[n][m], double preturi[m])
{
  if(isatty(fileno(stdin))){
    printf("Introduceti stocul piticilor\n");
  }

  for (int i = 0; i < n; i++) {
    if(isatty(fileno(stdin))){
      printf("Stocul piticului %d: ", i);
    }
    for (int j = 0; j < m; j++) {
      scanf("%d", &stoc[i][j]);
    }
  }

  if(isatty(fileno(stdin))){
    printf("Introduceti comenzilor piticilor\n");
  }

  for (int i = 0; i < n; i++) {
    if(isatty(fileno(stdin))){
      printf("Introduceti comanda piticului %d: ", i);
    }
    for (int j = 0; j < m; j++) {
      scanf("%d", &comenzi[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    scanf("%lf", &preturi[i]);
  }
}

void calculeazaStocuri(int n, int m, int stoc[n][m], int comenzi[n][m])
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      stoc[i][j] += comenzi[i][j];
    }
  }
}

void calculeazaPlata(int n, int m, int comenzi[n][m], double preturi[m], double plataPitici[n])
{
  for (int i = 0; i < n; i++) {
    double suma = 0;
    for (int j = 0; j < m; j++) {
      suma += comenzi[i][j] * preturi[j];
    }

    plataPitici[i] = suma;
  }
}

void calculeazaZile(int n, double G, double plataPitici[n], int zile[n])
{
  for (int i=0; i<n; i++) {
    zile[i] = (int)ceil(plataPitici[i] / G);
  }
}

void afiseazaMatrice(int n, int m, int a[n][m])
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void afiseazaVectorDouble(int n, double a[n])
{
  printf("{");
  for (int i=0; i<n-1; i++) {
    printf("%.2lf, ", a[i]);
  }
  printf("%.2lf}\n\n", a[n-1]);
}

void afiseazaVectorInt(int n, int a[n])
{
  printf("{");
  for (int i=0; i<n-1; i++) {
    printf("%d, ", a[i]);
  }
  printf("%d}\n\n", a[n-1]);
}

/*
 * Exercitiul 3.2
 */

void citireTerenuri(int n, int m, int a[n][m])
{
  if(isatty(fileno(stdin))){
    printf("Introduceti datele despre terenuri");
  }
  for(int i = 0; i < n; i++){
    if(isatty(fileno(stdin))){
      printf("Introduceti altitudinile parcelelor de pe randul %d", i);
    }
    for(int j = 0; j < m; j++){
      scanf("%d", &a[i][j]);
    }
  }
}

int listParceleVarf(int n, int m, int a[n][m], int x[], int y[])
{
  int dim = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int esteVarf = 1; 
      if (i > 0 && a[i][j] <= a[i - 1][j]){
        esteVarf = 0;  
      }
      if (i < n - 1 && a[i][j] <= a[i + 1][j]){
        esteVarf = 0;
      }
      if (j > 0 && a[i][j] <= a[i][j - 1]){
        esteVarf = 0;
      }
      if (j < m - 1 && a[i][j] <= a[i][j + 1]){
        esteVarf = 0;
      }

      if (esteVarf){
        x[dim] = i;
        y[dim] = j;
        dim++;
      }
    }
  }
  return dim;
}

