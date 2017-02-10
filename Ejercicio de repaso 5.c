#include <stdio.h>
#include <stdlib.h>
int x, y;
int main(int argc, char *argv[])
{
  printf("Ingresa la coordenada cartesiana que desse conocer su localizacion en cuadrantes (x,y)\n");
  printf("x=");
  scanf("%d", &x);
  printf("\ny=");
  scanf("%d", &y);
  if (x!=0)
  {
  if (x>0)
  {
          if (y>0)
          printf("\nEl punto se encuentra en el primer cuadrante");
          else
          printf("\nEl punto se encuentra en el segundo cuadrante");
  }
  else
  {
      if (y>0)
      printf("\nEl punto se encuentra en el tercer cuadrante");
      else
      printf("\nEl punto se encuentra en el cuarto cuadrante");
  }
}
  else
      printf("\nEl punto se encuentra en un cuadrante nulo (0,y) o (x,0)");
  system("PAUSE");	
  return 0;
}
