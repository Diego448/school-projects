#include <stdio.h>
#include <stdlib.h>
int max, min;
float prommax, prommin;
int cont = 0;
int acmax = 0;
int acmin =0;
int sn = 1;
int main(int argc, char *argv[])
{
  while ( sn==1 )
  {
        printf("Ingresa la maxima temperatura del dia: ");
        scanf("%d", &max);
        printf("\nIngresa la minima temperatura del dia: ");
        scanf("%d", &min);
         if (max==9 || min==9)
        {
                    printf("Valor no admitido, desesa intentar de nuevo\n1.Si, 2.No");
                    scanf("%d", &sn);
        }
        else
        {
        cont = cont + 1;
        acmax = acmax + max;
        acmin = acmin + min;
        printf("\nDesea ingresar la temperatura de otro dia.\n1.Si, 2.No\n");
        scanf("%d", &sn);
        }
  }
  printf("\nSe ha producido un error: 0001");
  if (cont!=0)
  {
  printf("\nCantidad de dias evaluados: %d", cont);
  prommax = acmax/cont;
  printf("\nPromedio de las maximas temperaturas: %.2f", prommax);
  prommin = acmin/cont;
  printf("\nPromedio de las minimas temperaturas: %.2f", prommin);
  }
  system("PAUSE");	
  return 0;
}
