#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Biblio/q13.h"
#define F0 printf("🍍|");
#define F1 printf("🍌|");
#define F2 printf("🍇|");
#define F3 printf("🍉|");
#define F4 printf("🍊|");
#define F5 printf("🍒|");
#define F6 printf("🍎|");
#define F7 printf("🍓|");
#define F8 printf("🥑|");
#define F9 printf("🥝|");

int main() {

  int dio = 0, i, i2, ran, j1, j2, erros = 0, acertos = 0;
  int jogo[20], esp[20], esp2[20];

  srand(time(NULL));

  for (i = 0; i < 20; i++)
    jogo[i] = -1, esp[i] = 1, esp2[i] = 1;

  for (i = 0; i < 10; i++) {
    for (i2 = 0; i2 < 2; i2++) {
      ran = rand() % 20;
      if (jogo[ran] == -1)
        jogo[ran] = i;
      else
        i2--;
    }
  }

  for (i = 10; i > 0; i--) {

    clearr();
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴");
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("  🏮🏮🏮🏮🏮  GAME DA MEMÓRIA ");
    printf("- SALADA DE FRUTAS  🏮🏮🏮🏮🏮  \n");
    printf("⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛");
    printf("⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛\n");
    printf("|00|01|02|03|04|05|06|07|08|09|10|");
    printf("11|12|13|14|15|16|17|18|19|\n|");
  
    for (i2 = 0; i2 < 20; i2++) {
      if (jogo[i2] == 0)
        F0;
      if (jogo[i2] == 1)
        F1;
      if (jogo[i2] == 2)
        F2;
      if (jogo[i2] == 3)
        F3;
      if (jogo[i2] == 4)
        F4;
      if (jogo[i2] == 5)
        F5;
      if (jogo[i2] == 6)
        F6;
      if (jogo[i2] == 7)
        F7;
      if (jogo[i2] == 8)
        F8;
      if (jogo[i2] == 9)
        F9;
    }
  
    printf("\n⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛");
    printf("⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛\n");
    printf("            Contagem regressiva 👉 %i", i);
    fflush(stdout);
    sleep(1);
  }

  while (1) {

    clearr();
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴");
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("  🏮🏮🏮🏮🏮  GAME DA MEMÓRIA ");
    printf("- SALADA DE FRUTAS  🏮🏮🏮🏮🏮  \n");
    printf("⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛");
    printf("⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛\n");
    printf("|00|01|02|03|04|05|06|07|08|09|10|");
    printf("11|12|13|14|15|16|17|18|19|\n|");

    for (i = 0; i < 20; i++) {

      if (esp[i] == 0) {
        if (jogo[i] == 0)
          F0;
        if (jogo[i] == 1)
          F1;
        if (jogo[i] == 2)
          F2;
        if (jogo[i] == 3)
          F3;
        if (jogo[i] == 4)
          F4;
        if (jogo[i] == 5)
          F5;
        if (jogo[i] == 6)
          F6;
        if (jogo[i] == 7)
          F7;
        if (jogo[i] == 8)
          F8;
        if (jogo[i] == 9)
          F9;
      } else
        printf("🀄|");
    }

    printf("\n⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛");
    printf("⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛\n");
    printf("            🎏🎏 Erros :   %i\n", erros);
    printf("            🎏🎏 Acertos : %i\n", acertos);
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴");
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    fflush(stdout);

    if( acertos == 10 ) break;

    if( dio == 0 ) {
      for (i = 0; i < 20; i++)  esp[i] = esp2[i];
      dio = 1;
    }
    else if( dio == 1 ) {
      printf("            Posição 1 👉 ");
      scanf("%i", &j1 );

      if( esp[j1] == 1 ) esp[j1] = 0, dio = 2;
    }
    else if( dio == 2 ) {
      printf("            Posição 2 👉 ");
      scanf("%i", &j2 );

      if( esp[j2] == 1 ) esp[j2] = 0, dio = 3;
    }
    else if( dio == 3 ){
      if( jogo[j1] == jogo[j2] ) {
        esp2[j1] = 0;
        esp2[j2] = 0;
        acertos++;
        dio = 0;
      }
      else{
        sleep(3);
        erros++;
        dio = 0;
      }
    }
  }

  printf("\n            🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮\n");
  printf("              🎐          PARABÉNS!!!         🎐\n");
  printf("              🎐         VOCÊ VENCEU!!        🎐\n");
  printf("              🎐                              🎐\n");

  return 0;
}
