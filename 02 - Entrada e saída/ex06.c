#include <stdio.h>

int main() {

  float a, b, c;

  printf("digite as duas notas: ");
  scanf("%f %f", &a, &b);

  c = (a + b) / 2;

  printf("média = %.2f", c);

  return 0;

  }
  