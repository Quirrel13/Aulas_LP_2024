#include <stdio.h>

int main() {

  int v1, v2, cont;

  printf("Digite 2 valores: ");
  scanf("%i %i", &v1, &v2);

  cont = v1;

  if ( v1 > v2 ) {

    while ( cont >= v2 ) {

      printf("%i ", cont);
      cont--;

    }

  }

  if ( v1 < v2 ) {

    while ( cont <= v2 ) {

      printf("%i ", cont);
      cont++;

    }

  }

  return 0;

}