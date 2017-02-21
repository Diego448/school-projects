#include<stdio.h>
#include<conio.h>
int x=3, i, j;

main()
{
        int array[3];
	for(i=0; i<x; i++)
	{
		printf("Ingresa el valor a almacenar en %d=", i);
		scanf("%d", &array[i]);
	}
	for(j=x; j>0; j--)
	{
		printf("%d", array[j-1]);
	}
	getch();
}