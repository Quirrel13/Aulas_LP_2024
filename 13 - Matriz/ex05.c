#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int mat[5][5];
	srand(time(NULL));

	printf("Matriz aleatória: \n\n");
	for(int i=0; i<5; i++){
		for(int i2 = 0; i2<5; i2++) {
			mat[i][i2] = rand()%41 + 10;
			printf("%i ", mat[i][i2]);
		}
		printf("\n");
	}

    printf("\nMatriz transporta: \n\n");
	for(int i=0; i<5; i++){
		for(int i2 = 0; i2<5; i2++) {
			printf("%i ", mat[i2][i]);
		}
		printf("\n");
	}

}