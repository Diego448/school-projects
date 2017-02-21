#include <stdio.h>
#include <stdlib.h>
int num, a, c;
int b = 0;
int d = 0;
int main(int argc, char *argv[])
{
  printf("Ingresa un numero: ");
  scanf("%d", &num);
  if (num==1)
  {
             printf("El resultado de la suma de los numeros primos hasta %d es: %d\n", num, num);
  }
  else
  {
  if (num==2)
  {
             printf("El resultado de la suma de los numeros primos hasta %d es: 3\n", num);
  }
  else
  {
  for (a=2; a<num; a++)
  {
  if (num%a==0) //Evalua si un numero no es primo
  {
   d = 1;
  }
  }
  if (d==1)
  {
   printf("\nEl numero no es primo");
  }
  else
  {
   b = b + num;
   c = b + 3;
   printf("%d\n", c);
  }
  }
  }
  system("PAUSE");	
  return 0;
}
