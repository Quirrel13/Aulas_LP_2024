#include <stdio.h>
#include <math.h>

int main() {

  float v1, v2, v3;
  printf("Digite os 3 tempos: ");
  scanf("%f %f %f", &v1, &v2, &v3);

  if ( v1 > v2 && v1 > v3 && v2 > v3 ) {

    printf("\n1º lugar: %.2f\n2º lugar: %.2f\n3º lugar: %.2f", v3, v2, v1);

  }

  else if ( v1 > v2 && v1 > v3 && v3 > v2 ) {

    printf("\n1º lugar: %.2f\n2º lugar: %.2f\n3º lugar: %.2f", v2, v3, v1);

  }

  else if ( v2 > v3 && v2 > v3 && v1 > v3 ) {

    printf("\n1º lugar: %.2f\n2º lugar: %.2f\n3º lugar: %.2f", v3, v1, v2);

  }

  else if ( v2 > v3 && v2 > v3 && v3 > v1 ) {

    printf("\n1º lugar: %.2f\n2º lugar: %.2f\n3º lugar: %.2f", v1, v3, v2);

  }

  else if ( v3 > v2 && v3 > v1 && v1 > v2 ) {

    printf("\n1º lugar: %.2f\n2º lugar: %.2f\n3º lugar: %.2f", v2, v1, v3);

  }

  else if ( v3 > v2 && v3 > v1 && v2 > v1 ) {

    printf("\n1º lugar: %.2f\n2º lugar: %.2f\n3º lugar: %.2f", v1, v2, v3);

  }

  return 0;

  } 