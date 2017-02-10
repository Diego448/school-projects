#include <stdio.h>
#include <stdlib.h>
float mxn, usd, gbp, eur;
int sw;
int main(int argc, char *argv[])
{
  printf("Seleeciona la conversion de divisas deseada:\n1.Pesos(MXN) a dolares(USD)\n2.Pesos(MXN) a euros(EUR)\n3.Pesos(MXN) a libras esterlinas(GBP)\n4.Libras esterlinas(GBP) a pesos(MXN)\n5.Dolares(USD) a pesos(MXN)\n");
  scanf("%d", &sw);
  switch(sw)
  {
            case 1:
                 printf("MXN-USD\nIngresa la cantidad en pesos: ");
                 scanf("%f", &mxn);
                 usd = mxn*0.0813777;
                 printf("\n%f dolares", usd);
                 break;
            case 2:
                 printf("MXN a EUR\nIngresa la cantidad en pesos: ");
                 scanf("%f", &mxn);
                 eur = mxn*0.0623197;
                 printf("\n%f euros", eur);
                 break;
            case 3:
                 printf("MXN-GBP\nIngresa la cantidad en pesos: ");
                 scanf("%f", &mxn);
                 gbp = mxn*0.0534380;
                 printf("\n%f libras esterlinas", gbp);
                 break;
            case 4:
                 printf("GBP-MXN\nIngresa la cantidad en libras esterlinas: ");
                 scanf("%f", &gbp);
                 mxn = gbp*18.7133;
                 printf("\n%f pesos", mxn);
                 break;
            case 5:
                 printf("USD-MXN\nIngresa la cantidad en dolares: ");
                 scanf("%f", &usd);
                 mxn = usd*12.2884;
                 printf("\n%f pesos", mxn);
                 break;
            default:
                    printf("Selcciona un valor entre 1 y 5");
 }
  system("PAUSE");	
  return 0;
}
