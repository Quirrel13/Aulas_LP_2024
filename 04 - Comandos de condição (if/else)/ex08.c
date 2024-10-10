#include <stdio.h>
#include <math.h>

int main() {

  float m;

  printf("Digite sua média: ");
  scanf("%f", &m);

  if ( m >= 9 ) {
    printf(" A ");
  }

  else if ( m >= 8 ) {
    printf(" B ");
  }

  else if ( m >= 6 ) {
    printf(" C ");
  }

  else {
    printf(" D ");
  }

  return 0;

  } 