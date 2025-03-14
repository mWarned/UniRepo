#ifndef LAB12_H_
#define LAB12_H_

/*
 * Exercitiul 2.4
 */

char *citesteText(char stopChar);
int calculChar(int *litere, int *cifre, int *separatori, int *cuvinte, int *propozitii, int *aliniat, char *string);
void afisare(int *litere, int *cifre, int *separatori, int *cuvinte, int *propozitii, int *aliniat, int *nrCaractere);

/*
 * Exercitiul 2.5
 */

int esteVocala(char c);
void desparteSilabe(char *cuvant);
void afiseazaSilabe(char *string);

#endif // !LAB12_H_

