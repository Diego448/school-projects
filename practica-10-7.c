#include <stdio.h>
#include <stdlib.h>
int x=3, i, j;
int main(int argc, char *argv[])
{
    char array[2];
	printf("Ingresa una palabra de %d letras: ", x);
    for(i=0; i<x; i++)
	{
		scanf("%c", &array[i]);
	}
	printf("\n");
	for(j=x; j>0; j--)
	{
		printf("%c", array[j-1]);
	}
	printf("\n");
  system("PAUSE");	
  return 0;
}
