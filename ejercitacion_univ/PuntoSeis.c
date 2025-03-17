#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 6 de la tarea
int main(void) {
    int Lado1, Lado2 = 0;

    printf("Ingrese el lado mas largo del rectangulo\n");
    scanf("%i", &Lado1);
    printf("Ingrese el lado mas corto del rectangulo\n");
    scanf("%i", &Lado2);

    float DiagonalP = sqrt(Lado1^2 + Lado2^2);
    int Perimetro = Lado1 * 2 + Lado2 * 2;
    int Superficie = Lado1 * Lado2;
    printf("El Diagonal del rectangulo es %i \n", DiagonalP);
    printf("El Perimetro del rectangulo es %i \n", Perimetro);
    printf("El Area del rectangulo es %i \n", Superficie);
    return 0;
}