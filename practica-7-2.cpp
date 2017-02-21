#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a, x, y, b;
main()
{
	clrscr();
	for (a=0; a<=100; a++)
	{
	b=rand()%15;
	x=rand()%100;
	y=rand()%100;
	textcolor(b);
	gotoxy(x,y);
	cprintf(".");
	}
	getch();
}