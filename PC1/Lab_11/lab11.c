#include "lab11.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

/*
* Exercitiul 2.1
*/

int menu(void){
  int usrInput = -1;

  printf("Meniul aplicatiei: \n");
  printf("(1) Introducerea datelor vectorului\n");
  printf("(2) Afisarea vectorului introdus\n");
  printf("(3) Ordonarea crescatoare a elementelor vectorului in functie de valoare\n");
  printf("(4) Ordonarea crescatoare a elementelor vectorului in functie de suma cifrelor partii intregi a modulului velorilor\n");
  printf("(0) Iesire din meniu\n\n");
  printf("Introduceti numarul operatiei: "); scanf("%d", &usrInput);
  printf("\n");

  return usrInput;
}

char *citireString(void) {
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
    if(size + 1 >= capacity) {
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

double *citireListaDouble(int n)
{
  double *vector = (double*)malloc(n * sizeof(double));
  if(0 == vector){
    free(vector);
    fprintf(stderr, "Alocare de memorie esuata\n");
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < n; i++) {
    if(isatty(fileno(stdin))) {
      printf("x[%d] = ", i);
    }
    scanf("%lf", &vector[i]);
  }

  return vector;
}

VECTORR citireVector(void)
{
  VECTORR vector;
  if (isatty(fileno(stdin))) {
    printf("Introduceti denumirea vectorului: ");
  }
  int c;
  while ((c = getchar()) != '\n' && c != EOF); // buffer clear
  vector.nume = citireString();

  if(isatty(fileno(stdin))) {
    printf("Introduceti numarul de elemente din Vector: ");
  }
  scanf("%d", &vector.n);

  if(isatty(fileno(stdin))) {
    printf("Introduceti elementele vectorului: \n");
  }
  vector.x = citireListaDouble(vector.n);
  printf("\n\n");

  return vector;
}

void afisareVector(VECTORR *vec)
{
  printf("\nVectorul introdus:\n");
  printf("Denumirea: %s\n", vec->nume);
  printf("Nr valori: %d\n", vec->n);
  printf("Valorile vectorului {");
  for (int i = 0; i < vec->n - 1; i++) {
    printf("%.3lf, ", vec->x[i]);
  }
  printf("%.3lf}\n", vec->x[vec->n - 1]);
  printf("\n\n");
}

void swap(double *num1, double *num2)
{
  double temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void crescatorValoare(VECTORR *vec)
{
  for (int i = 0; i < vec->n-1; i++) {
    for (int j = 0; j < vec->n-i-1; j++) {
      if (vec->x[j] > vec->x[j+1]) {
        swap(&vec->x[j], &vec->x[j+1]);
      }
    }
  }
}

void crescatorSumaCifre(VECTORR *vec)
{
  int vecCifre[vec->n];

  for (int i = 0; i < vec->n; i++) {
    int temp = (int)floor(fabs(vec->x[i]));
    int sum = 0;
    while (temp != 0) {
      sum += temp % 10;
      temp /= 10;
    }
    vecCifre[i] = sum;
  }

  for (int i = 0; i < vec->n-1; i++) {
    for (int j = 0; j < vec->n-i-1; j++) {
      if (vecCifre[j] > vecCifre[j+1]) {
        int temp = vecCifre[j];
        vecCifre[j] = vecCifre[j+1];
        vecCifre[j+1] = temp;
        swap(&vec->x[j], &vec->x[j+1]);
      }
    }
  }
}

/*
* Exercitiul 2.2
*/

void citirePersonal(int n, PERSONAL *tab_pers){
  while (getchar() != '\n' && !feof(stdin)); // buffer clear

  if(isatty(fileno(stdin))){
    printf("Introduceti datele persoanelor:\n");
  }
  for (int i = 0; i<n; i++) {
    if(isatty(fileno(stdin))){
      printf("Persoana %d: \n", i);
      printf("Nume: ");
    }
    tab_pers[i].nume = citireString();
    if(isatty(fileno(stdin))){
      printf("Prenume: ");
    }
    tab_pers[i].prenume = citireString();
    if(isatty(fileno(stdin))){
      printf("Varsta: ");
    }
    scanf("%d", &tab_pers[i].virsta);

    while (getchar() != '\n'); 
  }
}

void afisarePersonal(int n, PERSONAL *tab_pers){
  for (int i=0; i<n; i++) {
    printf("Persoana %d:\n", i+1);
    printf("\tNumele - %s\n", tab_pers[i].nume);
    printf("\tPrenumele - %s\n", tab_pers[i].prenume);
    printf("\tVarsta - %d\n", tab_pers[i].virsta);
  }  
}

void persoaneSub30(int n, PERSONAL *tab_pers){
  for (int i=0; i<n; i++) {
    if(tab_pers[i].virsta < 30){
      printf("Persoana %d:\n", i+1);
      printf("\tNumele - %s\n", tab_pers[i].nume);
      printf("\tPrenumele - %s\n", tab_pers[i].prenume);
      printf("\tVarsta - %d\n", tab_pers[i].virsta);
    }
  }  
}

void sortPersonalNume(int n, PERSONAL *tab_pers) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            char *nume1 = tab_pers[j].nume;
            char *nume2 = tab_pers[j + 1].nume;
            
            int k = 0;
            while (nume1[k] && nume2[k] && nume1[k] == nume2[k]) {
                k++;
            }
            if (nume1[k] > nume2[k]) {
                PERSONAL temp = tab_pers[j];
                tab_pers[j] = tab_pers[j + 1];
                tab_pers[j + 1] = temp;
            }
        }
    }
}

