#include <stdio.h>
#include <stdlib.h>
int a[10], max=0, min=0, med, i, k;
int main(int argc, char *argv[])
{
 int a[5];
 for (k=0; k<5; k++)
  {
        printf("Introduce una cantidad: ");
        scanf("%d", &a[k]);
  }
  for (i=0; i<5; i++)
  {
          if (a[0]>=a[i])
          max = a[0];
          else if (a[1]>=a[i])
          max = a[1];
          else if (a[2]>=a[i])
          max = a[2];
          else if (a[3]>=a[i])
          max = a[3];
          else if (a[4]>=a[i])
          max = a[4];
  }
  printf("\nMax: %d", max);
  system("PAUSE");	
  return 0;
}
