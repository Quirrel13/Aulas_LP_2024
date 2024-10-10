#include <stdio.h>

int main() {

  int b, q, c;

  printf("Digite um valor inteiro: ");
  scanf("%i", &b);

  q = b * b;
  c = b * q;

  printf("Quadrado = %i\nCubo = %i", q, c);

  return 0;

  } 