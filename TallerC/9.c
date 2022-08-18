/*********************************************************
 * Escribe un programa que muestre dos matrices de números
 * aleatorios, entre 0 y 9, de tamaño NxN. El tamaño es
 * indicado por el usuario y debe ser siempre menor que 8.
 * Finalmente, se presenta la resta de las dos matrices.
 *********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    	int n, i, j;
    	printf("Ingrese el tamaño de la matriz: ");
    	scanf("%d", &n);
    	if (n < 8) {
        	//Se crea la matriz de tamaño nxn
		int matriz1[n][n];
        	int matriz2[n][n];
        	//Se llena la matriz con números aleatorios entre 0 y 9
        	srand(time(NULL));
        	for (i = 0; i < n; i++) {
            		for (j = 0; j < n; j++){
                		matriz1[i][j] = rand() % 10;
                		matriz2[i][j] = rand() % 10;
            		}
        	}
        	//Se imprime la matriz
        	for (i = 0; i < n; i++){
            		for (j = 0; j < n; j++){
                		printf("%d ", matriz1[i][j]);
            		}
            		printf("\n");
        	}
        	printf("\n");
        	for (i = 0; i < n; i++){
            		for (j = 0; j < n; j++){
                		printf("%d ", matriz2[i][j]);
            		}
            		printf("\n");
        	}
        	printf("\n");
        	//Se restan las dos matrices
        	for (i = 0; i < n; i++) {
            		for (j = 0; j < n; j++) {
                		printf("%d ", matriz1[i][j] - matriz2[i][j]);
            		}
            		printf("\n");
        	}
    	} else {
        	printf("El tamaño de la matriz debe ser menor a 8\n");
    	}
    	return 0;
}

