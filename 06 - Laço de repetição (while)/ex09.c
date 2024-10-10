#include <stdio.h>

int main() {


  int v1, fa, cont;

  printf("Digite 1 valor: ");
  scanf("%i", &v1);

  printf("Fatorial %i = 1", v1 );

  cont = 2;
  fa = 1;

  while ( cont <= v1 ) {

    fa = fa * cont;
    printf(" x %i", cont);
    cont++;

  }

  printf(" = %i", fa);

  return 0;

}