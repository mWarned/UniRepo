#include <stdio.h>
#include <math.h>

double relatiaRecursiva(double a, int p, double epsilon) {
    double x_n, x_prev;
    int iteration = 0;

    // x_0 = a / p
    x_n = a / p;

    do {
        x_prev = x_n;
        
        x_n = (1.0 / p) * ((p - 1) * x_prev + a / pow(x_prev, p - 1));
        iteration++;

    } while (fabs(x_n - x_prev) > epsilon); 
    
    printf("Sirul este convergent dupa %d iteratii.\n", iteration);
    return x_n;
}

int main() {
    double a, epsilon;
    int p, num_cases;

    printf("Cate cazuri doriti sa calculati?? ");
    scanf("%d", &num_cases);

    for (int i = 0; i < num_cases; i++) {
        printf("\nIntroduceti valoarea lui a: ");
        scanf("%lf", &a);
        printf("Introduceti valoarea lui p: ");
        scanf("%d", &p);
        printf("Introduceti eroarea epsilon: ");
        scanf("%lf", &epsilon);

        double result = relatiaRecursiva(a, p, epsilon);
        printf("Rezultatul este %.10lf\n", result);
    }

    return 0;
}

