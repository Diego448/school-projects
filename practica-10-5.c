#include <stdio.h>
#include <stdlib.h>
int a[5][5], sum, i, j, ac=0, cont=0;
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
  printf("A:\n");
  for (i=0; i<5; i++)
  {
      cont = 0;
      for (j=0; j<5; j++)
      {
          cont++;
          printf("%d\t", a[i][j]);
          if (cont==5)
          printf("\n");
      }
  }
  SumatoriaDiagonal();
  system("PAUSE");	
  return 0;
}
int SumatoriaDiagonal(int b)
{
                   for (b=0; b<5; b++)
                   {
                      ac += a[b][b];
                   } 
                   printf("\nSumatoria = %d\n", ac);
}

                   
