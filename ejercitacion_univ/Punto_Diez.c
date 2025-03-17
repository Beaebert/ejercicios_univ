#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Punto 10 de la tarea
int main(void) {
    int CantVehiculos = 0;
    float PrecioVehiculo = 0;
    float PlusPorVenta = 0;
    float PlusPorPrecio = 0;
    float Sueldo = 500;

    printf("Ingrese el precio del vehiculo\n");
    scanf("%i", &PrecioVehiculo);
    printf("Ingrese el cuantos vehiculos de este valor se vendieron\n");
    scanf("%i", &CantVehiculos);

    PlusPorVenta = CantVehiculos * 50;
    PlusPorPrecio = PrecioVehiculo * 0.10;

    float SueldoFinal = Sueldo + PlusPorVenta + PlusPorPrecio;
    printf("El sueldo del Vendedor es %i \n", SueldoFinal);

    return 0;
}