/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

int main() {
	float diagonalp;
	float ladoa;
	float ladob;
	float perimetro;
	printf("Ingrese el lado más largo del rectangulo\n");
	scanf("%f", &ladoa);
	printf("Ahora ingrese el lado más corto del rectangulo\n");
	scanf("%f", &ladob);
	diagonalp = sqrtf(pow(ladoa, 2)+pow(ladob, 2));
	perimetro = ladoa*2+ladob*2;
	printf("La Diagonal del rectangulo es%f\n", diagonalp);
	printf("El Perimetro del rectangulo es%f\n", perimetro);
	return 0;
}

