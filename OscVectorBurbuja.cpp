#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
int vectr[9], ind, aux;
 srand(time(NULL));
 printf("El vector original es:\n");
 for(ind=0; ind<10; ind++)
{
 vectr[ind]=1+rand()%101;
 printf("%i ", vectr[ind]);
}
for(int x=0; x<9; x++)
{
for (int y=0; y<9; y++)
  if (vectr [y]> vectr [y+1])
  {
      aux=vectr[y];
      vectr[y]=vectr[y+1];
      vectr [y+1]=aux;
  }
}
printf("\n El arreglo ordenado es :");
for(ind=0; ind<10; ind++)
{
printf("%i ", vectr[ind]);
}
system("pause>null");
}
