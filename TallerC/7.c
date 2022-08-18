/*********************************************************
 * Escribe un programa que imprima una matriz de números
 * aleatorios enteros, entre 0 y 9, de de tamaño NxN. El
 * tamaño es indicado por el usuario y debe ser siempre menor que 8.
 *********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    	int n, i, j;
    	printf("Ingrese el tamaño de la matriz: ");
    	scanf("%d", &n);
    	if (n < 8) {
        	//Se crea la matriz de tamaño nxn
        	int matriz[n][n];
        	//Se llena la matriz con números aleatorios entre 0 y 9
        	srand(time(NULL));
        	for (i = 0; i < n; i++) {
            		for (j = 0; j < n; j++){
                		matriz[i][j] = rand() % 10;
            		}
        	}
        	//Se imprime la matriz
        	for (i = 0; i < n; i++){
            		for (j = 0; j < n; j++) {
				printf("%d ", matriz[i][j]);
            		}
            		printf("\n");
        	}
    	} else {
        	printf("El tamaño de la matriz debe ser menor a 8\n");
    	}
    	return 0;
}


