#include <stdio.h>

int main(void) {
    int n, num, prev, tip = 4;  
    char rel_mic = 0, rel_mare = 0, rel_egal = 1;  
    
    while (1) {
        printf("Introduceti numarul de elemente (n <= 0 pentru a incheia programul): ");
        scanf("%d", &n);
        
        if (n <= 0) {
            printf("Programul s-a incheiat.\n");
            break;
        }

        printf("Introduceti elementul 1: ");
        scanf("%d", &prev);

        for (int i = 2; i <= n; i++) {
            printf("Introduceti elementul %d: ", i);
            scanf("%d", &num);

            if (num < prev) {
                rel_mic = 1;
                rel_egal = 0;
            } else if (num > prev) {
                rel_mare = 1;
                rel_egal = 0;
            }

            prev = num;  
        }

        if (rel_mic && rel_mare) {
            tip = 1;  // Neordonat
        } else if (rel_mic && !rel_egal) {
            tip = 2;  // Strict descrescător
        } else if (rel_mic && rel_egal) {
            tip = 3;  // Descrescător
        } else if (rel_egal) {
            tip = 4;  // Constant
        } else if (rel_mare && rel_egal) {
            tip = 5;  // Crescător
        } else if (rel_mare && !rel_egal) {
            tip = 6;  // Strict crescător
        } 

        switch (tip) {
            case 6:
                printf("Sir strict crescator (tip 6).\n");
                break;
            case 5:
                printf("Sir crescator (tip 5).\n");
                break;
            case 2:
                printf("Sir strict descrescator (tip 2).\n");
                break;
            case 3:
                printf("Sir descrescator (tip 3).\n");
                break;
            case 4:
                printf("Sir constant (tip 4).\n");
                break;
            case 1:
                printf("Sir neordonat (tip 1).\n");
                break;
        }

        rel_mic = 0;
        rel_mare = 0;
        rel_egal = 1;
        tip = 4;  
    }

    return 0;
}

