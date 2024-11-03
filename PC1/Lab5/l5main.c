#include <stdio.h>
#include "lab5.h"

/*
 * Exercitiul 1.1
 */

// int main(void)
// {
//   int x[MAX], y[MAX], pret[MAX]; 
//   int n; 
//   int stoc[MAX], valoareTotala;
// 
//   printf("n = ");
//   scanf("%d", &n);
//   
//   printf("Stocul din prima bacanie: \n");
//   citireVector(x, n);
//   printf("Am citit: "); afisareVector(x, n);
//   
//   printf("Stocul din a doua bacanie: \n");
//   citireVector(y, n);
//   printf("Am citit: "); afisareVector(y, n);
// 
//   sumaVectori(x, y, stoc, n);
//   printf("Stocul total este: "); afisareVector(stoc, n);
// 
//   printf("Vectorul cu preturile: \n");
//   citireVector(pret, n);
//   printf("Vectorul preturilor este: ");
//   afisareVector(pret, n);
// 
//   valoareTotala = produsScalarVectori(stoc, pret, n);
//   printf("Valoarea totală a stocului este %d. \n", valoareTotala);
// 
//   return 0;
// }

/*
* Exercitiul 1.2
*/

// int main(void)
// {
//   int x[MAX];
//   int n;
//   double mediaRoada;
//   int nrMereTrimise;
// 
//   printf("Introduceti numarul de meri pe rod: "); scanf("%d", &n);
// 
//   citireVector(x, n);
//   printf("Roadele Imparatului Verde: "); afisareVector(x, n);
// 
//   mediaRoada = mediaAritmeticaVector(x, n);
//   printf("Productia medie a merilor - %.2lf\n", mediaRoada);
// 
//   nrMereTrimise = sumaValorilorPestePrag(x, n, mediaRoada);
//   printf("Numarul de mere trimise Imparatului Rosu = %d\n", nrMereTrimise);
// 
//   return 0;
// }

/*
* Exercitiul 1.3
*/

// int main(void)
// {
//   int tempMin[MAX3], tempMax[MAX3];
//   double tempMed[MAX3];
//   int n;
//   int tempMinMin, tempMaxMax;
//   double tempMedMed, mediaGeoTempMax;
// 
//   printf("n = "); scanf("%d", &n);
// 
//   printf("Introduceti valorile temperaturilor minime:\n"); citireVector(tempMin, n);
//   printf("Valorile temperaturilor minime: "); afisareVector(tempMin, n);
// 
//   printf("Introduceti valorile temperaturilor maxime:\n"); citireVector(tempMax, n);
//   printf("Valorile temperaturilor maxime: "); afisareVector(tempMax, n);
// 
//   mediaTemp(tempMin, tempMax, tempMed, n);
//   printf("Valorile medii ale temperaturilor: "); afisareVectorDouble(tempMed, n);
// 
//   tempMinMin = valMin(tempMin, n);
//   printf("Valoarea minima a temperaturilor minime este %d\n", tempMinMin);
// 
//   tempMaxMax = valMax(tempMax, n);
//   printf("Valoare maxima a temperaturilor maxime este %d\n", tempMaxMax);
// 
//   tempMedMed = mediaAritmeticaVectorDouble(tempMed, n);
//   printf("Valoarea media a temperaturilor medii: %.2lf\n", tempMedMed);
// 
//   mediaGeoTempMax = mediaGeoVector(tempMax, n);
//   printf("Valoarea mediei geometrice ale temperaturilor maxime: %.2lf\n", mediaGeoTempMax);
// 
//   return 0;
// }

/*
* Exercitiul 1.4
*/

// int main(void)
// {
//   int a[MAX4], b[MAX4];
//   int n, bn;
// 
//   printf("n = "); scanf("%d", &n);
// 
//   printf("Introduceti valorile in vector:\n"); citireVector(a, n);
//   printf("Valorile vectorului: "); afisareVector(a, n);
// 
//   bn = distinct(a, b, n);
//   printf("Valorile distincte din vector: "); afisareVector(b, bn);
// 
//   return 0;
// }

/*
* Exercitiul 1.5
*/

// int main(void)
// {
//   int a[MAX5];
//   int n;
// 
//   printf("n = "); scanf("%d", &n);
// 
//   printf("Introduceti numerele in vector: \n"); citireVector(a, n);
//   printf("Afisarea vectorului nesortat: "); afisareVector(a, n);
//   
//   bubbleSort(a, n);
// 
//   printf("Afisarea vectorului sortat: "); afisareVector(a, n);
// 
//   return 0;
// }

/*
* Exercitiul 2.1
*/

// int main(void)
// {
//   double x[MAX6], valMedie, abatereValMedie, y[MAX6];
//   int n, m;
//   int nrLowerThanAvg;
// 
//   printf("n = "); scanf("%d", &n);
// 
//   printf("Introduceti valorile vectorului x:\n"); citireVectorDouble(x, n);
//   printf("Valorile vectorului x: "); afisareVectorDouble(x ,n);
// 
//   valMedie = mediaAritmeticaVectorDouble(x, n);
//   printf("Valoarea medie a vectorului = %.2lf\n", valMedie);
// 
//   abatereValMedie = abatereaMediei(x, n, valMedie);
//   printf("Valoarea abaterii mediei patratice = %.2lf\n", abatereValMedie);
// 
//   nrLowerThanAvg = nrElMicMediu(x, n, valMedie);
//   printf("Numarul valorilor mai mici decat valoarea medie - %d\n", nrLowerThanAvg);
// 
//   m = elMareMediu(x, n, valMedie, y);
//   printf("Valorile vectorului y: "); afisareVectorDouble(y, m);
// 
//   return 0;
// }
#include <math.h>
#define MAX_TIMES 100

// Funcția pentru a calcula concentrația
double calculate_concentration(double k, double t, double C0) {
    return C0 * exp(-k * t);
}
int main(void)
{
  double k; 
  double C0; 
  double times[MAX_TIMES]; 
  double concentrations[MAX_TIMES]; 
  int n; 

  printf("Introduceti constanta de descompunere (k): ");
  scanf("%lf", &k);
  printf("Introduceti concentrarea initiala (C0): ");
  scanf("%lf", &C0);

  printf("Introduceti numarul de momente de timp (n): ");
  scanf("%d", &n);

  printf("Introduceti momentele de timp (separate prin spatiu): ");
  for (int i = 0; i < n; i++) {
    scanf("%lf", &times[i]);
  }

  for (int i = 0; i < n; i++) {
    concentrations[i] = calculate_concentration(k, times[i], C0);
  }

  printf("\nMomente de timp\tConcentratia\n");
  for (int i = 0; i < n; i++) {
    printf("%.2lf\t\t%.4lf\n", times[i], concentrations[i]);
  }

  return 0;
}

