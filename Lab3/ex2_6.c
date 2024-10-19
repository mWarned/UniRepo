#include <stdio.h>

int main(void) {
  int num1, num2;

  printf("Introduceti doua numere intregi strict pozitive: ");
  scanf("%d %d", &num1, &num2);

    
  if (num1 <= 0 || num2 <= 0) {
    printf("Ambele numere trebuie sa fie strict pozitive.\n");
    return 1; 
  }

  while (num2 != 0) 
  {
    int rest = num1 % num2;
    num1 = num2;
    num2 = rest;
  }
 
  printf("Cel mai mare divizor comun este: %d\n", num1);

  return 0;
}

