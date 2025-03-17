#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 4 de la tarea
int main(void) {
    int Lado1, Lado2, Lado3 = 0;

    printf("Ingrese el primer lado del triangulo \n");
    scanf("%i", &Lado1);
    printf("Ingrese el segundo lado del triangulo\n");
    scanf("%i", &Lado2);
    printf("Ingrese el tercer lado del triangulo\n");
    scanf("%i", &Lado3);

    int Perimetro = Lado1 + Lado2 + Lado3;
    printf("El perimetro del triangulo es %i \n", Perimetro);

    return 0;
}