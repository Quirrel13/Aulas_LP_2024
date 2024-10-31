#include<stdio.h>
#include "../Biblio/q13.h"
void exibir(int **jogo, int cursor, int coluna){

    clearr();

    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");

    printf("🏮");

    for(int i = 0; i<3; i++){

        if(cursor == i) printf("    👇    🏮");
        else printf("          🏮");

    }

    printf("\n");

    for(int i = 0; i<3; i++){
        printf("  ");
        for(int i2 = 0; i2 < 3; i2++){
            if(jogo[i][i2]==0) printf("    🀄      ");
            else if(jogo[i][i2]==1) printf("    🟥      ");
            else if(jogo[i][i2]==2) printf("  🟪🟪🟪    ");
            else if(jogo[i][i2]==3) printf("🟦🟦🟦🟦🟦  ");
        }
        printf("\n");
    }

    printf("🎍🎴🎴🎴🎴🎴🎍🎴🎴🎴🎴🎴🎍🎴🎴🎴🎴🎴🎍\n  ");

    for(int i = 0; i<3; i++){

        if(coluna == i) printf("    📍      ");
        else printf("            ");

    }

}