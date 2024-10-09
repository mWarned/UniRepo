#include <stdio.h>

int a, b;
int check;

int main(void)
{
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

	int suma;
	float media;

	suma = a + b;
	media = (float)suma / 2;

	printf("Suma numerelor: %d\nMedia aritmetica a numerelor: %.2f\n", suma, media);

	return 0;
}
