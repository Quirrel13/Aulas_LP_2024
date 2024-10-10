#include <stdio.h>
#include <math.h>

int main() {

  char r;

  printf("Possui pelagem curta? ");
  __fpurge(stdin);
  scanf("%c", &r );

  if ( r == 's' || r == 'S' ) {
  
    //Dálmata, Bulldog Inglês, Bull Terrier
    
    printf("Possui altura igual a 80 cm? ");
    __fpurge(stdin);
    scanf("%c", &r );

    if ( r == 's' || r == 'S' ) {

      printf("Dálmata!");

    }

    else if ( r == 'n' || r == 'N' ) {

      printf("Possui peso igual a 30kg? ");
      __fpurge(stdin);
      scanf("%c", &r );

      if ( r == 's' || r == 'S' ) {

        printf("Bulldog Inglês!");

      }

      else if ( r == 'n' || r == 'N' ) {

        printf("Bull Terrier!");

      }
    }
  }

  else if ( r == 'n' || r == 'N' ){

    printf("Possui pelagem longa? ");
    __fpurge(stdin);
    scanf("%c", &r );

    if ( r == 's' || r == 'S' ) {
    
      //São Bernardo, Chow Chow, Pequinês
      
      printf("Possui altura igual a 100 cm? ");
      __fpurge(stdin);
      scanf("%c", &r );

      if ( r == 's' || r == 'S' ) {

        printf("São Bernardo!");

      }

      else if ( r == 'n' || r == 'N' ) {

        printf("Possui altura igual a 50 cm? ");
        __fpurge(stdin);
        scanf("%c", &r );

        if ( r == 's' || r == 'S' ) {

          printf("Chow Chow!");

        }

        else if ( r == 'n' || r == 'N' ) {

          printf("Pequinês!");

        }
      }
    }

    else {
    
      //Pastor Alemão, Labrador, Cocker Inglês
      
      printf("Possui altura igual a 80 cm? ");
      __fpurge(stdin);
      scanf("%c", &r );

      if ( r == 's' || r == 'S' ) {

        printf("Pastor Alemão!");

      }

      else if ( r == 'n' || r == 'N' ) {

        printf("Possui peso igual a 50kg? ");
        __fpurge(stdin);
        scanf("%c", &r );

        if ( r == 's' || r == 'S' ) {

          printf("Labrador!");

        }

        else if ( r == 'n' || r == 'N' ) {

          printf("Cocker Inglês!");

        }
      }
    }
  }

  return 0;

}