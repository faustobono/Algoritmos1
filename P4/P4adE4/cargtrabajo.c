/*#include <stdio.h>
struct datos  {
	   char proy[5];
	   char empleado[10];
	   int semana;
	   int hstrab;} ;
void main(){
struct datos r;
int n;
FILE *a;
FILE *arch;

a=fopen("archtxt.txt","rt");
arch=fopen("archtrabajo.dat","wb");
	fscanf(a,"%s %s %d %d",r.proy, r.empleado, &r.semana,&r.hstrab);
while(!feof(a)) {
	    fwrite(&r, sizeof(struct datos), 1,arch);
		fscanf(a,"%s %s %d %d",r.proy, r.empleado, &r.semana,&r.hstrab);
	  }
fclose(a);
fclose(arch);

arch= fopen("archtrabajo.dat","rb");
fread(&r,sizeof(struct datos), 1,arch);
while(!feof(arch)) {
	printf("%s %s  %d %d\n",r.proy, r.empleado, r.semana,r.hstrab);
	fread(&r,sizeof(struct datos), 1,arch);
      }
fclose(arch);}*/
