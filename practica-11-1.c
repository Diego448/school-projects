#include <stdio.h>
#include <stdlib.h>
int x, i, tot1=0, tot2=0, cont1=0, cont2=0;
float prom1, prom2;
int main(int argc, char *argv[])
{
  printf("Ingresa la cantidad de elementos a almacenar: ");
  scanf("%d", &x);
  int a[x];
  for (i=0; i<x; i++)
  {
      a[i] = rand()%9;
      if (a[i]%2==0)
      {
         tot1 += a[i];
         cont1 += 1;
      }
      else if (a[i]%2!=0)
      {
           tot2 += a[i];
           cont2 += 1;
      }
  }
  prom1 = tot1/cont1;
  prom2 = tot2/cont2;
  printf("\nEl promedio de los numeros pares es: %.2f", prom1);
  printf("\nEl promedio de los numeros impares es: %.2f", prom2);
  system("PAUSE");	
  return 0;
}
