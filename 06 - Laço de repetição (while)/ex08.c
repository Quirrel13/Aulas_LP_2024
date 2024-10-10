#include <stdio.h>

int main() {


  int v1, v2, v3, cont;

  printf("Digite 2 valores: ");
  scanf("%i %i", &v1, &v2);

  cont = 0;

  if ( v1 > v2 ) {

    v3 = v1;
    v1 = v2;
    v2 = v3;

  }

  while ( cont < v2 - 6 ) {

    cont = cont + 7;

  }

  if ( cont > v1 ) {

    printf("Maior: %i", cont );

  }

  else {

    printf("¯|⁠_⁠(⁠ツ⁠)⁠_⁠|⁠¯");

  }

  return 0;

}