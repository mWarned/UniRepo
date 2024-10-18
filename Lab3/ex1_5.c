#include <stdio.h>

int main(void)
{
  int prod = 1, x;
  printf("Introduceti sirul de numere intregi:\n");

  scanf("%d", &x);
  while(x != 0){
    prod *= x;
    scanf("%d", &x);
  }

  printf("Produsul numerelor introduse = %d\n", prod);
  return 0;
}
