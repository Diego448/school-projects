#include<conio.h>
#include<stdio.h>
#include<math.h>
int a, b, c, op;
main()
{
	clrscr();
	printf("Elige una operaci¢n basica 1:Suma, 2:Resta, 3:Multiplicacion, 4:Division ");
	scanf("%d", &op);
	printf("Introduce la primera cantidad: \n");
	scanf("%d", &a);
	printf("Introduce la segunda cantidad: \n");
	scanf("%d", &b);
	switch(op)
	{
		case 1:
		c = a+b;
		printf("=%d", c);
		break;
		case 2:
		c = a-b;
		printf("=%d", c);
		break;
		case 3:
		c = a*b;
		printf("=%d", c);
		break;
		case 4:
		c = a/b;
		printf("=%d", c);
		break;
		default:
		printf("Elige un caso entre el 1 y el 4");
		break;
	}
	getch();
}