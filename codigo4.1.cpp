#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	char cad [50];
	char car[10];
	int cont=0,i,comp,largo;
	printf("Ingersar una cadena de caracteres:\n");
	scanf("%50s",cad);
	printf("Ingresar caracter a buscar en la cadena:\n");
	scanf("%10s",car);
	largo=strlen(cad);
	for (i=0;i<largo;i++ ){
		comp=cad[i];
		if (comp==car[0]){
			cont=cont+1;
		}
	} 
	if (cont==1){
		printf("El caracter se encuentra en la cadena %d vez\n",cont);
	}
	else 
		printf("El caracter se encuentra %d veces\n ",cont);
	return 0;

}
