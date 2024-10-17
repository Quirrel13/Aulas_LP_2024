#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "../Biblio/cores.h"

int main() {

    int mat[5][5], big=0;
	srand(time(NULL));

    WHITE
	printf("Matriz aleatória: \n\n");
	for(int i=0; i<5; i++){
		for(int i2 = 0; i2<5; i2++) {
			mat[i][i2] = rand()%41 + 10;
			printf("%i ", mat[i][i2]);
		}
		if(mat[i][i]>big) big = mat[i][i];
		printf("\n");
	}

	printf("\nMatriz modificada: \n\n");

	for(int i=0; i<5; i++){
		for(int i2 = 0; i2<5; i2++){
			if( i == i2 ){
				if( mat [i][i2] == big ) GREEN
				else CYAN
			}
			printf("%i ", mat[i][i2]);
			WHITE
		}
		printf("\n");
	}


	
	return 0;
}