#include <stdio.h>

int main() {

  int j1, j2;

  printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");
  printf("Digite as jogadas do jogador 1 e jogador 2: ");
  scanf("%i %i", &j1, &j2);

  if ( j1 == j2 ) {

    printf("Empate!");

  }

  if ( j1 == 1 && j2 == 2 ) {

    printf("j2 wins!!");

  }

  if ( j1 == 1 && j2 == 3 ) {

    printf("j1 wins!!");

  }

  if ( j1 == 2 && j2 == 1 ) {

    printf("j1 wins!!");

  }

  if ( j1 == 2 && j2 == 3 ) {

    printf("j2 wins!!");

  }

  if ( j1 == 3 && j2 == 1 ) {

    printf("j2 wins!!");

  }

  if ( j1 == 3 && j2 == 2 ) {

    printf("j1 wins!!");

  }

  return 0;

}