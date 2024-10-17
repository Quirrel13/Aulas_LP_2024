#include <stdio.h>
#include <math.h>

int main() {

  int v;

  printf("Digite um valor: ");
  scanf("%i", &v);

  v = v % 2;

  if ( v == 0 ) {
    printf("Par!");
  }

  else {
    printf("Ímpar!");
  }

  return 0;

  } 