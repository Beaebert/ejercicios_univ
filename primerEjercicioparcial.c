
#include<stdio.h>

int main() {
	float cantceros;
	float cantinegativos;
	float cantpositivos;
	int n1;
	int n2;
	float promnegativos;
	float prompositivos;
	char sal;
	float valortotalneg;
	float valortotalposit;

    printf("Ingrese un numero entero\n");
	scanf("%i", &n1);
	if (n1>12) {
		printf("VALOR EXCEDIDO\n");
	} else {
		if (n1<=0) {
			printf("CANTIDAD INVALIDA\n");
		} else {
			printf("Para dejar de ingresar numeros, escriba S. Sino escriba C\n");
			scanf("%c", &sal);
			while (sal!= "S") {
				printf("Ingrese un numero:\n");
				scanf("%i", &n2);
				if (n2 > 0) {
                    valortotalposit = valortotalposit + n2;
                    cantpositivos = cantpositivos + 1;
                }
				if (n2<0) {
                    valortotalneg = valortotalneg + n2;
                    cantinegativos = cantinegativos + 1;
                }
				if (n2 == 0) {
					cantceros = cantceros+1;
				}
				printf("Para dejar de ingresar numeros, escriba S. Sino escriba C\n");
				scanf("%c", sal);
			}
			promnegativos = valortotalneg/cantinegativos;
			prompositivos = valortotalposit/cantpositivos;
			printf("La cantidad de ceros fueron%f\n", cantceros);
			printf("El promedio de numeros positivos es%f\n", prompositivos);
			printf("El promedio de numeros negativos es%f\n", promnegativos);
		}
	}
	return 0;
}

