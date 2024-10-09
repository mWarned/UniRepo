#include <stdio.h>
#include <math.h>

double heron(int a, int b, int c);

int main(void)
{
	int a, b, c;
	int check;

	printf("Introduceti marimile laturilor triunghiului (valori intregi):\n");
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
	
	printf("Aria triunghiului = %.2lf\n", heron(a, b, c));

	return 0;
}

double heron(int a, int b, int c)
{
	float semiper;

	semiper = (a + b + c) / 2;

	return sqrt((double)(semiper * (semiper - a) * (semiper - b) * (semiper - c)));
}
