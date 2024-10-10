#include <stdio.h>

int main() {


  int v1, x, cont;

  printf("Digite 1 valor: ");
  scanf("%i", &v1);

  cont = 2;
  x = 1;

  while ( cont < v1 ) {

    if ( v1 % cont == 0 ) {

      x = 0;
      cont = v1;

    }

    cont++;

  }

  if ( v1 == 0 ){

    printf("¯⁠|_⁠(⁠ツ⁠)⁠_⁠|¯");

  }

  else if ( x == 0 && v1 != 2 ){

    printf("NÃO PRIMO!");

  }

  else {

    printf("PRIMO!");

  }

  return 0;

}