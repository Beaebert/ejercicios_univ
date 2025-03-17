#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 9 de la tarea
int main(void) {
    int HorasTrabajadas = 0;
    float PrecioHora = 10;

    printf("Ingrese la cantidad de horas trabajadas del operario\n");
    scanf("%i", &HorasTrabajadas);

    float Sueldo = PrecioHora * HorasTrabajadas;
    printf("El sueldo del Operario es %i \n", Sueldo);

    return 0;
}
