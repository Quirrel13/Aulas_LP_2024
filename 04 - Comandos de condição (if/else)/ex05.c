#include <stdio.h>
#include <math.h>

int main() {

  int v;

  printf("Digite um valor: ");
  scanf("%i", &v);

  if ( v > 0 ) {
    printf("Positivo!");
  }

  if ( v < 0 ) {
    printf("Negativo!");
  }

  if ( v == 0 ) {
    printf("Neutro!");
  }


  return 0;

  }