#include <stdio.h>
#include <stdlib.h>
float num;
int i;
int a;
int main(int argc, char *argv[])
{   
    printf("Ingresa cualquier cantidad entera ");
    scanf("%f", &num);
    if (num==1 || num==2 || num==3 || num==5 || num==7)
    printf("La cantidad es un numero primo");
    for (a=1; a<num; a++)
    if (num/2==2*a)
    printf("La cantidad es un numero par");
    for (i=1; i<num; i++)
    if (num/2==2*i || num/3==3*i || num/5==5*i || num/7==7*i)
    printf("La cantidad no es un numero primo");
    getch();
}
