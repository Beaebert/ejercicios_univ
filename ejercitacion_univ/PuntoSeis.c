#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DIA

// Punto 6 de la tarea
int main(void) {
    int Lado1, Lado2 = 0;

    printf("Ingrese el primer lado del triangulo rectangulo\n");
    scanf("%i", &Lado1);
    printf("Ingrese el segundo lado del triangulo rectangulo\n");
    scanf("%i", &Lado2);

    int Hipotenusa = Lado1^2 + Lado2^2;
    int Perimetro = Lado1 + Lado2 + Hipotenusa;
    int Superficie = (Lado1 * Lado2) /2;
    printf("El perimetro del triangulo es %i \n", Hipotenusa);
    printf("El perimetro del triangulo es %i \n", Perimetro);
    printf("El perimetro del triangulo es %i \n", Superficie);
    return 0;
}