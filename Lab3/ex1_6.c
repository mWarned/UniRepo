#include <stdio.h>

int main(void)
{
  float prod = 1, x;
  printf("Introduceti sirul de numere intregi:\n");

  scanf("%f", &x);
  while(x != 0){
    prod *= x;
    scanf("%f", &x);
  }

  printf("Produsul numerelor introduse = %.2f\n", prod);
  return 0;
}
