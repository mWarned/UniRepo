#include <stdio.h>
#include "lab4.h"

// Exercitiul 1
// int main(void)
// {
//   double a, b;
//   printf("Introduceti doua numere reale: \n"); scanf("%lf%lf", &a, &b);
// 
//   changeValue(&a, &b);
// 
//   printf("Numere dupa executia functiei - a = %.2lf si b = %.2lf\n", a, b);
// 
//   return 0;
// }


// int main(void)
// {
//   int a, b, c;
//   printf("Introduceti trei numere intregi: \n"); scanf("%d%d%d", &a, &b, &c);
// 
//   double ma = mediaAritmetica(a,b,c);
//   double mg = mediaGeometrica(a,b,c);
//   int maxim = max(a,b,c);
//   int minim = min(a,b,c);
// 
//   afisare1_2(ma, mg, maxim, minim);
// 
//   return 0;
// }

// int main(void)
// {
//   f1();
//   int sumaNumere = suma();
//   afisare(sumaNumere);
// 
//   int y;
//   do {
//     printf("Introduceti valoarea y = "); scanf("%d", &y);
//     if (y == 0) {
//       printf("y nu poate fi zero!\n");
//     }
//   } while (y == 0);
// 
//   double rezImpartire = rezultat(sumaNumere, y);
//   printf("Rezultatul impartirii sumei la y = %.2lf\n", rezImpartire);
// 
//   return 0;
// }

// int main(void)
// {
//   int a, b, c;
//   printf("Introduceti 3 numere intregi ce reprezinta laturile unui triunghi: \n"); scanf("%d%d%d", &a, &b, &c);
// 
//   if (esteTriunghi(a,b,c) == 1) {
//     printf("Triunghiul este echilateral - ");
//     int echilateral = esteEchilateral(a,b,c);
//     echilateral == 1 ? printf("Da\n") : printf("Nu\n");
// 
//     printf("Triunghiul este isoscel - ");
//     int isoscel = esteIsoscel(a,b,c);
//     isoscel == 1 ? printf("Da\n") : printf("Nu\n");
// 
//     printf("Triunghiul este dreptunghic - ");
//     int dreptunghic = esteDreptunghic(a,b,c);
//     dreptunghic == 1 ? printf("Da\n") : printf("Nu\n");
//   } else {printf("Nu exista triunghi cu asa laturi\n");}
// 
//   return 0;
// }

// int main(void)
// {
//   int y, pas;
// 
//   do {
//     printf("Introduceti valoarea lui y - \n"); scanf("%d", &y);
//     if (y <= 0) {
//       printf("y trebuie sa fie strict pozitiv!\n");
//     }
//   } while (y <= 0);
// 
// 
//   do {
//     printf("Introduceti valoare pasului (1-10) - \n"); scanf("%d", &pas);
//   } while (pas < 1 || pas > 10);
// 
//   execFG(y, pas);
// 
//   return 0;
// }

// int main(void)
// {
//   int n;
//   printf("Introduceti numarul de perechi: "); scanf("%d", &n);
// 
//   for (int i = 0; i < n; i++) {
//     int a, b;
//     printf("Introduceti perechea %d (divizate prin spatiu): ", i + 1);
//     scanf("%d %d", &a, &b);
// 
//     int cmmdc_ab = cmmdc(a, b);
// 
//     if (estePrim(cmmdc_ab)) {
//       printf("Perechea (%d, %d) are cmmdc prim\n", a, b);
//     }
//   }
// 
//   return 0;
// }

// int main(void)
// {
//   int x, y;
//     printf("Introduceti intervalul [x, y] (divizate prin spatiu): ");
//     scanf("%d %d", &x, &y);
// 
//     printf("Perechile prietene in intervalul [%d, %d]:\n", x, y);
//     for (int i = x; i <= y; i++) {
//         int sum_i = sumaDivizorilor(i);
//         if (sum_i > i && sum_i <= y && suntPrietene(i, sum_i)) {
//             printf("(%d, %d)\n", i, sum_i);
//         }
//     }
// 
//   return 0;
// }

int main(void)
{
  int x, y, alegere;

  printf("Introduceti intervalul [x, y] (divizat prin spatii): ");
  scanf("%d %d", &x, &y);

  printf("Alegeti tipul numerelor ce vor fi afisate:\n");
  printf("-1: Deficient\n0: Perfect\n1: Abundent\n");
  printf("Introduceti alegerea: ");
  scanf("%d", &alegere);

  printf("Numerele in intervalul [%d, %d] ce sunt ", x, y);
  if (alegere == -1) printf("deficiente:\n");
  else if (alegere == 0) printf("perfecte:\n");
  else if (alegere == 1) printf("abundente:\n");

  for (int i = x; i <= y; i++) {
    if (clasaNumarului(i) == alegere) {
      printf("%d\n", i);
    }
  } 

  return 0;
}

