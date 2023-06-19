/*Apuntadores
Tipo especial de variables cuya principal actividad es la de referencia a las posciones que se ocupan fisicamente en esta memoria.

Estaticas: Ocupan siempre una direccion de memoria y no varia la direccion.
Dinamicas: Apuntadores: Pueden desplazarse entre las direcciones de memoria y manipular informacion de otras variables.


Declaracion.
-Estatica: int x;
-Apuntador int *apunta;
 (El tipo de dato (int, char, float, ect) del apuntador tiene que ser igual al de la variable a la que apunta).

Operadores.
*-indireccion. Permite definir la variable como apuntador
               Hace refrencia al contenidode la variabe a la que apunta

&-direccion.   Hace referencia a la direccion de memoria de una variable.

Como apuntar: int main()
{
int x, *apunta;

apunta=&x; //se apunta a la direccion de memoria de x


Con la aritmetica de apuntadores podemos desplazar a los apuntadores a lo largo de diferentes direcciones de memoria. Usando los operadores
}*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void intercambio (int *px, int *py)
{
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}

int main()
{
    int a=30, b=22;

    cout<<"Los valores son: a="<<a<<" b="<<b;
    intercambio(&a,&b);
    cout<<"\nLos valores son: a="<<a<<" b="<<b;
}
