#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sw;
float f, c, fr, cr, a;
int main(int argc, char *argv[])
{
  printf("Selecciona 1.C a F, 2.F a C: ");
  scanf("%d", & sw);
  switch(sw)
  {
            case 1:
                 printf("Ingresa la cantidad en grados centigrados: ");
                 scanf("%f", &c);
                 cr = (c*1.8)+32;
                 printf("\nF=%f", cr);
                 break;
            case 2:
                 printf("\nIngresa la cantidad en grados fahrenheit: ");
                 scanf("%f", &f);
                 a = 5/9;
                 fr = (f-32)*a;
                 printf("\nC=%f", fr);
                 break;
            default:
                    printf("Igresa unicamente una de las opciones anteriores");
                    break;
 }
  system("PAUSE");	
  return 0;
}
