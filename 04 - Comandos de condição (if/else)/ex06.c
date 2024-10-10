#include <stdio.h>
#include <math.h>

int main() {

  int v1, v2;

  printf("Digite dois valores: ");
  scanf("%i %i", &v1, &v2);

  if ( v1 > v2 ) {
    printf("Maior: %i\nMenor: %i", v1, v2);
  }

  if ( v1 < v2 ) {
    printf("Maior: %i\nMenor: %i", v2, v1);
  }


  return 0;

  }