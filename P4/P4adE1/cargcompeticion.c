/*#include <stdio.h>
struct resultado  {
	   char coddep[6];
	   int minutos;} ;
void main(){
struct resultado r;
FILE *arch;
FILE *a;
a=fopen("archivo.txt","rt");
arch=fopen("archcomp.dat","wb");
fscanf(a,"%s %d",r.coddep,&r.minutos);
while(!feof(a)) {
    fwrite(&r, sizeof(struct resultado), 1,arch);
	fscanf(a,"%s %d",r.coddep,&r.minutos);
	}
fclose(a);
fclose(arch);
arch= fopen("archcomp.dat","rb");
fread(&r,sizeof(struct resultado), 1,arch);
while(!feof(arch)) {
	printf("%s %d\n",r.coddep, r.minutos);
	fread(&r,sizeof(struct resultado), 1,arch);
      }
fclose(arch);}*/
