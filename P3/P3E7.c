#include <stdio.h>
#include <string.h>
#include <conio.h>
struct datos{
    char nombre[10];
    char matri[6];
    float promedio;
};
void lee(struct datos *dat);
void escribe(struct datos dat);
int main(){
struct datos dat;
    lee(&dat);
    escribe(dat);
}
void lee(struct datos *dat)
{
 printf("\nIngrese nomre del alumno ");gets((*dat).nombre);
 printf("\nIngres matricula del alumno ");gets((*dat).matri);
 printf("\nIngrese promedio del alum ");scanf("%f",&(*dat).promedio);
}
void escribe(struct datos dat)
{
printf("\nEl nombre es "); puts(dat.nombre);
printf("\nLa matricula es ");puts(dat.matri);
printf("\nEl promedio es %.2f",dat.promedio);
}
