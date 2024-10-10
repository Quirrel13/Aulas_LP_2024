#include <stdio.h>
#include <math.h>

int main() {

  int n, d1, d2, d3;

  printf("Digite os lados do triângulo: ");
  scanf("%i", &n );

  d1 = (n / 100);
  d2 = (n - d1 * 100) / 10;
  d3 = n - d1 * 100 - d2 * 10;

  if ( d1 == d2 && d1 == d3 && d2 == d3 ) {

    printf("Equilátero!");

  }

  else if ( d1 == d2 || d1 == d3 || d2 == d3 ) {

    printf("Isóceles!");

  }

  else {

    printf("Escaleno!");

  }

  return 0;

  } 