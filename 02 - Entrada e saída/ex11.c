#include <stdio.h>

int main() {

  int n, d1, d2, d3, s;

  printf("Digite um número inteiro (3 dígitos): ");
  scanf("%i", &n);

  d1 = (n / 100);
  d2 = (n - d1 * 100) / 10;
  d3 = n - d1 * 100 - d2 * 10;
  s = d1 + d2 + d3;

  printf("%i + %i + %i = %i", d1, d2, d3, s);

  return 0;

  } 