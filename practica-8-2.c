#include <stdio.h>
#include <stdlib.h>
int lim, num, a;
int b = 0;
int main(int argc, char *argv[])
{
  printf("Ingresa la cantidad limite de la que desea obtener la suma de los numeros primos: ");
  scanf("%d", &lim);
  if (lim==0 || lim==1 || lim==2)
  {
   printf("Ingrese una cantidad superior a 2");
  }
  else
  {
  for (num=3; num<=lim; num++);     //Asigna todos los valores enteros posibles a la variable num
  for (a=2; a<lim; a++);     //Evalúa si el numero no es primo    
      {
      if (num%a==0)
      {
      printf("si");
      }
      } 
  }
  system("PAUSE");	
  return 0;
}
