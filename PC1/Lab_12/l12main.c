#include "lab12.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
  /*
    * Exercitiul 2.3
    */

  /*
  FILE *fisier = fopen("p11.c", "r");
  if (fisier == 0) {
    fprintf(stderr, "Eroare la deschiderea fisierului!\n");
    exit(EXIT_FAILURE);
  }

  printf("Codul din p11 fara comentarii:\n");

  int c, next_c;

  while ((c = fgetc(fisier)) != EOF) {
    if (c == '/') {
      next_c = fgetc(fisier);
      if (next_c == '/') {
        while ((c = fgetc(fisier)) != EOF && c != '\n');
        putchar('\n');
      } else if(next_c == '*'){
        while ((c = fgetc(fisier)) != EOF) {
          if (c == '*') {
            if ((next_c = fgetc(fisier)) == '/') {
              break; 
            } else {
              ungetc(next_c, fisier);
            }
          }
        }
        if (c == '\n') {
         putchar('\n');
        }
      }
    } else {
      putchar(c);
    }
  }

  fclose(fisier);
  */

  /*
    * Exercitiul 2.4
    */
/*
  char *string = citesteText(EOF);
  int litere = 0, cifre = 0, separatori = 0, cuvinte = 0, propozitii = 0, aliniate = 0, nrCaractere;
  nrCaractere = calculChar(&litere, &cifre, &separatori, &cuvinte, &propozitii, &aliniate, string);
  afisare(&litere, &cifre, &separatori, &cuvinte, &propozitii, &aliniate, &nrCaractere);
*/
  /*
    * Exercitiul 2.5
    */

  char *string = citesteText('.');
  desparteSilabe(string);

  return 0;
}

