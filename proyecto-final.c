#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int control_inicio = 1, sel, subsel, res;
void Salario()
{
	int hrd, semd, hrs, hre, resb;
    float resn;
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
}
void Ventas()
{
    int ventas;
    printf("Introduce las ventas del dia de hoy ");
	scanf("%d", &ventas);
	if (ventas>= 5000)
	printf("Venta exitosa");
	else
	printf("Debes esforzarte mas en tus ventas");
}
void Calificaciones()
{
	int calf;
    printf("Ingresa la calificaci¢n ");
	scanf("%d", &calf);
	if (calf<60)
	printf("Calificaci¢n insuficiente tendr s que repetir la asignatura");
	if (60<=calf && calf<80)
	printf("Calificaci¢n aprobatoria pero no satisfactoria");
	if (calf>80)
	printf("Calificaci¢n satisfactoria");
}
void Mayor()
{
	int a, b, c, d;
    printf("Ingresa cuatro numeros enteros(a, b, c, d respectivamente)\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a>b) && (a>c) && (a>d))
	printf("a es el numero mayor\n");
	if ((b>a) && (b>c) && (b>d))
	printf("b es el numero mayor\n");
	if ((c>a) && (c>b) && (c>d))
	printf("c es el numero mayor\n");
	if ((d>a) && (d>b) && (d>c))
	printf("d es el numero mayor\n");
	if ((a<b) && (a<c) && (a<d))
	printf("a es el numero menor");
	if ((b<a) && (b<c) && (b<d))
	printf("b es el numero menor");
	if ((c<a) && (c<b) && (c<d))
	printf("c es el numero menor");
	if ((d<a) && (d<b) && (d<c))
	printf("d es el numero menor");
}
void Asterisk()
{
	int a;
    for(a=0; a<=50; a++)
	printf("*\t");
	
}
void Multiplos_7()
{
  int b, c, lim, d;
  int a = 7;
  printf("Ingresa la cantidad limite a la que se desea obtener los multiplos de 7: ");
  scanf("%d", &lim);
  d = lim/7;
  for (b=1; b<=d; b++)
  {
  c = a*b;
  printf("\n%d\n", c);
  }    
}
void Sumatoria_o_Factorial()
{
    int a, i, c, d;
    double b=1;
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
}
void Array()
{
    int x = 3;
    int i, j;
    int array[3];
	for(i=0; i<x; i++)
	{
		printf("Ingresa el valor a almacenar en %d: ", i);
		scanf("%d", &array[i]);
	}
	for(j=x; j>0; j--)
	{
		printf("%d", array[j-1]);
	}
}
void ArrayMax()
{
 int b, max=0, min=0, med, i, k, j, cont=0;
 printf("Ingresa la cantidad de valores a analizar: ");
 scanf("%d", &b);
 int a[b];
 for (k=0; k<b; k++)
  {
        printf("Introduce una cantidad: ");
        scanf("%d", &a[k]);
  }
      for (j=1; j<=b; j++) /*Nota: ingresar numeros distintos y no ingresar el valor mayor al final. Verificado para analizar solo conjuntos pequeños*/
      {
      if (a[cont]>=a[j])
      max = a[cont];
      else if (a[cont]<a[j])
      cont += 1; continue;
      }
      for (j=1; j<=b; j++)
      {
      if (a[cont]<=a[j])
      min = a[cont];
      else if (a[cont]>a[j])
      cont += 1; continue;
      }
  printf("\nMax: %d", max);
  printf("\nMin: %d", min);
  med = b/2;
  if (med%2==0)
  printf("\nMedios: %d, %d", a[med], a[med+1]);
  else if (med%2!=0)
  printf("\nMedio: %d", a[med]);
}
void PrintArrayAA()
{
  int tam, i, j, cont=0;
  printf("Ingresa el *tamanio* de la matriz nxn: ");
  scanf("%d", &tam);
  int a[tam][tam];
  for (i=0; i<tam; i++)
  {
      cont = 0;
      for (j=0; j<tam; j++)
      {
          cont +=1;
          printf("%d\t", 1);
          if (cont==tam)
          printf("\n");
      }
  }
}
void SumatoriaDiagonal()
{
  
  int a[5][5], sum, i, j, ac=0, cont=0, b;
  for (i=0; i<5; i++)
  {
      for (j=0; j<5; j++)
      {
          printf("Ingresa el valor de a[%d]a[%d]: ", i, j);
          scanf("%d", &a[i][j]);
      }
  }
  printf("A:\n");
  for (i=0; i<5; i++)
  {
      cont = 0;
      for (j=0; j<5; j++)
      {
          cont++;
          printf("%d\t", a[i][j]);
          if (cont==5)
          printf("\n");
      }
  }
  for (b=0; b<5; b++)
 {
      ac += a[b][b];
 } 
 printf("\nSumatoria = %d\n", ac);
}
void PromedioDividido()
{
  int x, i, tot1=0, tot2=0, cont1=0, cont2=0;
  float prom1, prom2;
  printf("Ingresa la cantidad de elementos a almacenar: ");
  scanf("%d", &x);
  int a[x];
  for (i=0; i<x; i++)
  {
      a[i] = rand()%9;
      if (a[i]%2==0)
      {
         tot1 += a[i];
         cont1 += 1;
      }
      else if (a[i]%2!=0)
      {
           tot2 += a[i];
           cont2 += 1;
      }
  }
  prom1 = tot1/cont1;
  prom2 = tot2/cont2;
  printf("\nEl promedio de los numeros pares es: %.2f", prom1);
  printf("\nEl promedio de los numeros impares es: %.2f", prom2);
}
int main(int argc, char *argv[])
{
  while(control_inicio == 1)
  {
          printf("\t\t\t\tMenu principal\n");
          printf("\t  Elige el conjunto de programas que deseas visualizar\n");     
          printf("\n1.Programas secuenciales\n");
          printf("2.Programas iterativos\n");
          printf("3.Programas con manejo de arreglos\n");
          printf("Seleccion: ");
          scanf("%d", &sel);
          switch(sel)
          {
                     case 1:
                          printf("\t\t\t\t   Submenu");
                          printf("\n\t\t  Selecciona el programa que deseas ejecutar\n");
                          printf("\n1.Salario\n2.Ventas\n3.Calificaciones\n4.Numero mayor\n");
                          printf("Seleccion: ");
                          scanf("%d", &subsel);
                          switch(subsel)
                          {
                                        case 1:
                                             Salario();
                                        break;
                                        case 2:
                                             Ventas();
                                        break;
                                        case 3:
                                             Calificaciones();
                                        break;
                                        case 4:
                                             Mayor();
                                        break;
                                        default:
                                                printf("Elige un programa de la lista");
                                        break;
                          }
                     break;
                     case 2:
                          printf("\t\t\t\tSubmenu");
                          printf("\nSelecciona el programa que deseas ejecutar\n");
                          printf("\n1.Asterisk\n2.Multiplos de 7\n3.Suamtoria o factorial\n4.Array\n");
                          printf("Seleccion: ");
                          scanf("%d", &subsel);
                          switch(subsel)
                          {
                                        case 1:
                                             Asterisk();
                                        break;
                                        case 2:
                                             Multiplos_7();
                                        break;
                                        case 3:
                                             Sumatoria_o_Factorial();
                                        break;
                                        case 4:
                                             Array();
                                        break;
                                        default:
                                                printf("Elige un programa de la lista");
                                        break;
                          }
                     break;
                     case 3:
                          printf("\t\t\t\tSubmenu");
                          printf("\nSelecciona el programa que deseas ejecutar\n");
                          printf("\n1.Array max\n2.Imprimir matriz\n3.Sumatoria diagonal\n4.Promedio dividido\n");
                          printf("Seleccion: ");
                          scanf("%d", &subsel);
                          switch(subsel)
                          {
                                        case 1:
                                             ArrayMax();
                                        break;
                                        case 2:
                                             PrintArrayAA();
                                        break;
                                        case 3:
                                             SumatoriaDiagonal();
                                        break;
                                        case 4:
                                             PromedioDividido();
                                        break;
                                        default:
                                                printf("Elige un programa de la lista");
                                        break;
                          }
                     break;
                     default:
                             printf("Elige un programa de la lista");
                     break;
          }               
          printf("Desea elegir otro programa? (1.Si, 0.No)");
          scanf("%d", &control_inicio);        
  }
  system("PAUSE");	
  return 0;
}
