#include <stdio.h>

int main () {

    int a;

    printf("Digite uma idade: ");
    scanf("%i", &a);


    if ( a <= 11) {

        printf("Criança");

    }


    else if ( a >= 12 && a <= 17 ) {

        printf("Adolescente");

    }

    else if ( a >= 18 && a <= 59 ) {

        printf("Adulto");

    }

    else if ( a >= 60 ) {

        printf("Idoso");

    }


    return 0;

}