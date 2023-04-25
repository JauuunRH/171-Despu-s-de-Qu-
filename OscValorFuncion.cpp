#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int menu(){
int op;

printf ("1. Conversion de pulgadas a CM\n");
printf("2. Conversion de millas a KM\n");
printf("3. Conversion de Libras a KG\n");
printf ("4. Salir\n");

scanf ("%i",&op);
return op;
}

void PulgCM(){
float a,b;
printf("Introduce las pulgadas:");
scanf("%f",&b);
a=b*2.54;
printf ("La conversion es: %f",a);
}

void MillKM(){
float c,d;
printf("Introduce las pulgadas:\n");
scanf("%f",&d);
c=d*1.6;
printf ("La conversion es: %f",c);
}

void LibrKG(){
float e,f;
printf("Introduce las pulgadas:");
scanf("%f",&f);
e=f*0.453;
printf ("La conversion es: %f",e);

}

int main(){
int op;
do{
op=menu();
switch (op)
{
case 1:
PulgCM();
break;
case 2:
MillKM();
break;
case 3:
LibrKG();

default:
printf("Adioooos");
}
}while(op!=4);
system ("pause");
}

