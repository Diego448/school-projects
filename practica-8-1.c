#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int b, c, lim, d;
int a = 7;
int main(int argc, char *argv[])
{
  printf("Ingresa la cantidad limite a la que se desea obtener los multiplos de 7: ");
  scanf("%d", &lim);
  d = lim/7;
  for (b=1; b<=d; b++)
  {
  c = a*b;
  printf("\n%d\n", c);
  }    
  system("PAUSE");	
  return 0;
}
