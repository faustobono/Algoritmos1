#include <stdio.h>
#include <stdlib.h>

void leevector(int a[], int *dn);
void elimina_central(int a[], int *n);
void escvector(int a[],int n);

void main (void){
int n;
int a[20];
leevector(a,&n);
elimina_central(a,&n);
escvector(a,n);
}
void leevector(int a[], int *dn)
{
 int i;
 printf("ingrese la cantidad de elementos del vector <=100: ");
 scanf("%d",dn);
 for(i=0;i<*dn;i++)
 {
        printf("Ingrese el elemento %d: ", i+1);
 scanf("%d", &a[i]);
  }
}
void elimina_central (int a[], int *n)
{
  int i ;
 for(i= (*n) / 2   ; i<*n; i++)
    a[i]=a[i+1];
 (*n)--;
  }
void escvector(int  n[], int a)
{
   int i=0;
   for( ; i < a; i ++)
     printf("%d",n[i]);
}
