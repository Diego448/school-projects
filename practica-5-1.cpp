#include<stdio.h>
#include<conio.h>
int calf;
main()
{
	clrscr();
	printf("Ingresa la calificaci¢n ");
	scanf("%d", &calf);
	if (calf<60)
	printf("Calificaci¢n insuficiente tendr s que repetir la asignatura");
	if (60<=calf && calf<80)
	printf("Calificaci¢n aprobatoria pero no satisfactoria");
	if (calf>80)
	printf("Calificaci¢n satisfactoria");
	getch();
}
