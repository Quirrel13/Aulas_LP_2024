#include <stdio.h>

int main() {

  int v1, v2, v3, v4, v5, v6;

  v6 = -200;
  v5 = 10;
  v1 = v5 + v6;
  v2 = v5 - v6;
  v3 = v5 * v6;
  v4 = v6 / v5;

  printf("Valor de (v6) = %i\n", v6);
  printf("Valor de (v5) = %i\n", v5);
  printf("Soma: %i + %i = %i\n", v5, v6, v1);
  printf("Subtração: %i - %i = %i\n", v5, v6, v2);
  printf("Multiplicação: %i x %i = %i\n", v5, v6, v3);
  printf("Divisão: %i : %i = %i\n", v6, v5, v4);

  return 0;

  } 