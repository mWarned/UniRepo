#include <stdio.h>
#include <math.h>

int main() {
    double numar, valoare, elApropiat;
    int pozCurenta = 0, pozApropiata;

    printf("Introduceti un numar real: ");
    scanf("%lf", &numar);

    printf("Introduceti valori reale pozitive (terminati cu o valoare negativa):\n");
    scanf("%lf", &valoare);

    if (valoare >= 0) {
        elApropiat = valoare; 
        pozApropiata = 1;
    } else {
      printf("Nu sunt valori pentru comparare\n");
      return 1;
    }

    while (valoare >= 0) {
        pozCurenta++;

        if (fabs(valoare - numar) < fabs(elApropiat - numar)) {
            elApropiat = valoare;
            pozApropiata = pozCurenta;
        }

        scanf("%lf", &valoare);
    }

    if (pozApropiata != -1) {
        printf("Elementul cel mai apropiat de %.2f este %.2f la pozitia %d.\n", numar, elApropiat, pozApropiata);
    } else {
        printf("Nu au fost introduse valori pozitive.\n");
    }

    return 0;
}

