/*************************************************
 * Escribe un programa en C para calcular
 * la distancia entre los dos puntos.
 ***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distancia;
    printf("Ingrese la coordenada x del primer punto: ");
    scanf("%f", &x1);
    printf("Ingrese la coordenada y del primer punto: ");
    scanf("%f", &y1);
    printf("Ingrese la coordenada x del segundo punto: ");
    scanf("%f", &x2);
    printf("Ingrese la coordenada y del segundo punto: ");
    scanf("%f", &y2);
    distancia = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("La distancia entre los dos puntos es: %f", distancia);
    return 0;
}
