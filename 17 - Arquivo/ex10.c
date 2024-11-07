#include "../Biblio/q13.h"
#include <string.h>

int main(){

    FILE *fp;
    char c, *nome, *nome2, *lin;
    int tam, flag = 0;

    fp = fopen("alunos.txt", "r");

    printf("Digite um nome: ");
    nome = scans();

    while(){

        tam = 1;
        nome2 = malloc(tam*sizeof(char));

        do{
            c = fgetc(fp);

            if(c != ' ') {
                str[tam-1] = c;
                tam++;
                nome2 = realloc(str, tam * sizeof(char));
            }
        } while( c != ' ');

        nome2[tam-1] = '\0';

        if( strcomp( nome, nome2 ) == 0 ){
            flag = 1;

            printf("%s ", nome2 );

            do{
                
                c = fgetc(fp);
                printf("%c", c);

            } while( c != '\n' );
        }

    }

    if( flag == 0 ) printf("Não encontrado!");

    fclose(fp);

    return 0;

}