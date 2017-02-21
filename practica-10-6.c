#include <stdio.h>
#include <stdlib.h>
int a[5][5], sum, i, j, sum=0, cont=0;
int c[5];
int main(int argc, char *argv[])
{
  for (i=0; i<5; i++)
  {
      for (j=0; j<5; j++)
      {
          printf("Ingresa el valor de a[%d]a[%d]: ", i, j);
          scanf("%d", &a[i][j]);
      }
  }
  SumatoriaDiagonal();
  for (j=0; j<5; j++)
      {
          printf("Ingresa el valor de a[%d]: ",j);
          scanf("%d", &c[j]);
      }
  printf("B:\n");
  for (j=0; j<5; j++)
  {
   printf("%d\t", (c[j])*sum);
  }
  system("PAUSE");	
  return 0;
}
int SumatoriaDiagonal()
{
                   int b;
	     for (b=0; b<5; b++)
                   {
                      sum += a[b][b];
                   } 
                   printf("\nSumatoria = %d\n", sum);
}
