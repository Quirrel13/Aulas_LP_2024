#include <stdio.h>
#include <math.h>

int main() {

  int x, y;

  printf("Digite dois valores: ");
  scanf("%i %i", &x, &y);

  if ( x < y ) {

    while ( x <= y ) {

      printf("%i ", x);

     x = x + 1;

    }
  }

  else if ( y < x ) {

      while ( y <= x ) {

        printf("%i ", y);

       y = y + 1;

      }
    }

  return 0;

}