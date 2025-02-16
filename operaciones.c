#include <stdio.h>
#include <stdint.h>


int main(void) {
    fflush(stdin);
    int Num1 = 0;
    int Num2 = 0;

    printf("El primer numero es %i \n", &Num1);
    printf("Ingrese el primer numero entero \n");
    scanf("%i", &Num1);
    printf("El primer numero es %i \n", &Num1);
    printf("Ingrese el segundo numero entero\n");
    scanf("%i", &Num2);
    printf("El segundo numero es %i\n", &Num2);

    int Sum = Num1 + Num2;
    printf("La Suma es %i \n", &Sum);
    return 0;
}
