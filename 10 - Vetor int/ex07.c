#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 4

int main() {

  int vet[TAM], med = 0;
  srand(time(NULL));

  printf("--------------------\n");

  for ( int i = 0; i < TAM; i++) {
    vet[i] = rand()%90 + 10;
    printf(" %i", vet[i]);
    med = med + vet[i];
  }
  med = med / TAM;

  printf("\n--------------------\n");

  printf("- Média = %i", med);

  return 0;

}