#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1, Num2, Result;

    printf("Ingrese el primer numero entero \n");
    scanf("%i", &Num1);
    printf("El primer numero es %i \n", Num1);
    printf("Ingrese el segundo numero entero\n");
    scanf("%i", &Num2);
    printf("El segundo numero es %i\n", Num2);
    Result = Num1 + Num2;
    printf("La Suma es %i \n", Result);
    printf ("El lugar en memoria es %i\n", &Result);
    return 0;
}
