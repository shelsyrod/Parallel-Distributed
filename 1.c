/*******************************************************
 * Escribe un programa en C que acepte dos enteros
 * del usuario y calcule el producto de los dos enteros.
 *******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int n1, n2;
	printf("Ingrese el primer numero: ");
	scanf("%d", &n1);
	printf("Ingrese el segundo numero: ");
    	scanf("%d", &n2);
	printf("El producto de los dos numeros es: %d", n1*n2);
	printf("\n");
	return 0;
}
