#include <stdio.h>
#include <math.h>

int main() {

  int f;
  float n1, n2, n3, n4, m;

  printf("Digite sua frequência: ");
  scanf("%i", &f);

  if ( f < 75 ) {
    printf ("Inapto por falta!");
  }

  else {

    printf("Digite suas notas bimestrais: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    m = ( n1 + n2 + n3 + n4 ) / 4;

    if ( m >= 6 ) {
      printf("Apto! ( %.1f )", m );
    }

    else {
      printf("Inapto por nota! ( %.1f )", m );
    }
  }

  return 0;

  } 