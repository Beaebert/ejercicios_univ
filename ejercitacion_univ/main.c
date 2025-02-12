#include <stdio.h>

int main(void) {
    int Num1 = 0;
    int Num2 = 0;
    printf("Ingrese el primer numero entero");
    scanf(Num1);
    printf("Ingrese el segundo numero entero");
    scanf(Num2);
    int Sum = Num1 + Num2;
    printf("La Suma es %d\n", &Sum);
    return 0;
}
