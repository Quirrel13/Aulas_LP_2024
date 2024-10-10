#include <stdio.h>

int main() {

  float m, q, d;

  printf("Digite a média de consumo (km/l): ");
  scanf("%f", &m);

  printf("Digite a qtde de gasolina no tanque (l): ");
  scanf("%f", &q);

  d = q * m;

  printf("distância percorrida: %.1f km", d);

  return 0;

  } 