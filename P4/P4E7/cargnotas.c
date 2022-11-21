/*#include <stdio.h>
struct datos  {
	   char matricula[4];
	   int mate;
	   int fisica;
	   int quimica;} ;
void main(){
struct datos r;
FILE *arch;
FILE *a;

a= fopen("txt.txt","rt");
arch=fopen("archnotas.dat","wb");
fscanf(a,"%s %d %d %d",r.matricula,&r.mate,&r.fisica,&r.quimica);
while(!feof(a)) {
	    fwrite(&r, sizeof(struct datos), 1,arch);
		fscanf(a,"%s %d %d %d",r.matricula, &r.mate, &r.fisica,&r.quimica);
	  }
fclose(arch);
fclose(a);

arch= fopen("archnotas.dat","rb");
fread(&r,sizeof(struct datos), 1,arch);
while(!feof(arch)) {
	printf("%s %d %d %d\n",r.matricula, r.mate,r.fisica,r.quimica);
	fread(&r,sizeof(struct datos), 1,arch);
      }
fclose(arch);}*/
