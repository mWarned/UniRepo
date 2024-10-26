#include <stdio.h>

int main(void)
{
  int a,b,c;
  int check;

  printf("Inserati de la tastatura 3 numere\n");
  
  printf("a: "); check = scanf("%d", &a);

	if(check != 1) {
		printf("Valoarea introdusa nu este un numar intreg.\n");
		return 1;
	}

  printf("b: "); check = scanf("%d", &b);

	if(check != 1) {
		printf("Valoarea introdusa nu este un numar intreg.\n");
		return 1;
	}

  printf("c: "); check = scanf("%d", &c);

	if(check != 1) {
		printf("Valoarea introdusa nu este un numar intreg.\n");
		return 1;
	}

  if(a > b) {
    if (a > c) {
      printf("Cel mai mare numar este %d\n", a);
    } else {
      printf("Cel mai mare numar este %d\n", c);
    }
  } else {
    if (b > c) {
      printf("Cel mai mare numar este %d\n", b);
    } else {
      printf("Cel mai mare numar este %d\n", c);
    }
  }
}

