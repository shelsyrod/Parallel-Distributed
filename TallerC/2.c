/*************************************************
 * Escribe un programa en C para convertir los
 * dias especificados en años, semanas y días.
 * Nota: Ignore el año bisiesto.
 ***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int dias, semanas, anios;
    	printf("Ingrese el numero de dias: ");
    	scanf("%d", &dias);
    	anios = dias/365;
    	dias = dias%365;
    	semanas = dias/7;
    	dias = dias%7;
    	printf("El numero de años es: %d", anios);
	printf("\n");
    	printf("El numero de semanas es: %d", semanas);
	printf("\n");
    	printf("El numero de dias es: %d", dias);
	printf("\n");
	return 0;
}
