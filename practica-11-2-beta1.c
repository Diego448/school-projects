#include <stdio.h>
#include <stdlib.h>
int a[3][3], b[3][3], c[3][3], f[9];
int i, j, k, l, min, cont=0, cont2=0, contref=0, contref2=0, control=0, control0=0;
void GetArray();
void GetArray2();
void GetArray3();
void PrintArray();
void PrintArray2();
void PrintArray3();
void ArrayModifier();
void GetArrayModified();
void GetArrayModified2();
void PrintArrayModified2();
int ArrayModified2Control();
void PrintArrayModified2Control();
void ArrayModified2Count();
void ArrayModified2Control0();
int main(int argc, char *argv[])
{
  GetArray();
  GetArray2();
  printf("\nA:");
  PrintArray();
  printf("\nB:");
  PrintArray2();
  GetArray3();
  printf("\nC:");
  PrintArray3();
  ArrayModifier();
  printf("\nNuevo A:");
  PrintArray();
  if (control0>0)
  {
    ArrayModified2Control0();
  }
  else if (control0==0)
  {
                ArrayModified2Control();
                printf("\nNuevo B:");
                PrintArrayModified2Control();
  }
  else if (control0==0 && control==0)
  {            
  GetArrayModified2();
  ArrayModified2Count();
  printf("\nNuevoB:");
  PrintArrayModified2();
  }
  system("PAUSE");	
  return 0;
}
void GetArray()
{
          for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  printf("Ingresa el valor de a[%d][%d]: ", i, j);
                  scanf("%d", &a[i][j]);
              }
          }
}
void GetArray2()
{
          for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  printf("Ingresa el valor de b[%d][%d]: ", i, j);
                  scanf("%d", &b[i][j]);
              }
          }
}
void GetArray3()
{
          for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  c[i][j] = a[i][j]*b[i][j];
              }
          }
}
void PrintArray()
{
          for (i=0; i<3; i++)
          {
              printf("\n");
              for (j=0; j<3; j++)
              {
                  printf("%d\t", a[i][j]);
              }
          }
}
void PrintArray2()
{
          for (i=0; i<3; i++)
          {
              printf("\n");
              for (j=0; j<3; j++)
              {
                  printf("%d\t", b[i][j]);
              }
          }
}
void PrintArray3()
{
          for (i=0; i<3; i++)
          {
              printf("\n");
              for (j=0; j<3; j++)
              {
                  printf("%d\t", c[i][j]);
              }
          }
}
void ArrayModifier()
{
     for (i=0; i<3; i++)
     {
         for (j=0; j<3; j++)
         {
             f[cont] = a[i][j];
             cont += 1;
         }
     }
     for (l=0; l<9; l++)
     {
     for (k=1; k<9; k++)
     {
         if (f[k]>f[k-1])
         {
                         min = f[k-1];
                         f[k-1] = f[k];
                         f[k] = min;
         }
     }
     }
}
void GetArrayModified()
{
    cont = 0;
    for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  a[i][j] = f[cont];
                  cont += 1;
              }
          }
}
int ArrayModified2Control()
{
     for (i=0; i<3; i++)
             {
                 if (i<1)
                 i=1;
                 for (j=0; j<3; j++)
                 {
                     if (b[i][j]==b[0][0])
                     {
                        control = 1;
                     }
                     else if (b[i][j]!=b[0][0])
                     {
                          control = 0;
                     }
                 }
             }
}
void GetArrayModified2()
{
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[0][0]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[0][0] = 0;
             contref2 = 0;
             contref = 0;
             if (b[0][1]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[0][1]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[0][1] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[0][2]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[0][2]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[0][2] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[1][0]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[1][0]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[1][0] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[1][1]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[1][1]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[1][1] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[1][2]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[1][2]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[1][2] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[2][0]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[2][0]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[2][0] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[2][1]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[2][1]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[2][1] = 0;
             contref2 = 0;
             contref = 0;
             }
             if (b[2][2]!=0)
             {
             for (i=0; i<3; i++)
             {
                 for (j=0; j<3; j++)
                 {
                     if (b[2][2]==b[i][j])
                     {
                        contref += 1;
                        contref2 += 1;
                     }
                     if (contref>1)
                     {
                        b[i][j] = 0;
                        contref = 0;
                     }
                 }
             }
             if (contref2>1)
             b[2][2] = 0;
             contref2 = 0;
             contref = 0;
             }
}
void PrintArrayModified2()
{
     if (cont2==0)
     {
                 printf("\nMatriz perfecta\n");
     }
     else if (cont2>0)
     {
     for (i=0; i<3; i++)
          {
              printf("\n");
              for (j=0; j<3; j++)
              {
                  printf("%d\t", b[i][j]);
              }
          }
          printf("Se realizaron %d cambios en:", cont2);
     }
      for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  if (b[i][j]==0)
                  {
                                 cont2 += 1;
                                 printf("b[%d][%d], ", i, j);
                  }
              }
          }
}
void PrintArrayModified2Control()
{
     for (i=0; i<3; i++)
          {
              printf("\n");
              for (j=0; j<3; j++)
              {
                  printf("0\t");
              }
          }
     printf("\nSe realizaron 9 cambios");
}
void ArrayModified2Count()
{
     for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  if (b[i][j]==0)
                  {
                                 cont2 += 1;
                  }
              }
          }
}
void ArrayModified2Control0()
{
     for (i=0; i<3; i++)
          {
              for (j=0; j<3; j++)
              {
                  if (b[i][j]==0)
                  {
                                 printf("\nHay ceros en la matriz inicial\nNo se puede continuar la ejecucion");
                                 control0 = 1;
                  }
              }
          }
}
