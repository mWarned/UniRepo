#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b, c;

  printf("Introduceti coeficientii ecuatiei de gradul 2:\n");
  scanf("%f%f%f", &a, &b, &c);

  float delta = pow(b, 2) - 4*a*c;

  if(delta < 0) {
    printf("Ecuatia nu poate fi rezolvata\n");
  } else if (delta == 0){
    printf("Ecuatia are o singura radacina - %.2f\n", -b / 2*a);
  } else {
    printf("Ecuatia are radacinile - %.2f si %.2f\n", -b + sqrt(delta) / 2*a, -b - sqrt(delta) / 2*a);
  }

  return 0;
}
