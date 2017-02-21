#include<conio.h>
#include<stdio.h>
#include<math.h>
int a, b, c;
main()
{
	printf("Ingresa el valor de x: ");
	scanf("%d", &a);
	printf("\nIngresa la potencia y a la que se desea elevar x: ");
	scanf("%d", &b);
	c=pow(a,b);
	printf("%d", c);
	getch();
}