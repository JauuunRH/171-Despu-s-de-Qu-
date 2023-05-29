#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

struct Libreria{
char Tit [30],
Aut [30],
Edit [30];

float Price;

int Year;

}Lib[10];

int REG (int);
void SHOW (int);

int menu(){
system ("cls");

int op;

cout<<"같같같MENU같같같"<<endl;
cout<<"1. Registro del libro\n";
cout<<"2. Listado de existencia\n";
cout<<"3.Salir\n";

cout<<"Escoge una opcion  ";
cin>>op;
return op;
}

int main(){

int x=0, opc, y;

do{
opc=menu();
switch (opc){

case1: x=registro(x);
break;


case2:
y= x-1;
if(y<0){

cout<<"\n No hay Requisitos";
system("pause>null");
}
else{
mostrar(y);
}
break;
default: cout<<"Byeeee";
system("pause<null");
}
}while(opc!=3);
}

int Registro (int b);{
system ("cls");

cout<<"Titulo del libro:  "; fflush(stdin);
gets(lib[b].Tit);

cout<<"\nAutor del libro:  "; fflush(stdin);
gets(lib[b].Aut);

cout<<"\nEditorial del libro:  "; fflush(stdin);
gets(lib[b].Edit);


cout<<"\nEl anio del libro es:  ";
cin>>lib[b].Year;

cout<<"\nPrecio del libro es:  ";
cin>>lib[b].Price;

cout<<"\nRegistro Completo";
b++;
return b;
}

void mostrar (int c){
system ("cls");
for (int i=0; i<=c; i++)
{
cout<<"\n"<<lib[i].Tit<<endl;
cout<<"\n"<<lib[i].Aut<<endl;
cout<<"\n"<<lib[i].Edit<<endl;
cout<<"\n"<<lib[i].Year<<endl;
cout<<"\n"<<lib[i].Price<<endl;
}
cout<<"\nSon todos los registros";
system ("pause>null");
}
