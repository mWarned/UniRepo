#include <stdio.h>

int suma(int a, int b);
float media(int a, int b);

int main(void)
{
	int a, b;
	int check;

	printf("Introduceti doua numere intregi:\n");
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

	printf("Suma numerelor: %d\nMedia aritmetica a numerelor: %.2f\n", suma(a,b), media(a,b));

	return 0;
}

int suma(int a, int b)
{
	return a + b;
}

float media(int a, int b)
{
	return (float) suma(a, b) / 2;
}
