#include <stdio.h>
struct dato  {
	   char fecha[11];
	   char cod[3];
	   float dist;} ;
void main(){
struct dato r;
int n;
FILE *arch;
FILE *a;

a= fopen("txt.txt","rt");
arch=fopen("distancia.dat","wb");
fscanf(a,"%s %s %f",r.fecha, r.cod, &r.dist);
while(!feof(a)) {
        fwrite(&r, sizeof(struct dato), 1,arch);
	    fscanf(a,"%s %s %f",r.fecha, r.cod, &r.dist);
	  }
fclose(a);
fclose(arch);
arch= fopen("distancia.dat","rb");
fread(&r,sizeof(struct dato), 1,arch);
while(!feof(arch)) {
	printf("%s %s  %.2f\n",r.fecha, r.cod, r.dist);
	fread(&r,sizeof(struct dato), 1,arch);
      }
fclose(arch);}
