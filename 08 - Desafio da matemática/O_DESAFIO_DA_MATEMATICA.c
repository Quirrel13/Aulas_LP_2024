#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int x[4], op, v1, v2, r, aux;
  x[0] = 0;
  x[1] = 0;
  x[2] = 0;
  x[3] = 0;

  srand(time(NULL));

  while ( x[0] == 0 || x[1] == 0 || x[2] == 0 || x[3] == 0 ) {

    system ("clear");
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("🎴🎴    DESAFIO DA MATEMÁTICA   🎴🎴\n");
    printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
    if( x[0] == 0 ) printf ("🎴🎴   1- ADIÇÃO                🎴🎴\n");
    if( x[1] == 0 ) printf ("🎴🎴   2- SUBTRAÇÃO             🎴🎴\n");
    if( x[2] == 0 ) printf ("🎴🎴   3- MULTIPLICAÇÃO         🎴🎴\n");
    if( x[3] == 0 ) printf ("🎴🎴   4- DIVISÃO               🎴🎴\n");
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("    👉 ");
    scanf("%i", &op );

    printf("\n\n");

    if ( op == 1 && x[0] == 0 ) {

      printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
      printf("🎴🎴     DESAFIO DA ADIÇÃO      🎴🎴\n");
      printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");

      v1 = rand()%101;
      v2 = rand()%101;

      printf("         🎏 %i + %i = ", v1, v2);
      scanf("%i", &r );

      if ( r == v1 + v2 ) {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴    RESPOSTA CERTA!!!       🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

        x[0] = 1;

      }

      else {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴     RESPOSTA ERRADA!!!     🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

      }

      fflush(stdout);
      sleep (1);

    }

    else if ( op == 2 && x[1] == 0 ) {

      printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
      printf("🎴🎴    DESAFIO DA SUBTRAÇÃO    🎴🎴\n");
      printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");

      v1 = rand()%101;
      v2 = rand()%101;

      if ( v2 > v1 ) {
        aux = v1;
        v1 = v2;
        v2 = aux;
      }

      printf("         🎏 %i - %i = ", v1, v2);
      scanf("%i", &r );

      if ( r == v1 - v2 ) {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴    RESPOSTA CERTA!!!       🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

        x[1] = 1;

      }

      else {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴     RESPOSTA ERRADA!!!     🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

      }

      fflush(stdout);
      sleep (1);

    }

    else if ( op == 3 && x[2] == 0 ) {

      printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
      printf("🎴🎴  DESAFIO DA MULTIPLICAÇÃO  🎴🎴\n");
      printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");

      v1 = rand()%100;
      v2 = rand()%11;

      printf("         🎏 %i x %i = ", v1, v2);
      scanf("%i", &r );

      if ( r == v1 * v2 ) {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴    RESPOSTA CERTA!!!       🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

        x[2] = 1;

      }

      else {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴     RESPOSTA ERRADA!!!     🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

      }

      fflush(stdout);
      sleep (1);

    }

    else if ( op == 4 && x[3] == 0 ) {

      printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
      printf("🎴🎴     DESAFIO DA DIVISÃO     🎴🎴\n");
      printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");

      v1 = rand()%100;
      v2 = rand()%11;

      if ( v2 > v1 ) {
        aux = v1;
        v1 = v2;
        v2 = aux;
      }

      printf("         🎏 %i : %i = ", v1, v2);
      scanf("%i", &r );

      if ( r == v1 / v2 ) {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴    RESPOSTA CERTA!!!       🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

        x[3] = 1;

      }

      else {

        printf("🎴🎴🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🎴🎴\n");
        printf("🎴🎴     RESPOSTA ERRADA!!!     🎴🎴\n");
        printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

      }

      fflush(stdout);
      sleep (1);

    }



  }

  system ("clear");
  printf("🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮\n");
  printf("  🎐        PARABÉNS!!!        🎐\n");
  printf("  🎐VOCÊ COMPLETOU O DESAFIO DA🎐\n");
  printf("  🎐       MATEMÁTICA!!!       🎐\n");
  printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

  return 0;

}