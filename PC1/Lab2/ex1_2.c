#include <stdio.h>
#include <math.h>

double a, b;
int check;

int main(void)
{
	printf("Introduceti doua numere reale in dubla precizie:\n");
	printf("a: "); check = scanf("%lf", &a);

	if(check != 1) {
		printf("Valoarea introdusa nu este un numar real in dubla precizie.\n");
		return 1;
	}

	printf("b: "); check = scanf("%lf", &b);

	if(check != 1) {
		printf("Valoarea introdusa nu este un numar real in dubla precizie.\n");
		return 1;
	}

	double produs, media;

	produs = a * b;
	media = sqrt(produs);

	printf("Produsul numerelor: %.2lf\nMedia aritmetica a numerelor: %.2lf\n", produs, media);

	return 0;
}

