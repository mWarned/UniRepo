#include "lab4.h"
#include <math.h>
#include <stdio.h>

void changeValue(double *a, double *x)
{
  *a = *a + 10;
  *x = *x * 2;
}

double mediaAritmetica(int a, int b, int c)
{
  return (a + b + c) / 3;
}

double mediaGeometrica(int a, int b, int c)
{
  return pow(a * b * c, 1.0 / 3.0);
}

int max(int a, int b, int c)
{
  if (a > b) {
    if (a > c) {
      return a;
    }
    else {
      return c;
    }
  }
  else {
    if (b > c) {
      return b;
    }
    else {
      return c;
    }
  }
}

int min(int a, int b, int c)
{
  if (a < b) {
    if (a < c) {
      return a;
    }
    else {
      return c;
    }
  }
  else {
    if (b < c) {
      return b;
    }
    else {
      return c;
    }
  }
}

void afisare1_2(double ma, double mg, int max, int min)
{
  printf("Media aritmetica a numerelor - %.2lf\n", ma); 
  printf("Media geometrica a numerelor - %.2lf\n", mg); 
  printf("Maximumul numerelor - %d\n", max); 
  printf("Minimumul numerelor - %d\n", min); 
}

void f1(void) {
  printf("Acest program citeste un sir de numere intregi pozitive, terminat cu 0 si afiseaza suma lor.\n");
  printf("Se va introduce un numar y la care se va imparti suma numerelor\n\n");
}

int suma(void) {
  int num, sum = 0;

  printf("Introduceti numere intregi pozitive (terminati cu 0):\n");

  while (1) {
    scanf("%d", &num);
    if (num == 0) {
      break;
    }
    sum += num;
  }
  return sum;
}

void afisare(int a) {
  printf("Suma numerelor citite este: %d\n", a);
}

double rezultat(int s, int y) {
  return (double)s / y;
}

int esteTriunghi(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a) ? 1 : 0;
}

int esteEchilateral(double a, double b, double c) {
    return (a == b && b == c) ? 1 : 0;
}

int esteIsoscel(double a, double b, double c) {
    return (a == b || a == c || b == c) ? 1 : 0;
}

int esteDreptunghic(double a, double b, double c) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        double temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    return (fabs(pow(c, 2) - (pow(a, 2) + pow(b, 2))) < 1e-9) ? 1 : 0;
}

double f(int x)
{
  if(x <= 2){
    return (double)x*x + 3*x + 5;
  } else if(x <8){
    return (double)3*x;
  } else {
    return pow(exp(1.0),x) + 2;
  }
}

double g(int x, int y)
{
  return (3 * pow(x, 2)) + (sin(x) / pow(y, 1.0 / 4.0));
}

void execFG(int y, int pas)
{
  printf("Rezultatele functiilor:\n");
  for (int x = 0; x <= 10; x += pas)
  {
    printf("f(x) = %.2lf\n", f(x));
    printf("g(x, y) = %.2lf\n\n", g(x, y));
  }
}

int cmmdc(int a, int b)
{
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int estePrim(int num)
{
  if (num < 2) return 0;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return 0;
  }
  return 1;
}

int sumaDivizorilor(int num)
{
  int sum = 0;
  for (int i = 1; i <= num / 2; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  return sum;
}

int suntPrietene(int a, int b)
{
  return (sumaDivizorilor(a) == b) && (sumaDivizorilor(b) == a);
}

int clasaNumarului(int num)
{
  int sum = sumaDivizorilor(num);
  if (sum < num) return -1;
  else if (sum == num) return 0;
  else return 1;
}

