#include "lab5.h"
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

void sumaVectori(int a[], int b[], int s[], int n)
{
  for (int i = 0; i < n; ++i) {
    s[i] = a[i] + b[i];
  }
}

int produsScalarVectori(int a[], int b[], int n)
{
  int ps = 0;
  int i;
  for(i=0; i<n; ++i)
  {
    ps = ps + a[i]*b[i];
  }
  return ps;
}

double mediaAritmeticaVector(int a[], int n)
{
  int suma = 0;
  for(int i = 0; i < n; ++i){
    suma += a[i];
  }
  return suma / (n - 1);
}

int sumaValorilorPestePrag(int a[], int n, double prag)
{
  int suma = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > prag) {
      suma += a[i];
    }
  }

  return suma;
}

void afisareVectorDouble(double a[], int n)
{
  printf("(");
  for(int i=0; i<n-1; ++i)
  {
    printf("%.2lf, ", a[i]);
  }
  printf("%.2lf)\n", a[n-1]);
}

void mediaTemp(int min[], int max[], double med[], int n)
{
  for (int i = 0; i < n; ++i) {
    med[i] = ((double)min[i] + (double)max[i]) / 2.0;
  }
}

int valMin(int a[], int n)
{
  int min = a[0];
  for (int i = 1; i < n; ++i) {
    if (min > a[i]) {
      min = a[i];
    }
  }
  return min;
}

int valMax(int a[], int n)
{
  int max = a[0];
  for (int i = 1; i < n; ++i) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
}

double mediaAritmeticaVectorDouble(double a[], int n)
{
  double suma = 0;
  for(int i = 0; i < n; ++i){
    suma += a[i];
  }
  return suma / n;
}

double mediaGeoVector(int a[], int n)
{
  int prod = 1;
  for (int i = 0; i < n; ++i) {
    prod *= a[i];
  }
  return pow(prod, 1.0 / (double)n);
}

_Bool gasit(int a[], int n, int el)
{
  for (int i = 0; i < n; ++i) {
    if (a[i] == el) {
      return 1;
    }
  }
  return 0;
}

int distinct(int a[], int b[], int n)
{
  int x = 1;
  b[0] = a[0];
  for (int i = 1; i < n; ++i) {
    if (!gasit(b, x, a[i])) {
      b[x] = a[i];
      x += 1;
    }
  }
  return x;
}

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void citireVectorDouble(double a[], int n)
{
  for(int i=0; i<n; ++i)
  {
    printf("a(%d) = ", i);
    scanf("%lf", &a[i]);
  }
}

double abatereaMediei(double a[], int n, double medie)
{
  double sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += pow(a[i] - medie, 2);
  }
  double val = sum / (n * (n - 1));
  return sqrt(val);
}

int nrElMicMediu(double a[], int n, double medie)
{
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] <= medie) {
      cnt++;
    }
  }
  return cnt;
}

int elMareMediu(double a[], int n, double medie, double b[])
{
  int x = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > medie) {
      b[x] = a[i];
      x++;
    }
  }
  return x;
}

void init_vector(double* a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 1.0;
    }
}

int rezolva_sistem(double coeficienti[6], double solutii[2]) {
    double a = coeficienti[0];
    double b = coeficienti[1];
    double c = coeficienti[2];
    double d = coeficienti[3];
    double e = coeficienti[4];
    double f = coeficienti[5];

    double det = a * d - b * c;

    if (det == 0) {
        if (a * e == b * d && c * e == a * f) {
            return 2; 
        } else {
            return 3; 
        }
    } else {
        solutii[0] = (d * e - b * f) / det;
        solutii[1] = (a * f - c * e) / det;
        return 1; 
    }
}

double produs_scalar(double* a, double* b, int n) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += a[i] * b[i];
    }
    return suma;
}

