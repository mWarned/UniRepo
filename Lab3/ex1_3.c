#include <stdio.h>

void inputNumber(float *num1, float *num2) {
    int check;
    // Input num1
    while (1) {
        printf("Primul numar: ");
        check = scanf("%f", num1);
        if (check == 1) break;
        printf("Eroare: Introduceti un numar real\n");
        while (getchar() != '\n');
    }

    // Input num2
    while (1) {
        printf("Al doilea numar: ");
        check = scanf("%f", num2);
        if (check == 1) break;
        printf("Eroare: Introduceti un numar real\n");
        while (getchar() != '\n');
    }
}

void menu(int askForInput, float num1passed, float num2passed)
{
  int choice;
  float num1 = num1passed, num2 = num2passed, result;

  if(askForInput == 1){
    inputNumber(&num1, &num2);
  }

  // Menu display
  printf("\nMenu:\n");
  printf("1. Suma\n");
  printf("2. Diferenta\n");
  printf("3. Inmultirea\n");
  printf("4. Impartirea\n");
  printf("5. Schimba numerele\n");
  printf("6. Iesire\n\n");
  printf("Choose an operation (1-5): ");
  scanf("%d", &choice);

  // Menu choise operations
  switch(choice) {
    case 1:
      result = num1 + num2;
      printf("Suma: %.2f\n", result);
      break;
    case 2:
      result = num1 - num2;
      printf("Diferenta: %.2f\n", result);
      break;
    case 3:
      result = num1 * num2;
      printf("Inmultirea: %.2f\n", result);
      break;
    case 4:
      if (num2 != 0) {
        result = num1 / num2;
        printf("Impartirea: %.2f\n", result);
      } else {
        printf("Eroare: Impartirea la 0 este imposibila.\n");
      }
      break;
    case 5:
      inputNumber(&num1, &num2);
      break;
    case 6:
      printf("Iesire...\n");
      return;
    default:
      printf("Alegeti un numar de la 1 la 5.\n");
    }

  menu(0, num1, num2);
}

int main(void){
  menu(1, 0, 0);
  return 0;
}

