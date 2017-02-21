#include<stdio.h>
#include<conio.h>
#include<math.h>
int hrd, semd, hrs, hre, resb;
float resn;
main()
{
	clrscr();
	printf("Horas trabajadas al dia: ");
	scanf("%d", &hrd);
	printf("Dias laborados a la semana: ");
	scanf("%d", &semd);
	printf("Salario por hora: ");
	scanf("%d", &hrs);
	printf("Numero de horas extra trabajadas: ");
	scanf("%d", &hre);
	resb = ((hrs*hrd)*semd)+(hre*2);
	resn = resb-(.15*semd);
	printf("El salario bruto es: %d\n", resb);
	printf("El salario neto es: %f\n", resn);
	getch();
}