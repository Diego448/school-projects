#include <stdio.h>
#include <conio.h>
int ventas;
main()
{
	clrscr();
	printf("Introduce las ventas del dia de hoy ");
	scanf("%d", &ventas);
	if (ventas>= 5000)
	printf("Venta exitosa");
	else
	printf("Debes esforzarte mas en tus ventas");
	getch();
}