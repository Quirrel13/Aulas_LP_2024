#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Biblio/cores.h"

int main() {

  srand(time(NULL));
  char str[15];
  int i, i2;

  WHITE

  printf("Vetor aleatório: ");
  for ( int i = 0; i < 15; i++ ) {
    str[i] = rand()%26 + 65;
    printf("%c ", str[i] );
  } 

  printf("\nVetor alterado: ");

  for ( int i = 0; i < 15; i++ ) {

    WHITE

    for ( i2 = i + 1; i2 < 15; i2++)  if ( str[i] == str[i2]) str[i2] = '@';
    
    if ( str[i] == '@' ) CYAN

    printf("%c ", str[i] );

  }

  return 0;

}