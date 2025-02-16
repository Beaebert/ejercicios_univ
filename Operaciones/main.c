#include <stdio.h>
#include <stdint.h>

int main(void) {
    int Num1 = 0;
    int Num2 = 0;

    printf("El primer numero es %d \n", Num1);
    printf("Ingrese el primer numero entero \n");
    scanf("%d", &Num1);
    printf("El primer numero es %d \n", Num1);
    printf("Ingrese el segundo numero entero\n");
    scanf("%d", &Num2);
    printf("El segundo numero es %d\n", Num2);

    int Sum = Num1 + Num2;
    printf("La Suma es %d \n", Sum);
    return 0;
}
