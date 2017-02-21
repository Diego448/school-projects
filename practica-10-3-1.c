#include <stdio.h>
#include <stdlib.h>
int a[10], b, max=0, min=0, med, i, k, j, cont=0;
int main(int argc, char *argv[])
{
 printf("Ingresa la cantidad de valores a analizar: ");
 scanf("%d", &b);
 int a[b];
 for (k=0; k<b; k++)
  {
        printf("Introduce una cantidad: ");
        scanf("%d", &a[k]);
  }
      for (j=1; j<=b; j++) /*Nota: ingresar numeros distintos y no ingresar el valor mayor al final. Verificado para analizar solo conjuntos pequeños*/
      {
      if (a[cont]>=a[j])
      max = a[cont];
      else if (a[cont]<a[j])
      cont += 1; continue;
      }
      for (j=1; j<=b; j++)
      {
      if (a[cont]<=a[j])
      min = a[cont];
      else if (a[cont]>a[j])
      cont += 1; continue;
      }
  printf("\nMax: %d", max);
  printf("\nMin: %d", min);
  med = b/2;
  if (med%2==0)
  printf("\nMedios: %d, %d", a[med], a[med+1]);
  else if (med%2!=0)
  printf("\nMedio: %d", a[med]);
  system("PAUSE");	
  return 0;
}
