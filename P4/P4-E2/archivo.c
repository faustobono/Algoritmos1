/*#include <stdio.h>
struct cliente  {
	   char tarjeta[7];
	   float gastado;
	   int cuota;} ;
void main(){
struct cliente r;
FILE *a;
FILE *archivo;

a= fopen("archtar.txt","rt");
archivo=fopen("archbinari.dat","wb");
if(a==NULL)
    printf("No existe");
   fscanf(a,"%s %f %d",r.tarjeta, &r.gastado, &r.cuota);
   while(!feof(a)) {
	fwrite(&r, sizeof(struct cliente), 1,archivo);
	fscanf(a,"%s %f %d",r.tarjeta, &r.gastado, &r.cuota);
	  }
fclose(a);
fclose(archivo);

archivo=fopen("archbinari.dat","rb");
fread(&r,sizeof(struct cliente), 1,archivo);
while(!feof(archivo)) {
	printf("%s %.2f  %d\n",r.tarjeta, r.gastado, r.cuota);
	fread(&r,sizeof(struct cliente), 1,archivo);
      }
fclose(archivo);}*/
