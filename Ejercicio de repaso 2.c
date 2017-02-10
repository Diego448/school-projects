#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a, b, c, d, e, f, g, h, i;
int a2, b2, c2, d2, e2, f2, g2, h2, i2, cant;
int main(int argc, char *argv[])
{
  printf("Ingresa una cantidad expresada en pesos (sin centavos): \n");
  scanf("%d", &cant);
  a = cant/1000;
  a2 = (int)a;
  b = cant/500;
  b2 = (int)b;
  c = cant/200;
  c2 = (int)c;
  d = cant/100;
  d2 = (int)c;
  e = cant/50;
  e2 = (int)e;
  f = cant/20;
  f2 = (int)f;
  g = cant/10;
  g2 = (int)g;
  h = cant/5;
  h2 = (int)h;
  i = cant/2;
  i2 = (int)i;
  printf("La cantidad ingresada es equivalente a:\n%d Billetes de $1000\n%d Billetes de $500\n%d Billetes de $200\n%d Billetes de $100\n%d Billetes de $50\n%d Billetes de $20\n%d Monedas de $10\n%d Monedas de $5\n%d Monedas de $2\n%d Monedas de $1\n", a2, b2, c2, d2, e2, f2, g2, h2, i2, cant);
  system("PAUSE");	
  return 0;
}
