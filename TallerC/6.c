/********************************************************
 * Escribe un programa que imprima una matriz de “1”, de
 * tamaño NxN. El tamaño es indicado por el usuario y debe
 * ser siempre menor que 8.
 *******************************************************/

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
        	int matriz[n][n];
        	//Se llena la matriz con 1
        	for (i = 0; i < n; i++) {
            		for (j = 0; j < n; j++) {
                		matriz[i][j] = 1;
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
