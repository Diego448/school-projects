#include <stdio.h>
#include <stdlib.h>
int tam, i, j, cont=0;
int main(int argc, char *argv[])
{
  printf("Ingresa el *tamanio* de la matriz nxn: ");
  scanf("%d", &tam);
  int a[tam][tam];
  for (i=0; i<tam; i++)
  {
      cont = 0;
      for (j=0; j<tam; j++)
      {
          cont +=1;
          printf("%d\t", 1);
          if (cont==tam)
          printf("\n");
      }
  }
  system("PAUSE");	
  return 0;
}
