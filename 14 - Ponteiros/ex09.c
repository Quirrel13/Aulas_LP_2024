#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int tam, comp1x2, comp1x3, comp2x3;
    char *p1, *p2, *p3;

    printf("Tamanho: ");
    scanf("%i", &tam );

    p1 = malloc( tam * sizeof(char));
    p2 = malloc( tam * sizeof(char));
    p3 = malloc( tam * sizeof(char));

    printf("Digite três palavras:\n");
    __fpurge(stdin);
    gets(p1);
    __fpurge(stdin);
    gets(p2);
    __fpurge(stdin);
    gets(p3);

    comp1x2 = strcmp(p1,p2);
    comp1x3 = strcmp(p1,p3);
    comp2x3 = strcmp(p2,p3);

    if( comp1x2 < 0 && comp1x3 < 0 && comp2x3 < 0 ) printf("Ordem alfabética %s - %s - %s", p1, p2, p3);
    if( comp1x2 < 0 && comp1x3 < 0 && comp2x3 > 0 ) printf("Ordem alfabética %s - %s - %s", p1, p3, p2);
    if( comp1x2 > 0 && comp1x3 < 0 && comp2x3 < 0 ) printf("Ordem alfabética %s - %s - %s", p2, p1, p3);
    if( comp1x2 > 0 && comp1x3 > 0 && comp2x3 < 0 ) printf("Ordem alfabética %s - %s - %s", p2, p3, p1);
    if( comp1x2 < 0 && comp1x3 > 0 && comp2x3 > 0 ) printf("Ordem alfabética %s - %s - %s", p3, p1, p2);
    if( comp1x2 > 0 && comp1x3 > 0 && comp2x3 > 0 ) printf("Ordem alfabética %s - %s - %s", p3, p2, p1);
	
	return 0;
}