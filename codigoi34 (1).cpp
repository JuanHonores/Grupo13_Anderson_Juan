#include <stdio.h>
#include <time.h>
#include <iostream>
float Promtem=0;			//declaracion de variable global
int main () {
	int i=1,hmin,hmax;
	float sumatem=0, com,Max,Min;
	static float tem[23];		//declaracion de variables
	srand(time (NULL));
	for(i=0;i<24;i++){		//ciclo para obtenr las 24 temperaturas
		tem[i]=-89.2+drand48()*(56,7+1-(-89.2));// generar num random entre temperaturas max y min registradas
		sumatem=sumatem+tem[i];
		if (i==23){		//evaluacion para  el calcular el promedio
			Promtem=sumatem/i;
			printf("El promedio es %f° Celcius\n",Promtem);
			for  (i=0,com= tem[i];i<24;i++){	//Bucle para encontrar el min y max , junto con su hora
				com= tem [i];
				if (i==0){
					Min=com;
					Max=com;
				}
				if  (com<=Min){
					Min=com;
					hmin=i;
				}
				if  (com>=Max){
					Max=com;
					hmax=i;
				}
			}
			printf ("La temperatura maxima fue %f° Celcius a las %d horas\n", Max,hmax);
			printf ("La temperatura minima fue %f° Celcius a las %d horas\n", Min,hmin);
		}
	}

	return 0;
}

