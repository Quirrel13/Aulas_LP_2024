#include <stdio.h>

int main() {

  int v1, v2, cont;

  printf("Digite 2 valores: ");
  scanf("%i %i", &v1, &v2);
  
  cont = v1;

  while ( cont > 0) {

    printf("%i ", cont );
    cont--;
    
  }

  while ( cont <= v2 ) {

    printf("%i ", cont );
    cont++;
    
  }
  
  return 0;

}