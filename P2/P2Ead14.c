#include <stdio.h>
void cambio(int a[],int b[],int n);
void   main (void)
{int a[20], b[20],i,n,p;
printf("ingrese tamaño de los vectores ");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("\n");
cambio(a,b,n);
for(i=0;i<n;i++)
printf("%d ",b[i]);
}
void cambio(int a[],int b[],int n)
{    int i, j;
    j=0;
    for (i=n-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;}
for(i=0;i<n;i++)
a[i]=b[i];}
