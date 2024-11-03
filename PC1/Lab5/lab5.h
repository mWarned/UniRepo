#ifndef LAB5_H_
#define LAB5_H_

// 1.1
#define MAX 20

void citireVector(int a[], int n);
void afisareVector(int a[], int n);
void sumaVectori(int a[], int b[], int s[], int n);
int produsScalarVectori(int a[], int b[], int n);

// 1.2
#define MAX2 50

double mediaAritmeticaVector(int a[], int n);
int sumaValorilorPestePrag(int a[], int n, double prag);

// 1.3
#define MAX3 31

void afisareVectorDouble(double a[], int n);
void mediaTemp(int min[], int max[], double med[], int n);
int valMin(int a[], int n);
int valMax(int a[], int n);
double mediaAritmeticaVectorDouble(double a[], int n);
double mediaGeoVector(int a[], int n);

// 1.4
#define MAX4 100

_Bool gasit(int a[], int n, int el);
int distinct(int a[], int b[], int n);

// 1.5
#define MAX5 30

void bubbleSort(int a[], int n);

// 2.1
#define MAX6 100

void citireVectorDouble(double a[], int n);
double abatereaMediei(double a[], int n, double valMedie);
int nrElMicMediu(double a[], int n, double valMedie);
// Returneaza nr de elemente in b
int elMareMediu(double a[], int n, double valMedie, double b[]);

// 2.2

void init_vector(double* a, int n);
int rezolva_sistem(double coeficienti[6], double solutii[2]);
double produs_scalar(double* a, double* b, int n);

#endif // !LAB5_H_

