#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
int i, j=0,x;
char humedad[50];
int cont=1;
char tempamb[50];
int cont2=0;
char puerta[]= "7EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607B7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F3957730188";
int main () {
    for(i=0;i<=24;i++){
        humedad[i]=puerta[j];
        if (i==19){
            humedad[i]=',';
            j--;
        }
        if(i==22){
            humedad[i]=',';
            j--;
        }
        j++;
    }

    if(i==25){
        for(x=0;x<=25;x++){
        tempamb[x]=puerta[j];
        if (x==19){
            tempamb[x]=',';
            j--;
        }
        if(x==23){
            tempamb[x]=',';
            j--;
        }
        j++;
    }
    }
    char delimitador[] = ",";
    char *token = strtok(humedad, delimitador);
    if(token != NULL){
        while(token != NULL){
            if(cont2==1){
                printf("Temperatura ambiente: %s\n", token);
            }
            token = strtok(NULL, delimitador);
            cont2++;
        }
    }
    char *token1 = strtok(tempamb, delimitador);
    if(token1 != NULL){
        while(token1 != NULL){
            if(cont2==4){
                printf("Humedad: %s\n", token1);
            }
            token1 = strtok(NULL, delimitador);
            cont2++;
        }
    }

	return 0;
}
