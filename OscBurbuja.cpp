#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
 int vectr [10], aux, ind;
 srand(time(NULL));
 printf("El vector original es:\n");
 for(ind=0; ind<10; ind++)
{
 vectr[ind]=1+rand()%101;
 printf("%i ", vectr[ind]);
}
}
