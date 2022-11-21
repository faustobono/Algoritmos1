#include <stdio.h>
#include <string.h>
struct   empleado{
	   char sucursal[14];
	   char seccion[14];
	   char nombre[20];
	   float sueldo;};

void main(){
FILE *a;
struct empleado r;
char sucuract[14],seccact[14];
float tots,totsucu,todo;
a=fopen("archempleado.dat","rb");
fread(&r,sizeof (struct empleado),1,a);
todo=0;
  while(!feof(a)){
        totsucu=0;
    printf("\nSUCURSAL\n %s",r.sucursal);
    strcpy(sucuract,r.sucursal);
    while(!feof(a)&& !strcmp(sucuract,r.sucursal)){
          tots=0;
      strcpy(seccact,r.seccion);
       while(!feof(a)&& !strcmp(sucuract,r.sucursal)&& !strcmp(seccact,r.seccion)){
        tots+=r.sueldo;

       fread(&r,sizeof (struct empleado),1,a);
       }
       totsucu+=tots;
       printf("\nSECCION\n %s  %.2f",seccact,tots);

    }
    printf("\nPARA LA SUCURSAL %s EL TOTAL ES %.2f",r.sucursal,totsucu);
   todo+=totsucu;
  }
  printf("\nTOTAL DE TODO %.2f",todo);


fclose(a);
}
