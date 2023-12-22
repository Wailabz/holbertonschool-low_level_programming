#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strcat(char *dest /* wail */, char *src /* ahmed */)
{
  int total = strlen(dest) + strlen(src); //on compte le nombre de caracteres de la chaine compelte
  printf("total: %d", total);
  
  char *final = (char *) malloc(total); //on alloue la mémoire

  for (int i = 0; i < strlen(dest); i++)
  {
      final[i] = dest[i];
  }

  for (int i = strlen(dest); i < total; i++)
  {
    final[i] = src[i - strlen(dest)];
  }

  return (final);
}

int main() {
  char *toto = "wail";
  char *caca = "ahmed";

  char *result = _strcat(toto,caca);

  printf("res is : %s\n", result);

}
