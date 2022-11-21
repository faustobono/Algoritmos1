/*#include <stdio.h>
struct info  {
	   char matricula[4];
	   int quimicall;
	   int fisicall;} ;
void main(){
struct info r;
FILE *arch;
FILE *a;
a=fopen("atxt.txt","rt");
arch=fopen("archinscriptos.dat","wb");
fscanf(a,"%s %d %d",r.matricula,&r.quimicall,&r.fisicall);
while(!feof(a)) {
    fwrite(&r, sizeof(struct info), 1,arch);
	fscanf(a,"%s %d %d",r.matricula,&r.quimicall,&r.fisicall);
	}
fclose(a);
fclose(arch);
arch= fopen("archinscriptos.dat","rb");
fread(&r,sizeof(struct info), 1,arch);
while(!feof(arch)) {
	printf("%s %d %d\n",r.matricula, r.quimicall,r.fisicall);
	fread(&r,sizeof(struct info), 1,arch);
      }
fclose(arch);}*/
