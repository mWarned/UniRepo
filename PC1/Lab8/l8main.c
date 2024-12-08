#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include "lab8.h"

int main(void)
{
  /*
    * Exercitiul 3.1
    */

  /*
  int n, m;
  double G;

  if(isatty(fileno(stdin))){
    printf("Introduceti plata pentru o zi de lucru: ");
  }
  scanf("%lf", &G);

  if(isatty(fileno(stdin))){
    printf("Introduceti numarul piticilor si numarul de rafturi pentru fiecare produs: ");
  }
  scanf("%d %d", &n, &m); printf("\n");

  int stoc[n][m], comenzi[n][m];
  double preturi[m], plataPitici[n];
  int zile[n];

  citireDate(n, m, stoc, comenzi, preturi);

  printf("Stocurile piticilor:\n");
  afiseazaMatrice(n, m, stoc);
  printf("Comenzile piticilor:\n");
  afiseazaMatrice(n, m, comenzi);

  printf("Preturile alimentelor: ");
  afiseazaVectorDouble(m, preturi);

  calculeazaStocuri(n, m, stoc, comenzi);
  printf("Stocurile piticilor dupa distributia comenzilor:\n");
  afiseazaMatrice(n, m, stoc);
  
  calculeazaPlata(n, m, comenzi, preturi, plataPitici);
  printf("Costul alimentelor pentru fiecare pitic: ");
  afiseazaVectorDouble(n, plataPitici);

  calculeazaZile(n, G, plataPitici, zile);
  printf("Numarul de zile pe care fiecare pitic trebuie sa le lucreze: ");
  afiseazaVectorInt(n, zile);
  */

  /*
    * Exercitiul 3.2
    */

  int menu = 1;

  do{
    int n, m;

    printf("Introduceti numarul de randuri si parcele: ");
    scanf("%d %d\n", &n, &m);

    int parcele[n][m], x[n*m], y[n*m];

    citireTerenuri(n, m, parcele);
    printf("Altitudinile parcelelor:\n");
    afiseazaMatrice(n, m, parcele);

    int k = 0;
    k = listParceleVarf(n, m, parcele, x, y);
    printf("Lista parcelelor varf:\n");
    for(int i = 0; i < k; i++){
      printf("Parcela %d de pe randul %d este varf cu altitudinea = %d\n", y[i]+1, x[i]+1, parcele[x[i]][y[i]]);
    }

    printf("\nDoriti sa prelucrati alt set de date?(Daca da - introduceti 1)\n"); scanf("%d\n", &menu);
  } while(menu);

  return 0;
}

