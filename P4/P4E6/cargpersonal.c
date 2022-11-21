/*#include <stdio.h>
struct personal  {
	   char legajo[4];
	   char nombre[16];
	   char cuil[12];} ;
void main(){
struct personal r;
int n;
FILE *a;
FILE *arch;

a= fopen("archtxt.txt","rt");
arch=fopen("personales.dat","wb");
fscanf(a,"%s %s %s",r.legajo,r.nombre,r.cuil);
while(!feof(a)) {
	fwrite(&r, sizeof(struct personal), 1,arch);
	fscanf(a,"%s %s %s",r.legajo, r.nombre, r.cuil);
	  }
fclose(arch);
fclose(a);
arch= fopen("personales.dat","rb");
fread(&r,sizeof(struct personal), 1,arch);
while(!feof(arch)) {
	printf("%s %s  %s\n",r.legajo, r.nombre, r.cuil);
	fread(&r,sizeof(struct personal), 1,arch);
      }
fclose(arch);}*/

