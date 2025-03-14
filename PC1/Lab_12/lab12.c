#include "lab12.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Exercitiul 2.4
*/

char *citesteText(char stopChar) {
  size_t capacity = 16;
  size_t length = 0;
  char *buffer = malloc(capacity);

  if (!buffer) {
    fprintf(stderr, "Alocare de memorie esuata!\n");
    exit(EXIT_FAILURE);
  }

  int c;
  while ((c = fgetc(stdin)) != EOF && c != stopChar) {
    if (length + 1 >= capacity) {
      capacity += 10;
      char *new_buffer = realloc(buffer, capacity);
      if (!new_buffer) {
        free(buffer);
        fprintf(stderr, "Realocare de memorie esuata!\n");
        exit(EXIT_FAILURE);
      }
      buffer = new_buffer;
    }
    buffer[length++] = c;
  }

  buffer[length] = '\0';

  if (c == EOF && length == 0) {
    free(buffer);
    return NULL;
  }

  return buffer;
}

int calculChar(int *litere, int *cifre, int *separatori, int *cuvinte, int *propozitii, int *aliniat, char *string){
  int i = 0;
  char c;
  int inCuvant = 0;

  while ((c = string[i]) != '\0') {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      (*litere)++;
      inCuvant = 1;
    } 
    else if (c >= '0' && c <= '9') {
      (*cifre)++;
      inCuvant = 1;
    }
    else if (c == ' ' || c == ';' || c == '.' || c == ',' || c == '-' || c == ':') {
      (*separatori)++;

      if (inCuvant) {
        (*cuvinte)++;
        inCuvant = 0;
      }

      if(string[i + 1] != EOF){
        if (c == '.' && string[i + 1] == ' ') {
          (*propozitii)++;
        }
      }
    }

    if (c == '\t') {
      (*aliniat)++;
    }

    i++;
  }

  return i-1;
}

void afisare(int *litere, int *cifre, int *separatori, int *cuvinte, int *propozitii, int *aliniat, int *nrCaractere){
  printf("\n\n Textul de mai sus are %d caractere si contine:\n", *nrCaractere);
  printf("%d litere\n", *litere);
  printf("%d cifre\n", *cifre);
  printf("%d separatori\n", *separatori);
  printf("%d cuvinte\n", *cuvinte);
  printf("%d propozitii\n", *propozitii);
  printf("%d aliniate\n", *aliniat);
}

/*
* Exercitiul 2.5
*/

int esteVocala(char c) {
    char vocale[] = "aeiouAEIOU";
    for (int i = 0; vocale[i] != '\0'; i++) {
        if (c == vocale[i]) {
            return 1;
        }
    }
    return 0;
}

void desparteSilabe(char *cuvant) {
  int lungime = strlen(cuvant);

  for (int i = 0; i < lungime; i++) {
    putchar(cuvant[i]);

    if (i + 2 < lungime && esteVocala(cuvant[i]) && !esteVocala(cuvant[i + 1]) && esteVocala(cuvant[i + 2])) {
      putchar('-');
    }
    else if (i + 3 < lungime && esteVocala(cuvant[i]) && !esteVocala(cuvant[i + 1]) && !esteVocala(cuvant[i + 2]) && esteVocala(cuvant[i + 3])) {
      putchar('-');
    } 
  }
  printf("\n");
}

afiseazaSilabe(char *string){
  char *cuvant;
  while () {
  }
}

