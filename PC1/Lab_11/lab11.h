#ifndef LAB11_H_
#define LAB11_H_

/*
 * Exercitiul 3.1
 */

typedef struct _RVECTOR{
  char *nume;
  int n;
  double *x;
} RVECTOR;

char *citireString();
double *citireVectorDouble(int n);

#endif // !LAB11_H_

