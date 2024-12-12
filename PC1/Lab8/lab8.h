#ifndef LAB8_H_
#define LAB8_H_

/*
 * Exercitiul 3.1
 */

void citireDate(int n, int m, int stoc[n][m], int comenzi[n][n], double preturi[m]);
void calculeazaStocuri(int n, int m, int stoc[n][m], int comenzi[n][m]);
void calculeazaPlata(int n, int m, int comenzi[n][m], double preturi[m], double plataPitici[n]);
void calculeazaZile(int n, double G, double plataPitici[n], int zile[n]);
void afiseazaMatrice(int n, int m, int a[n][m]);
void afiseazaVectorDouble(int n, double a[n]);
void afiseazaVectorInt(int n, int a[n]);

/*
 * Exercitiul 3.2
 */

void citireTerenuri(int n, int m, int a[n][m]);
int listParceleVarf(int n, int m, int a[n][m], int x[], int y[]);

#endif // !LAB8_H_

