#include "lab6.h"
#include <math.h>
#include <stdio.h>

void citireVector(int a[], int n)
{
  for(int i=0; i<n; ++i)
  {
    printf("a(%d) = ", i);
    scanf("%d", &a[i]);
  }
}

void afisareVector(int a[], int n)
{
  int i;
  printf("(");
  for(i=0; i<n-1; ++i)
  {
    printf("%d, ", a[i]);
  }
  printf("%d)\n", a[n-1]);
}

int calculezMonede(int a[], int b[], int n, int t)
{
  int ti = 0, sum = 0;

  for (int i = 0; i < n; ++i) {
    if (i == b[ti] && ti <= t) {
      ti++;
    } else {
      sum += a[i];
    }
  }

  return sum;
}

void interchangeInt(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                interchangeInt(&a[j], &a[j+1]);
            }
        }
    }
}

