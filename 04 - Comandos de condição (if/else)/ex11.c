#include <stdio.h>
#include <math.h>

int main() {

  int v1, v2, v3;
  printf("Digite 3 valores: ");
  scanf("%i %i %i", &v1, &v2, &v3);

  if ( v1 > v2 && v1 > v3 && v2 > v3 ) {

    printf("%i %i %i", v3, v2, v1);

  }

  else if ( v1 > v2 && v1 > v3 && v3 > v2 ) {

    printf("%i %i %i", v2, v3, v1);

  }

  else if ( v2 > v3 && v2 > v3 && v1 > v3 ) {

    printf("%i %i %i", v3, v1, v2);

  }

  else if ( v2 > v3 && v2 > v3 && v3 > v1 ) {

    printf("%i %i %i", v1, v3, v2);

  }

  else if ( v3 > v2 && v3 > v1 && v1 > v2 ) {

    printf("%i %i %i", v2, v1, v3);

  }

  else if ( v3 > v2 && v3 > v1 && v2 > v1 ) {

    printf("%i %i %i", v1, v2, v3);

  }

  return 0;

  } 