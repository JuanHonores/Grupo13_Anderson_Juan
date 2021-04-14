#include <iostream>
#include <string>
using namespace std;
int i;
int g=0;
char j;
int h;
string final;
int x=0;
int contador=0;
int main()
{
    string palabra;
    cout<<"Ingrese la palabra con numeros entre 0-9"<<"\n";
    cin>>palabra;
    for(i=0;i<=50;i=i+2){
        g=palabra[i]-49;
        x=i+1;
        j=palabra[x];
         for(h=0;h<=g;h++){
           final=final+j;
           contador++;
        }
    }
    std::cout<<"Su palabra sin numeros es la siguiente: "<<final<<"\n";
    return 0;
}
