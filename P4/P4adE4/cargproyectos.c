#include <stdio.h>
struct horasp  {
	   char proy[5];
	   int horas;} ;
void main(){
struct horasp r;
FILE *a;
FILE *arch;
a=fopen("archivotxt.txt","rt");
arch=fopen("proyhs.dat","wb");

fscanf(a,"%s %d",r.proy, &r.horas);
while(!feof(a)) {
	fwrite(&r, sizeof(struct horasp), 1,arch);
	fscanf(a,"%s %d",r.proy, &r.horas);
	  }
fclose(a);
fclose(arch);

arch= fopen("proyhs.dat","rb");
fread(&r,sizeof(struct horasp), 1,arch);
while(!feof(arch)) {
	printf("%s %d\n",r.proy, r.horas);
	fread(&r,sizeof(struct horasp), 1,arch);
      }
fclose(arch);}
