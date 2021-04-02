#include <stdio.h>
int main () {
	float fa, ce;
	int s;							//declaracion de variables
	printf("Numero de sonidos emitidos por la chicharra\n"); // ingreso de cantidad sonidos emitidos por la chicharra
	scanf("%d",&s);
	fa= s/(4+40);						// calculo de Fahrenheit
	ce=(fa-32)/1.8;						//Tranformacion de Fahrenheit a Celcius
	printf("La temperatura medida son %f° Celcius\n",ce);
	return 0;
}
