#include <stdio.h>
#include <stdlib.h>
int seg;
float ref;
int hr;
int min;
int seg2;
int main(int argc, char *argv[])
{
  printf("Ingresa la cantidad de segundos ");
  scanf("%d", &seg);
  if (seg<=60)
  printf("%d", seg);
  ref = seg/3600;
  printf("%d", ref);
  system("PAUSE");	
  return 0;
}
