#include <stdio.h>

int main(void)
{
  int x,y;
  printf("Inserati coordonatele punctului:\n"); scanf("%d%d", &x, &y);

  if (x == 0) {
    if (y == 0) {
      printf("Punctul se afla in origine\n");
    } else if (y > 0) {
      printf("Punctul se afla in cadranele: 1-2\n");
    } else if (y < 0) {
      printf("Punctul se afla in cadranele: 3-4\n");
    }
  } else if (x > 0) {
    if (y == 0) {
      printf("Punctul se afla in cadranele: 1-4\n");
    } else if (y > 0) {
      printf("Punctul se afla in cadranul 1\n");
    } else if (y < 0) {
      printf("Punctul se afla in cadranul 4\n");
    }
  } else if (x < 0) {
    if (y == 0) {
      printf("Punctul se afla in cadranele: 2-3\n");
    } else if (y > 0) {
      printf("Punctul se afla in cadranul 2\n");
    } else if (y < 0) {
      printf("Punctul se afla in cadranul 3\n");
    }
  }

  return 0;
}

