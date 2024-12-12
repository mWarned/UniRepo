#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include "lab7.h"

int menu(){
  int usrInput = -1;

  printf("Alegeti tipul prelucrarii: \n");
  printf("(1) Determinarea multimii intersectiilor A&B si cardinalul acesteai\n");
  printf("(2) Determinarea multimii diferenta simetrica A-B si cardinalul acesteia\n");
  printf("(3) Determinarea multimii reuniune A+B si cardinalul acesteia\n");
  printf("(4) Rescrierea valorilor vectorilor\n");
  printf("(0) Iesire din meniu\n\n");
  printf("Introduceti numarul operatiei: "); scanf("%d", &usrInput);
  printf("\n");

  return usrInput;
}

int main(void)
{
  /*
    * Exercitiul 2.2
    */

  /*
  double *a = 0, *b = 0, *vec = 0;
  int n = 0, m = 0, k = 0;

  _Bool loopApp = 1;
  inputVectors(&a, &b, &n, &m);
  do
  {
    int usrInput = menu();
    switch (usrInput)
    {
      case 0:
        loopApp = 0;
        break;

      case 1:
        if(vec != 0 && k!=0){
          memset(vec, 0, k * sizeof(double)); free(vec); 
        }
        k = 0;
        vec = multimeIntersectie(a, b, n, m, &k);
        if (k != 0) {
          printf("Multimea intersectiilor celor doi vectori este: "); afisareVector(vec, k);
          printf("Cardinalul vectorului este - %d\n", k);
        } else {
          printf("Multimea intersectiilor este vida sau a aparut o eroare.\n");
        }
        break;

      case 2:
        if(vec != 0 && k!=0){
          memset(vec, 0, k * sizeof(double)); free(vec); 
        }
        k = 0;
        vec = multimeDiferenta(a, b, n, m, &k);
        if (k != 0) {
          printf("Multimea diferentelor celor doi vectori este: "); afisareVector(vec, k);
          printf("Cardinalul vectorului este - %d\n", k);
        } else {
          printf("Multimea intersectiilor este vida sau a aparut o eroare.\n");
        }
        break;

      case 3:
        if(vec != 0 && k!=0){
          memset(vec, 0, k * sizeof(double)); free(vec); 
        }
        k = 0;
        vec = multimeReuniune(a, b, n, m, &k);
        if (k != 0) {
          printf("Multimea reuniunie a celor doi vectori este: "); afisareVector(vec, k);
          printf("Cardinalul vectorului este - %d\n", k);
        } else {
          printf("Multimea intersectiilor este vida sau a aparut o eroare.\n");
        }
        break;

      case 4:
        if(a != 0){
          memset(a, 0, n * sizeof(double)); free(a); 
        }
        if(b != 0){
          memset(b, 0, m * sizeof(double)); free(b);
        }
        inputVectors(&a, &b, &n, &m);
        break;

      default: {
        fprintf(stderr, "Operatia introdusa nu face parte din meniu. Incercati din nou.\n\n");
      }
    }
  } while (loopApp);

  printf("Iesirea din program\n");

  if(a != 0){
    memset(a, 0, n * sizeof(double)); free(a); 
  }
  if(b != 0){
    memset(b, 0, m * sizeof(double)); free(b); 
  }
  if(vec != 0){
    memset(vec, 0, k * sizeof(double)); free(vec); 
  }
  */

  char *sir = 0;
  long int n = 0;
  printf("Introduceti un numar intreg: "); scanf("%ld", &n);
  
  sir = transformareToAscii(n);
  
  printf("Numarul sub forma de sir de caractere: %s\n", sir);

  return 0;
}

