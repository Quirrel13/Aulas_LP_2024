#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CYAN  printf("\033[0;36m");
#define WHITE  printf("\033[0;37m");
int main() {

  int cont, resp, ran, i, vet[20], esp[20];
  srand(time(NULL));

  for( i = 0; i < 20; i++ ) {
    esp[i] = 0;
    vet[i] = 0;
  }
  // 1 = 🥵
  // 2 = 🤢
  // 3 = 🥶
  // 4 = 😎

  for( i = 0; i < 8; i++ ) {
    ran = rand()%20;
    if ( vet[ran] == 0 ) vet[ran] = 1;
    else i--;
  }
  for( i = 0; i < 6; i++ ) {
    ran = rand()%20;
    if ( vet[ran] == 0 ) vet[ran] = 2;
    else i--;
  }
  for( i = 0; i < 4; i++ ) {
    ran = rand()%20;
    if ( vet[ran] == 0 ) vet[ran] = 3;
    else i--;
  }
  for( i = 0; i < 2; i++ ) {
    ran = rand()%20;
    if ( vet[ran] == 0 ) vet[ran] = 4;
    else i--;
  }

  while (1) {

    CYAN

    system("clear");

    printf("|");
    for( i = 0; i < 20; i++ ) {
      if( i <10 ) printf("0");
      printf("%i|", i );
    }

    printf("\n");

    WHITE
    printf("|");
    for( i = 0; i < 20; i++ ) {
      if( esp[i] == 0 ) printf("🀄|"); 
      else if ( vet[i] == 1 ) printf("🥵|");
      else if ( vet[i] == 2 ) printf("🤢|");
      else if ( vet[i] == 3 ) printf("🥶|");
      else if ( vet[i] == 4 ) printf("😎|");
    }

    cont = 0;
    for( i = 0; i < 20; i++ ) {
      if ( vet[i] == 4 && esp[i] == 1) {
        cont++;
      }
    }
    if ( cont == 2 ) break;

    printf("\n👉 ");
    scanf("%i", &resp );

    esp[resp] = 1;


  }
  return 0;

}