#include<stdio.h>
#include<stdlib.h>
#include "biblio.h"

int main(){

    int cursor=0, coluna=-1, **jogo, tecla, jojo=0, maior1, maior2;

    jogo = malloc(3*sizeof(int*));
    for(int i = 0; i<3; i++){
        jogo[i] = malloc(3*sizeof(int));
        for( int i2 = 0; i2<3; i2++) jogo[i][i2]=0;
    }

    jogo[0][0]=1;
    jogo[1][0]=2;
    jogo[2][0]=3;

    while(1){

        exibir(jogo, cursor, coluna);

        if(jogo[0][1]==1&&jogo[1][1]==2&&jogo[2][1]==3) break;
        if(jogo[0][2]==1&&jogo[1][2]==2&&jogo[2][2]==3) break;

        tecla = getTecla();

        if( tecla == DIREITA && cursor != 2 ) cursor++;
        else if( tecla == ESQUERDA && cursor != 0 ) cursor--;
        else if( tecla == ENTER){
            if(jojo==0){
                coluna = cursor;
                jojo = 1;
            }
            else{

                if(coluna!=cursor){
                    maior1=-1;
                    maior2=-1;

                    //encontra onde estão as peças mais altas
                    for(int i = 0; i<3; i++){
                        if( jogo[i][coluna] != 0 ){
                            maior1 = i;
                            break;
                        }
                    }

                    for(int i = 0; i<3; i++){
                        if( jogo[i][cursor] != 0 ){
                            maior2 = i;
                            break;
                        }
                    }
                    
                    //verifica se é uma jogada válida 
                    if( maior1 != -1 ){

                        //verifica se já existe algo na segunda posição
                        if( maior2 != -1 ){
                            if( jogo[maior2][cursor] > jogo[maior1][coluna] ){
                                jogo[maior2-1][cursor] = jogo[maior1][coluna];
                                jogo[maior1][coluna] = 0;
                            }
                        }
                        else {
                            jogo[2][cursor] = jogo[maior1][coluna];
                            jogo[maior1][coluna] = 0;
                        }
                    }
                }

                jojo = 0;
                coluna = -1;
                
            }
        }
    }

    printf("\n        🎐🎐🎐Parabéns!!!🎐🎐🎐");

    return 0;
}