/*#include <stdio.h>
struct   empleado{
	   char sucursal[14];
	   char seccion[14];
	   char nombre[20];
	   float sueldo;} ;
void main(){
struct empleado r;
FILE *a;
FILE *archivo;

a= fopen("arch_pago.txt","rt");
archivo=fopen("archempleado.dat","wb");
if(a==NULL)
    printf("No existe");
   fscanf(a,"%s %s %s %f",r.sucursal,r.seccion,r.nombre ,&r.sueldo);
   while(!feof(a)) {
	fwrite(&r, sizeof(struct empleado), 1,archivo);
	fscanf(a,"%s %s %s %f",r.sucursal,r.seccion,r.nombre ,&r.sueldo);
	  }
fclose(a);
fclose(archivo);

archivo=fopen("archempleado.dat","rb");
fread(&r,sizeof(struct empleado), 1,archivo);
while(!feof(archivo)) {
	printf("%s %s %s %.2f\n",r.sucursal,r.seccion,r.nombre, r.sueldo);
	fread(&r,sizeof(struct empleado), 1,archivo);
      }
fclose(archivo);}*/
