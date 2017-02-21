#include <stdio.h>
#include <stdlib.h>
int op, sn, b;
int a;
int tot;
int com;
int main(int argc, char *argv[])
{
  printf("Lista de menus a elegir:\nMenu 1: Consome de pollo, sopa del dia, carne asada acompañada de ensalada y un vaso de agua. Costo: $40\nMenu 2: Consome de pollo, sopa de verduras, a escoger entre filete de pescado, pechuga empanizada o guisado del dia, frijoles y refresco. Costo: $52\nMenu 3: Consome de pollo, ensalada, pan integral, agua y una fruta. Costo: $45\n");
  sn = 1;
  while(sn == 1)
  {       
   printf("Selecciona uno de los tres menus a escoger ");
   scanf("%d", &op);
   switch(op)
   {
             case 1:
                  printf("Has seleccionado Menu 1\n");
                  a = a + 40;
                  b = b + 1;
                  break;
             case 2:
                  printf("Has seleccionado Menu 2\n");
                  a = a + 52;
                  b = b + 1;
                  break;
             case 3:
                  printf("Has seleccionado Menu 3\n");
                  a = a + 45;
                  b = b + 1;
                  break;
             default:
                  printf("Intenta una opcion del 1 al 3");
                  break;
   }
   printf("Desea elegir otro menu (1:Si, 2: No) ");
   scanf("%d", &sn);  
  }
  com = com + b;
  tot = tot + a; 
  printf("El numero de comensales es de: %d\n", com);
  printf("El total a pagar es de $%d\n", tot);
  if (tot >= 200)
  printf("El restaurante te regala $20 en tu proxima compra\n");
  else
  printf("El restaurante te regala $10 en tu proxima compra\n");
   system("PAUSE");	
  return 0;
}
