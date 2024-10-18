#include <stdio.h>
#include <math.h>

int main(void)
{
  int x, check;

  printf("Introduceti valoarea x de la tastatura - "); check = scanf("%d", &x);

  if(check != 1) {
		printf("Valoarea introdusa nu este un numar intreg.\n");
		return 1;
	}

  if(x <= 2){
    printf("%d\n",x*x + 3*x + 5);
  } else if(x <8){
    printf("%d\n",3*x);
  } else {
    printf("%.2f\n", pow(exp(1.0),x) + 2);
  }
}

