#ifndef LAB11_H_
#define LAB11_H_

/*
 * Exercitiul 2.1
 */

typedef struct _VECTORR{
  char *nume;
  int n;
  double *x;
} VECTORR;

int menu(void);
char *citireString(void);
double *citireListaDouble(int n);
VECTORR citireVector(void);
void afisareVector(VECTORR *vec);
void swap(double *num1, double *num2);
void crescatorValoare(VECTORR *vec);
void crescatorSumaCifre(VECTORR *vec);

/*
 * Exercitiul 2.2
 */

typedef struct _PERSONAL{
  char *nume;
  char *prenume;
  int virsta;
} PERSONAL;

void citirePersonal(int n, PERSONAL *tab_pers);
void afisarePersonal(int n, PERSONAL *tab_pers);
void persoaneSub30(int n, PERSONAL *tab_pers);
void sortPersonalNume(int n, PERSONAL *tab_pers);

#endif // !LAB11_H_

