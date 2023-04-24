#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main (){
float r, B1, B2, B3, B4;
int op;

printf:("Ingresa el color de la Banda 1");
printf("\n 0. Negro \n 1. Cafe \n 2. Rojo");
printf("\n 3. Narajana \n 4. Amarillo \n 5. Verde");
printf ("\n 6. Azul \n 7. Violeta \n 8. Gris \n 9. Blanco\n");
printf("Color: ");
scanf("%i",&op);
switch(op)
{
case 0: B1=0; break;
case 1: B1=10; break;
case 2: B1=20; break;
case 3: B1=30; break;
case 4: B1=40; break;
case 5: B1=50; break;
case 6: B1=60; break;
case 7: B1=70; break;
case 8: B1=80; break;
default: B1=90; break;
}
printf("Ingresa el color de la banda 2:");
scanf("%i", &op);
switch(op)
{
case 0: B2=0; break;
case 1: B2=1; break;
case 2: B2=2; break;
case 3: B2=3; break;
case 4: B2=4; break;
case 5: B2=5; break;
case 6: B2=6; break;
case 7: B2=7; break;
case 8: B2=8; break;
default: B2=9; break;
}
printf("Ingresa el color de la banda 3:");
scanf("%i", &op);
switch(op)
{
case 0: B3=pow(10,op); break;
case 1: B3=pow(10,op); break;
case 2: B3=pow(10,op); break;
case 3: B3=pow(10,op); break;
case 4: B3=pow(10,op); break;
case 5: B3=pow(10,op); break;
case 6: B3=pow(10,op); break;
case 7: B3=pow(10,op); break;
case 8: B3=pow(10,op); break;
default: B3=pow (10, op);
}

r=(B1+B2)*B3;
printf("1. Oro 2.Plata");
scanf("%i", &op);
printf("\nLa Resistencia es %.2f",r);
if (op==1){
printf("+-5%c",37);
}
else{
printf("+-10%c",37);
}
system ("pause>null");
}
