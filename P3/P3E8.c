#include <stdio.h>
#include <string.h>
#include <conio.h>
struct datos{
    char nombre[10];
    char matri[6];
    float promedio;
};
void lee(struct datos dat[],int *dn);
void escribe(struct datos dat[], int n);
int main(){
struct datos dat[10];
int n;
    lee(dat, &n);
    maxp(dat, n);
    escribe(dat, n);
}
void lee(struct datos dat[], int *dn)
{    int i;
    printf("\nIngrese cantidad de alumnos ");
    scanf("%d",dn);
    for(i=0;i<*dn;i++)
        {
        printf("\nIngrese nombre del alumno ");
        fflush(stdin);
        gets(dat[i].nombre);
        fflush(stdin);
        printf("\nIngres matricula del alumno ");gets(dat[i].matri);
        printf("\nIngrese promedio del alum ");scanf("%f",&dat[i].promedio);
        }
}
void maxp(struct datos dat[], int n)
{
 int i;
 float maxp;
 char nomax[10];
 maxp=0;
 for(i=0; i<n;i++)
        if (dat[i].promedio>maxp)
           {
            maxp=dat[i].promedio;
            strcpy(nomax,dat[i].nombre);
           }
    printf("\nEl nombre con maximo promedio es %s \n",nomax);
}
void escribe(struct datos dat[], int n)
{
 int i;
 float x;
 printf("\ningrese x ");
 scanf("%f",&x);
 for(i=0; i<n;i++)
        if (dat[i].promedio<x)
           {
            printf("El nombre es "); puts(dat[i].nombre);
            printf("La matricula es ");puts(dat[i].matri);
            printf("El promedio es %.2f\n",dat[i].promedio);
           }
}
