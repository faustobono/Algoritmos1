#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct datos{
int fila;
int suma;
};

void leem(int mat[][6], int *dn, int *dm);
void lees(int mat[][6],struct datos dat[], int n, int m, int *k);
void muestra(struct datos dat[], int n);

void main(){
int i,j, mat[6][6], n,m, k;
struct datos dat[20];
leem(mat,&n,&m);
lees(mat,dat, n,m,&k);
muestra(dat,k);
}
void leem(int mat[][6], int *dn, int *dm)
{
 int i, j;
 printf("Ingrese filas y columnas");
 scanf("%d %d",dn, dm);
  for(i=0;i<*dn;i++)
     for(j=0;j<*dm;j++)
       scanf("%d",&mat[i][j]);
}
void lees(int mat[][6],struct datos dat[], int n, int m, int *k)
{int i, j,sum,cantpa;
(*k)=0;
  for (i=0;i<n;i++)
  {
   sum=0;
   cantpa=0;
    for(j=0;j<m;j++)
       {
        if ((mat[i][j]%n)==0)
            sum+=mat[i][j];
        else{
        if((mat[i][j]%2)==0)
            cantpa++;
            }}
         if (sum>0)
           {
            dat[*k].fila=i;
            dat[*k].suma=sum;
            (*k)++;}
           else{
            if (cantpa>0){
            dat[*k].fila=i;
            dat[*k].suma=cantpa;
            (*k)++;
                }}
  }
}
void muestra(struct datos dat[], int k)
{
 int i;
 for(i=0;i<k;i++)
    printf("Fila %d valor %d",dat[i].fila, dat[i].suma);
}

