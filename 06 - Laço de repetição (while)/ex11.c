#include <stdio.h>

int main() {


  int v1, v2, v3, v4, v5, v6, v7, cont;

  printf("Digite 7 valores positivos menores que 1000: ");
  scanf("%i %i %i %i %i %i %i", &v1, &v2, &v3, &v4, &v5, &v6, &v7 );

  cont = 1000;

  printf("Ordem decrescente: ");

  while ( cont > 0 ) {

    if ( cont == v1 ) printf("%i ", cont);

    if ( cont == v2 ) printf("%i ", cont);

    if ( cont == v3 ) printf("%i ", cont);

    if ( cont == v4 ) printf("%i ", cont);

    if ( cont == v5 ) printf("%i ", cont);

    if ( cont == v6 ) printf("%i ", cont);

    if ( cont == v7 ) printf("%i ", cont);

    cont--;

  }

  return 0;

}