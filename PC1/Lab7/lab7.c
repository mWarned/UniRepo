#include "lab7.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
*  Exercitiul 2.2
*/

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
    scanf("%lf", &a[i]);
  }
  
  return a;
}

void afisareVector(double *a, int n)
{
  printf("{");
  for (int i = 0; i < n - 1; i++) {
    printf("%.2lf, ", a[i]);
  }
  printf("%.2lf}\n\n", a[n-1]);
}

void inputVectors(double **a, double **b, int *n, int *m){
  if (isatty(fileno(stdin))){
    printf("Introduceti numarul de elemente din primul vector: \n");
  }
  scanf("%d", n);

  if(isatty(fileno(stdin))){
    printf("Introduceti valorile vectorului A:\n");
  }
  *a = pcitireVector(*n); 
  
  printf("\nValorile vectorului A: "); afisareVector(*a, *n);

  if(isatty(fileno(stdin))){
    printf("Introduceti numarul de elemente din al doilea vector: \n");  
  }
  scanf("%d", m);

  if(isatty(fileno(stdin))){
    printf("Introduceti valorile vectorului B:\n");
  }
  *b = pcitireVector(*m); 
  printf("\nValorile vectorului B: "); afisareVector(*b, *m);
}

double *multimeIntersectie(double *a, double *b, int n, int m, int *k)
{
  if (!a || !b || n <= 0 || m <= 0 || k==0) {
    fprintf(stderr, "Date de intrare nevalide\n");
    exit(EXIT_FAILURE);
  }

  int tempDim = (n < m ? n : m);
  double *temp = (double *)malloc(tempDim * sizeof(double));
  if(0 == temp){
    fprintf(stderr, "Eroare de alocare a memoriei");
    exit(EXIT_FAILURE);
  }

  int dim = 0;
  for (int i=0; i < n; i++) {
    for (int j=0; j < m; j++) {
      if(a[i] == b[j]){
        _Bool duplicat = 0;

        for(int l = 0; l < dim; l++){
          if(temp[l] == a[i]){
            duplicat = 1;
            break;
          }
        }
        
        if(!duplicat){
          temp[dim] = a[i];
          dim++;
        }

        break;
      }
    }
  }

  double *rezultat = (double *)realloc(temp, dim * sizeof(double));
  if (!rezultat && dim > 0) {
    fprintf(stderr, "Eroare la realocarea memoriei");
    free(temp);
    exit(EXIT_FAILURE);
  }

  *k = dim;
  return rezultat;
}

double *multimeDiferenta(double *a, double *b, int n, int m, int *k)
{
  if (!a || !b || n <= 0 || m <= 0 || k==0) {
    fprintf(stderr, "Date de intrare nevalide\n");
    exit(EXIT_FAILURE);
  }

  int tempDim = m + n;
  double *temp = (double *)malloc(tempDim * sizeof(double));
  if(0 == temp){
    fprintf(stderr, "Eroare de alocare a memoriei");
    exit(EXIT_FAILURE);
  }

  int dim = 0;
  for (int i=0; i < n; i++) {
    _Bool exista_in_b = 0;
    for (int j=0; j < m; j++) {
      if (a[i] == b[j]) {
        exista_in_b = 1;
      }
    }

    if(!exista_in_b){
      _Bool duplicat = 0;

      for(int l = 0; l < dim; l++){
        if(temp[l] == a[i]){
          duplicat = 1;
          break;
        }
      }

      if(!duplicat){
        temp[dim] = a[i];
        dim++;
      }
      exista_in_b = 0;
    }
  }

  for (int i=0; i < m; i++) {
    _Bool exista_in_a = 0;
    for (int j=0; j < n; j++) {
      if (b[i] == a[j]) {
        exista_in_a = 1;
      }
    }

    if(!exista_in_a){
      _Bool duplicat = 0;

      for(int l = 0; l < dim; l++){
        if(temp[l] == b[i]){
          duplicat = 1;
          break;
        }
      }

      if(!duplicat){
        temp[dim] = b[i];
        dim++;
      }
      exista_in_a = 0;
    }
  }

  double *rezultat = (double *)realloc(temp, dim * sizeof(double));
  if (!rezultat && dim > 0) {
    fprintf(stderr, "Eroare la realocarea memoriei");
    free(temp);
    exit(EXIT_FAILURE);
  }

  *k = dim;
  return rezultat;
}

double *multimeReuniune(double *a, double *b, int n, int m, int *k)
{
  if (!a || !b || n <= 0 || m <= 0 || k==0) {
    fprintf(stderr, "Date de intrare nevalide\n");
    exit(EXIT_FAILURE);
  }

  int tempDim = m + n;
  double *temp = (double *)malloc(tempDim * sizeof(double));
  if(0 == temp){
    fprintf(stderr, "Eroare de alocare a memoriei");
    exit(EXIT_FAILURE);
  }

  int dim = 0;
  for (int i=0; i < n; i++) {
    temp[dim] = a[i];
    dim++;
  }

  for (int i=0; i < m; i++) {
    _Bool deja_exista = 0;
    for (int j=0; j < dim; j++) {
      if (b[i] == temp[j]) {
        deja_exista = 1;
      }
    }

    if (!deja_exista) {
      temp[dim] = b[i];
      dim++;
    }
  }

  double *rezultat = (double *)realloc(temp, dim * sizeof(double));
  if (!rezultat && dim > 0) {
    fprintf(stderr, "Eroare la realocarea memoriei");
    free(temp);
    exit(EXIT_FAILURE);
  }

  *k = dim;
  return rezultat;
}

char *transformareToAscii(long int n)
{
  char *sir = 0;
  int numar_cifre = 0;
  long int num = labs(n);
  if (n == 0) {
    sir = (char *)malloc(2 * sizeof(char));
    sir = "0\0";
  } else {
    numar_cifre = floor(log10(num) + 1);

    if (numar_cifre == 0) {
      fprintf(stderr, "Numarul de cifre a numarului este 0.\n");
      exit(EXIT_FAILURE);
    } else {
      sir = (char *)malloc((numar_cifre+2) * sizeof(char));

      if (n < 0) {
        *sir = '-';
      } else {
        *sir = '+';
      }

      for (int i=numar_cifre; i >= 1; i--) {
        sir[i] = '0' + (num % 10);
        num /= 10;
      }

      sir[numar_cifre+1] = '\0';
    }

  }

  return sir;
}

