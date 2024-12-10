#ifndef LAB9_H_
#define LAB9_H_

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

#endif // !LAB9_H_

