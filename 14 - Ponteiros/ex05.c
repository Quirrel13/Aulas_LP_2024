#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int tam;
    char *p1, *p2, *conc;

    printf("Tamanho: ");
    scanf("%i", &tam );

    p1 = malloc( tam * sizeof(char));
    p2 = malloc( tam * sizeof(char));
    conc = malloc( ( tam * 2 + 1) * sizeof(char));

    printf("Digite duas palavras:\n");
    __fpurge(stdin);
    gets(p1);
    __fpurge(stdin);
    gets(p2);

    strcat(conc, p1);
    strcat(conc, "-");
    strcat(conc, p2);

    printf("Concatenado: %s", conc );
	
	return 0;
}