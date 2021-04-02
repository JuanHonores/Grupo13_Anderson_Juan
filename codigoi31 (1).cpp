#include <stdio.h>
#include <stdlib.h>
int main () {
	int cla, cat, ant , res=0;
	float sal;
	printf("Introduzca la clave del trabajador:\n");
	scanf("%d", &cla);
	printf("Introduzca la categoria del empleado:\n");
	scanf("%d",&cat);
	printf("Introduzca la antiguedad del trabajdor:\n");
	scanf("%d", &ant);
	printf("Introduzca el salario del trabajador:\n");
	scanf("%f", &sal);					//ingreso de  caracteristicar del posible empleado
	if ((cat==3)||(cat==4) ){			//comparador de requisitos y caracteristicas
		if (ant>=5){
			res = 1;
			printf("el empleado si reune las condiciones\n");
		}
	}

	if ((cat==2)&&(ant>=7)){
		res = 1;
		printf("el empleado si reune las condiciones\n");
	}
	if (res==0)  {
		res=0;
		printf("el empleado no reune las condiciones\n");

	}
	return 0;
}
