#include<stdio.h>
#include<conio.h>
int calf;
main()
{
	clrscr();
	printf("Ingresa la calificación ");
	scanf("%d", &calf);
	if (calf<60)
	printf("Calificación insuficiente tendrás que repetir la asignatura");
	if (60<=calf && calf<80)
	printf("Calificación aprobatoria pero no satisfactoria");
	if (calf>80)
	printf("Calificación satisfactoria");
	getch();
}
