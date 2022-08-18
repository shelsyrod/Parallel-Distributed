/********************************************************
 * Escribe un programa en C para mostrar el patrón como
 * triángulo rectángulo usando un asterisco. La cantidad
 * de líneas del triangulo es ingresada por consola por
 * el usuario, y el valor máximo de líneas es de 14.
 *******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int lineas;
	printf("Ingrese la cantidad de lineas: ");
    	scanf("%d", &lineas);
    	for (int i = 0; i < lineas; i++){
        	for (int j = 0; j < i+1; j++){
            		printf("*");
        	}
        	printf("\n");
    	}
    	return 0;
}
