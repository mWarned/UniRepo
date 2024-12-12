#ifndef LAB10_H_
#define LAB10_H_

/*
 * Exercitiul 3.1
 */

typedef struct _POLINOM{
  int n;
  double c[20];
} POLINOM;

void citirePolinom(POLINOM *polinom);
void afisarePolinom(const POLINOM *polinom);
double horner(const POLINOM *polinom, double z);

#endif // !LAB10_H_

