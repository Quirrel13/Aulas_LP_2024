#include <stdio.h>

int main () {

    int saldo, valor, op;

    saldo = 0;

    op = 5;

    while ( op != 0 ) {

        printf("\n---------------");
        printf("\n- Saldo: R$%i -", saldo );
        printf("\n---------------");
        printf("\n- 1) Saque    -");
        printf("\n- 2) Depósito -");
        printf("\n- 0) Sair     -");
        printf("\n---------------");
        printf("\n> ");
        scanf("%i", &op );

        if ( op == 1 ) {

            printf("\nDigite o valor do saque: ");
            scanf("%i", &valor );

            saldo = saldo - valor;

        }

        else if ( op == 2 ) {

            printf("\nDigite o valor do depósito: ");
            scanf("%i", &valor );

            saldo = saldo + valor;

        }

        else if (op != 0 ) {

            printf("\nOperação inválida!");
        }

    }

    return 0;

}