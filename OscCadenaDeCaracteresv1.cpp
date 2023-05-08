#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
char nombre[20], resp[20],frase[]="BENITO JUAREZ";

cout<<"Hola, Escribe tu nombre: ";fflush(stdin);
gets (nombre);

system("cls");
cout<<"Muy Bien  "<< nombre<<"  Responde lo siguiente: ";
cout<<"\n A quien se le conoce como el Benemerito de las americas?: ";
fflush(stdin); gets(resp);
strupr(resp);

if(strcmp(resp,frase)==0)
{
cout<<"\nTu respuest a es correcta";
}
else
{cout<<"\nTe recomiendo leer mas historia...";}
system("pause>null");
}

