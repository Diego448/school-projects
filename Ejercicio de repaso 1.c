#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int x, y, z, a, b, c, d, e, sw;
float r;
int main(int argc, char *argv[])
{
  printf("Selecciona una operacion a realizar\n");
  printf("1.(x+y^2)/z\n2.a+b*c+a/d*e-a\n");
  scanf("%d", &sw);
  switch(sw)
  {
            case 1:
                 printf("Asigna el valor de x ");
                 scanf("%d", &x);
                 printf("\nAsigna el valor de y ");
                 scanf("%d", &y);
                 printf("\nAsigna el valor de z ");
                 scanf("%d", &z);
                 r = (x+(y*y))/z;
                 printf("El resultado de la operacion realizada con la opcion %d es: %f\n", sw, r);
                 break;
            case 2:
                 printf("Asigna los valores de a, b, c, d, e\n");
                 scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
                 r = a+b*c+a/d*e-a;
                 printf("\nEl resultado de la operacion realizada con la opcion %d es: %f\n", sw, r);
                 break;
            default:
                    printf("Elige solo 1 o 2");
                    break;
  }
  system("PAUSE");	
  return 0;
}
