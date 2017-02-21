#include<stdio.h>
#include<conio.h>
int a, b, c, d;
main()
{
	clrscr();
	printf("Ingresa cuatro numeros enteros(a, b, c, d respectivamente)\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a>b) && (a>c) && (a>d))
	printf("a es el n£mero mayor\n");
	if ((b>a) && (b>c) && (b>d))
	printf("b es el n£mero mayor\n");
	if ((c>a) && (c>b) && (c>d))
	printf("c es el n£mero mayor\n");
	if ((d>a) && (d>b) && (d>c))
	printf("d es el n£mero mayor\n");
	if ((a<b) && (a<c) && (a<d))
	printf("a es el n£mero menor");
	if ((b<a) && (b<c) && (b<d))
	printf("b es el n£mero menor");
	if ((c<a) && (c<b) && (c<d))
	printf("c es el n£mero menor");
	if ((d<a) && (d<b) && (d<c))
	printf("d es el n£mero menor");
	getch();
}