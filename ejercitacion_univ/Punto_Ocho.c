#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 8 de la tarea
int main(void) {
    int HorasTrabajadas = 0;
    float PrecioHora = 0;

    printf("Ingrese el valor por hora del operario\n");
    scanf("%i", &PrecioHora);
    scanf("%i", &HorasTrabajadas);

    float Sueldo = PrecioHora * HorasTrabajadas;
    printf("El sueldo del Operario es %i \n", Sueldo);

    return 0;
}
