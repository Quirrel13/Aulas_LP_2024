#include <stdio.h>
#include <math.h>

int main() {

  int m, d;

  printf("Digite o dia e o mês: ");
  scanf("%i %i", &d, &m);

  if ( m == 1 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Jan", d );
    }
  }

  else if ( m == 2 ) {

    if ( d == 0 || d > 29 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Fev", d );
    }
  }

  else if ( m == 3 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Mar", d );
    }
  }

  else if ( m == 4 ) {

    if ( d == 0 || d > 30 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Abr", d );
    }
  }

  else if ( m == 5 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Mai", d );
    }
  }

  else if ( m == 6 ) {

    if ( d == 0 || d > 30 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Jun", d );
    }
  }

  else if ( m == 7 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Jul", d );
    }
  }

  else if ( m == 8 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Ago", d );
    }
  }

  else if ( m == 9 ) {

    if ( d == 0 || d > 30 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Set", d );
    }
  }

  else if ( m == 10 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Out", d );
    }
  }

  else if ( m == 11 ) {

    if ( d == 0 || d > 30 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Nov", d );
    }
  }

  else if ( m == 12 ) {

    if ( d == 0 || d > 31 ) {
      printf("Dia inválido!");
    }
    else {
      printf("Data: %i/Dez", d );
    }
  }

  else {

  printf("Mês inválido!");

  }

  return 0;

  } 