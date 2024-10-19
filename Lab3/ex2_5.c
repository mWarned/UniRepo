#include <stdio.h>
#include <math.h>

int main(void)
{
  int num;
    
  printf("Introduceti numere intregi pozitive (terminati cu 0):\n");

  while (1) {
      scanf("%d", &num);
      
      if (num == 0) {
          break;
      }
      
      int max_square = 0;
      int root = (int)sqrt(num); 
      max_square = root * root;   
      
      printf("Cel mai mare patrat perfect <= %d este %d\n", num, max_square);
    }

  return 0;
}
