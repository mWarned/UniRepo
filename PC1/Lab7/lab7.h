#ifndef LAB7_H_
#define LAB7_H_

/*
 * Exercitiul 2.1
 */

double *pcitireVector(int n);
void afisareVector(double *a, int n);
void inputVectors(double **a, double **b, int *n, int *m);
double *multimeIntersectie(double *a, double *b, int n, int m, int *k);
double *multimeDiferenta(double *a, double *b, int n, int m, int *k);
double *multimeReuniune(double *a, double *b, int n, int m, int *k);

/*
 * Exercitiul 3.1
 */

char *transformareToAscii(long int n);

#endif // !LAB7_H_

