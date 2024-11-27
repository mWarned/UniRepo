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

  return usrInput;
}

int main(void)
{
  /*
    * Exercitiul 2.2
    */

  double *a = 0, *b = 0;
  int n, m;

  _Bool loopApp = 1;
  do
  {
    int usrInput = menu();
    switch (usrInput)
    {
    case 0:
      loopApp = 0;
      break;

    case 1:
      break;

    case 2:
      break;

    case 3:
      break;

    case 4:
      if(a != 0){
        memset(a, 0, n * sizeof(double)); free(a); 
      }
      if(b != 0){
        memset(b, 0, m * sizeof(double)); free(b);
      }
      inputVectors(a, b, &n, &m);
      break;
    
    default: {
      fprintf(stderr, "Operatia introdusa nu face parte din meniu. Incercati din nou.\n\n");
      }
    }
  } while (loopApp);

  printf("Iesirea din program");

  return 0;
}

