#include <stdio.h>
#include <string.h>
struct personal  {
	   char legajo[4];
	   char nombre[16];
	   char cuil[12];} ;

void main(){
char baja[4];
FILE *personales, *bajas, *actualizado;
struct personal rp;

personales=fopen("personales.dat","rb");
bajas=fopen("archivobajas.dat","rb");
actualizado=fopen("actualizado.dat","wb");

fread(&rp,sizeof (struct personal),1,personales);
fread(baja,4,1,bajas);
   while(!feof(personales)|| !feof(bajas))
        if(strcmp(rp.legajo,baja)<0){
            fwrite(&rp,sizeof(struct personal),1,actualizado);
            fread(&rp,sizeof (struct personal),1,personales);
        }else
        if(strcmp(rp.legajo,baja)>0){
             printf("BAJA NO EXISTENTE %s\n",baja);
            fread(baja,4,1,bajas);}
        else{
            fread(&rp,sizeof (struct personal),1,personales);
            fread(baja,4,1,bajas);
         }

fclose(personales);fclose(bajas);fclose(actualizado);

actualizado=fopen("actualizado.dat","rb");
fread(&rp,sizeof(struct personal), 1,actualizado);
while(!feof(actualizado)) {
	printf("%s %s  %s\n",rp.legajo, rp.nombre, rp.cuil);
	fread(&rp,sizeof(struct personal), 1,actualizado);
      }
fclose(actualizado);}


