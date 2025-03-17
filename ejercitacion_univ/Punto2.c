#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 2 de la tarea
int main(void) {
    int Num1 = 0;
    int Num2 = 0;
    int Num3 = 0;

    printf("Ingrese el primer numero entero \n");
    scanf("%i", &Num1);
    printf("Ingrese el segundo numero entero\n");
    scanf("%i", &Num2);
    printf("Ingrese el tercer numero entero\n");
    scanf("%i", &Num3);

    int Sum = Num1 + Num2;
    int SumaTotal = Sum + Num3;
    printf("La Suma es %i \n", SumaTotal);

    return 0;
}