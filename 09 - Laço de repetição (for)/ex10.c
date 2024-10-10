#include <stdio.h>

int main() {

  int v1, v2, cont;

  printf("digite 2 números inteiros: ");
  scanf("%i %i", &v1, &v2);

  if ( v1 % 2 != 0 ) cont = v1 + 1;
  else cont = v1;

  for ( ; cont != v2 + 10 ;  cont = cont + 2 ) {

    if ( cont % 2 == 0 ) {

      if ( cont == v1 || cont == v1 + 1 ) printf("Números pares: ");

      printf("%i ", cont );

      if ( cont == v2 || cont == v2 - 1 ) {

        printf("\n");

        if ( v1 % 2 == 0 ) cont = v1 + 1;
        else cont = v1;

      }
    }

    if ( cont % 2 != 0 ) {

      if ( cont == v1 || cont == v1 + 1 ) printf("Números ímpares: ");

      printf("%i ", cont );


      if ( cont == v2 || cont == v2 - 1 ) break;
    }
  }

  return 0;

}