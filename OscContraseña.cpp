#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void posicion (int i, int j)

{
	COORD coord;
	coord.X=i;
	coord.Y=j;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

int main(){
char pwd[]="peP1t0",resp[25],car;
int cont=0,x,i,w;
while(cont<3)
{
system("cls");
posicion(30,6);
cout<<"Bienvenido";
posicion(11,15);
cout<<"Ingresar Contraena";
x=35; i=0;
while(w!=13)
posicion(x,15);fflush(stdin);w=getch();
if(w!=13)
{
car=char(w);
resp[i]=car;
x++;
}
else{cout ++;}
}
else{cont ++;}
}
if(strp(pwd,resp)==0)
{
posicion(30,22);
cout<<"Contrasenia Aceptada";
cont=3;
}
else{
posicion(30,22);
cout<<"Error, intentar nuevamente";
}
system ("pause>null");
}
}
