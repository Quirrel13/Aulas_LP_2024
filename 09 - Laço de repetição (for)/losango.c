#include <stdio.h>

int main() {

  int altura, espaco, emoji, cont, cont2;

  printf("Digite a altura: ");
  scanf("%i", &altura );

  espaco = ( altura + 1 ) / 2;
  emoji = 1;

  while ( espaco > 0 ) {

    for( cont = 1; cont <= espaco; cont++ ) printf("  ");
    for( cont2 = 1; cont2 <= emoji; cont2++ ) printf("🔴");

    printf("\n");

    espaco--;
    emoji = emoji + 2;

  }

  emoji = emoji - 4;
  espaco = espaco + 1;

  while ( espaco < ( altura + 1 ) / 2 ) {

    printf("  ");
    for( cont = 1; cont <= espaco; cont++ ) printf("  ");
    for( cont2 = 1; cont2 <= emoji; cont2++ ) printf("🔴");

    printf("\n");

    espaco++;
    emoji = emoji - 2;

  }

  return 0;

}