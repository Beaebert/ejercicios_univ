#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 1 de la tarea
int main(void) {
    int Num1 = 0;
    int Num2 = 0;

    printf("Ingrese el primer numero entero \n");
    scanf("%i", &Num1);
    printf("Ingrese el segundo numero entero\n");
    scanf("%i", &Num2);

    int Sum = Num1 + Num2;
    printf("La Suma es %i \n", Sum);

    return 0;
}
