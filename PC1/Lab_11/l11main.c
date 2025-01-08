#include "lab11.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  /*
    * Exercitiu 2.1
    */
  /*
  VECTORR vector;
  int usrInput = -1;

  do{
    usrInput = menu();
    switch(usrInput)
    {
      case 1:{
        vector = citireVector();
      }
        break;

      case 2:{
        afisareVector(&vector);
      }
        break;

      case 3:{
        crescatorValoare(&vector);
        printf("\nVectorul a fost ordonat crescator dupa valoare\n\n");
      }
        break;

      case 4:{
        crescatorSumaCifre(&vector);
        printf("\nVectorul a fost ordonat crescator dupa suma cifrelor\n\n");
      }
        break;

      case 0:{
        printf("Iesirea din program!\n");
      }
        break;

      default: {
        fprintf(stderr, "Operatia introdusa nu face parte din meniu. Incercati din nou.\n\n");
      }
    }
  } while(usrInput != 0);
  */

  /*
    * Exercitiul 2.2
    */

  PERSONAL *tab_pers;

  int n;

  if(isatty(fileno(stdin))){
    printf("Introduceti numarul de persoane - ");
  }
  scanf("%d", &n);

  tab_pers = (PERSONAL*)malloc(n * sizeof(PERSONAL));

  citirePersonal(n, tab_pers);
  printf("Datele persoanelor introduse:\n");
  afisarePersonal(n, tab_pers);

  printf("\n\nPersoanele cu varsta sub 30 de ani:\n");

  persoaneSub30(n, tab_pers);

  printf("\n\nPersoanele ordonate alfabetic dupa nume:\n");

  sortPersonalNume(n, tab_pers);
  afisarePersonal(n, tab_pers);

  return 0;
}

