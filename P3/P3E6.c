#include <stdio.h>
#include <string.h>
#include <conio.h>
#define N 6
void leem(int a[][N], int *dn, int *dm);
void muestram(int a[][N], int n, int m);
float promedio(int a[][N], int i, int m);

int main()
{
int n,m, a[N][N], i;
leem(a,&n,&m);
for (i=0;i<n;i++){
     printf("El promedio de la fila %d es ",i);
    printf("%f\n",promedio(a,i,m));}
muestram(a,n,m);
}

void leem(int a[][N],int *dn, int *dm)
{
 int i,j;
 printf("ingrese filas \n");
 scanf("%d",dn);
 printf("\ningrese col ");
 scanf("%d",dm);
 for (i=0;i<*dn;i++)
    for(j=0;j<*dm;j++)
        scanf("%d",&a[i][j]);
}
float promedio(int a[][N], int i, int m)
{int k;
float total=0;
for(k=0;k<m;k++)

  total+=a[i][k];
  return total/m;
 }


muestram(int a[][N], int n,int m)
{int i, j;
for (i=0;i<n;i++)
{ printf("\n");
    for(j=0;j<m;j++)
    printf("%d",a[i][j]);
}
}
