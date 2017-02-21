#include<conio.h>
#include<stdio.h>
int op;
main()
{
	printf("Ingresa el numero del dia de la semana que deseas conocer (entre 1 y 7)");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
		printf("Hoy es lunes");
		break;
		case 2:
		printf("Hoy es martes");
		break;
		case 3:
		printf("Hoy es miercoles");
		case 4:
		printf("Hoy es jueves");
		break;
		case 5:
		printf("Hoy es viernes");
		break;
		case 6:
		printf("Hoy es sabado");
		break;
		case 7:
		printf("Hoy es domingo");
		break;
		default:
		printf("Introduce un numero entre el 1 y el 7");
		break;
	}
	getch();
}