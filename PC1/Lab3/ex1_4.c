#include <stdio.h>

int main(void)
{
  int n, x;
  
  printf("Dati numarul n - "); scanf("%d", &n);

  printf("Introduceti cele %d numere intregi:\n", n);
  int sum = 0;
  for(int i=0; i<n; i++) {
    scanf("%d", &x);
    sum = sum + x;
  }

  printf("Suma celor %d numere = %d\n", n, sum);

  return 0;
}

