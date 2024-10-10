#include <stdio.h>

int main() {

  char l1, l2, l3;

  printf("Digite 3 letras: ");
  scanf("%c %c %c", &l1, &l2, &l3);

  printf("combinação 1: %c%c%c\n", l1, l2, l3 );
  printf("combinação 2: %c%c%c\n", l1, l3, l2 );
  printf("combinação 3: %c%c%c\n", l2, l1, l3 );
  printf("combinação 4: %c%c%c\n", l2, l3, l1 );
  printf("combinação 5: %c%c%c\n", l3, l1, l2 );
  printf("combinação 6: %c%c%c\n", l3, l2, l1 );

  return 0;

  } 