#include<stdio.h>
#include<conio.h>
int a, i, c, d;
double b=1;
main()
{
	clrscr();
	for(i=0; i<=10; i++)
	{
	c=c+1;
	a=a+i;
	printf("El resultado de la suma #%d es: %d\n",c, a);
	}
	for(i=1; i<=10; i++)
	{
	d=d+1;
	b=b*i;
	printf("El resultado de la multipicacion #%d es: %.0f\n", d, b);
	}
	getch();
}