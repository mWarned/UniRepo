#include <stdio.h>
#include <unistd.h>
#include "lab6.h"

int main(void)
{
  /*
   * Exercitiul 1.1
  */

  // char z, *pz;
  // int m, *pm;
  // double fx, *pfx;

  // printf("Introduceti un caracter - "); scanf("%c", &z);
  // printf("Introduceti un numar intreg - "); scanf("%d", &m);
  // printf("Introduceti un numar real - "); scanf("%lf", &fx);

  // pz = &z;
  // pm = &m;
  // pfx = &fx;

  // printf("m = %d\n", m);
  // printf("fx = %lf\n", fx);
  // printf("cht = %c\n", z);
  // printf("\n");
  // printf("Adresa lui m = %p\n", &pm);
  // printf("Adresa lui fx = %p\n", &pfx);
  // printf("Adresa lui cht = %p\n", &pz);
  // printf("\n");
  // printf("Valoarea de la adresa lui m = %d\n", *(&m));
  // printf("Valoarea de la adresa lui fx = %lf\n", *(&fx));
  // printf("Valoarea de la adresa lui cht = %c\n", *(&z));
  // printf("\n");
  // printf("Valoarea pointerului cu adresa lui m = %p\n", pm);
  // printf("Valoarea pointerului cu adresa lui fx = %p\n", pfx);
  // printf("Valoarea pointerului cu adresa lui cht = %p\n", pz);
  // printf("\n");
  // printf("Valoarea de la adresa lui m = %d\n", *pm);
  // printf("Valoarea de la adresa lui fx = %lf\n", *pfx);
  // printf("Valoarea de la adresa lui cht = %c\n", *pz);
  // printf("\n");

  /*
   * Exercitiul 1.2
  */

  // int a, b, *pa, *pb;
  // 
  // if (isatty(fileno(stdin))){
  //     printf("Introduceti doua numere intregi:\n"); 
  // }
  // scanf("%d%d", &a, &b);

  // pa = &a; pb = &b;

  // printf("Suma numerelor = %d\n", *pa + *pb);

  /*
    * Exercitiul 1.3
    */

  // int a, b, *pa, *pb;

  // printf("Introduceti doua numere intregi:\n"); scanf("%d%d", &a, &b);

  // pa = &a; pb = &b;

  // int max = *pa;
  // if (*pb > *pa) {
  //   max = *pb;
  // }

  // printf("Maximul dintre cele doua numere = %d\n", max);

  /*
    * Exercitiul 2.1
    */

  // int a[10];
  // int *pInt = 0, *pInt1 = 0; 
  // double b[10];

  // pInt = a;
  // pInt1 = &a[0];

  // printf("Valoarea lui b - %p\n", b);
  // printf("Valoarea lui pInt - %p\n", pInt);
  // printf("Valoarea lui pInt1 - %p\n", pInt1);

  /*
   * Exercitiul 2.2
   */

  // double b[10];
  // double *pDouble = 0, *pDouble1 = 0;

  // pDouble = b;
  // pDouble1 = &b[0];

  // printf("Valoarea lui b - %p\n", b);
  // printf("Valoarea lui pDouble - %p\n", pDouble);
  // printf("Valoarea lui pDouble1 - %p\n", pDouble1);

  /*
   * Exercitiul 2.3
   */

  // int a[5] = {0, 1, 2, 3, 4};
  // int *pInt2 = 0;
  // double b[5] = {0, 0, 0, 0, 0};
  // double *pDouble2 = 0;

  // size_t dimI, dimD;

  // dimI = sizeof(int);
  // dimD = sizeof(double);

  // pInt2 = a + 1;
  // b[2] = a[2] * 3.14159;
  // pDouble2 = b + 2;

  // printf("Valoare lui dimI si dimD - %zu si %zu\n", dimI, dimD);
  // printf("Valoarea lui pInt2 - %d\n", *pInt2);
  // printf("Valoarea lui pDouble - %lf\n", *pDouble2);

  /*
   * Exercitiul 2.4
   */

  // int a[5] = {0, 1, 2, 3, 4};
  // int *pInt2 = 0;
  // double b[5] = {0, 0, 0, 0, 0};
  // double *pDouble2 = 0;

  // size_t dimI, dimD;

  // dimI = sizeof(int);
  // dimD = sizeof(double);

  // pInt2 = a + 1;
  // b[2] = a[2] * 3.14159;
  // pDouble2 = b + 2;

  // a = a + 1;
  // b = b + 2;

  // printf("Valoare lui dimI si dimD - %zu si %zu\n", dimI, dimD);
  // printf("Valoarea lui pInt2 - %d\n", *pInt2);
  // printf("Valoarea lui pDouble - %lf\n", *pDouble2);

  /*
  * Exercitiul 2.5
  */

  // int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // int *pInt = 0, *pInt1 = 0, *pInt2 = 0;
  // double b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  // double *pDouble = 0, *pDouble1 = 0, *pDouble2 = 0;
  // size_t dimI, dimD;

  // dimI = sizeof(int);
  // dimD = sizeof(double);
  // 
  // pInt = a;
  // pInt1 = &a[0];
  // pDouble = b;
  // pDouble1 = &b[0];

  // pInt2 = a + 1;
  // b[2] = a[2] * 3.14159;
  // pDouble2 = b + 2;

  // printf("*pInt1, pInt1, *a, *(a+1), a[0], a[1], pInt1[0]\n");
  // printf("%d, %p, %d, %d, %d, %d, %d\n", *pInt1, pInt1, *a, *(a+1), a[0], a[1], pInt1[0]);

  /*
    * Exercitiul 4.1
    */

  // #define MAX 100

  // int comori[MAX], capcane[MAX];
  // int n, t;

  // printf("Numarul total de comori(1-100): "); scanf("%d", &n);
  // printf("Numarul comorilor cu capcane(1-99): "); scanf("%d", &t);
  // printf("\n");
  // printf("Introduceti numarul de monede din fiecare comoara:\n");
  // citireVector(comori, n);
  // printf("Monetele din comori: \n"); afisareVector(comori, n);

  // printf("Introduceti indicii comorilor cu capcane:\n");
  // citireVector(capcane, t);
  // printf("Comorile cu capcane: \n"); afisareVector(capcane, t);

  // int totalWorth = calculezMonede(comori, capcane, n, t);
  // printf("Numarul de monede de aur ce pot fi dobandite = %d\n", totalWorth);
  
  /*
    * Exercitiul 4.2
    */

  int a[100];
  int n;
 
  printf("n = "); scanf("%d", &n);

  printf("Introduceti numerele in vector: \n"); citireVector(a, n);
  printf("Afisarea vectorului nesortat: "); afisareVector(a, n);
  
  bubbleSort(a, n);

  printf("Afisarea vectorului sortat: "); afisareVector(a, n);

  return 0;
}

