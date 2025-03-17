#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 7 de la tarea
int main(void) {
    int Num1, Num2 = 0;

    printf("Ingrese los dos valores para operar\n");
    scanf("%i", &Num1);
    scanf("%i", &Num2);

    int Suma = Num1 + Num2;
    float Resta = Num1 - Num2;
    int Multiplicacion = Num1 * Num2;
    printf("El resultado de la suma de los valores es %i \n", Suma);
    printf("El resultado de la resta del primer valor por el segundo es %i \n", Resta);
    printf("El resultado de la multiplicacion del primer valor por el segundo es %i \n", Multiplicacion);
    return 0;
}
