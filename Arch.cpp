#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main(){

char c;
FILE *arch;
arch=fopen ("texto.txt", "r");
if (arch==NULL){cout<< "No se encontro el Archivo";}
else{
while (!feof (arch))
{
c=fgetc(arch);
cout<<c;
Sleep(80);
}
}
cout<<"\n Se leyo correctamente";
fclose (arch);
system ("pause>null");

}
