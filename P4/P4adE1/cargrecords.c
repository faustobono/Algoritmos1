
/*#include <stdio.h>
struct records {
	   char codep[6];
	   char deporte[14];
	   int minrec;} ;
void main(){
struct records r;
FILE *archivo;
FILE *a;
a=fopen("archivorecord.txt","rt");
archivo= fopen("archrecord.dat","wb");
fscanf(a,"%s %s %d",r.codep,r.deporte,&r.minrec);
while(!feof(a)) {
    fwrite(&r, sizeof(struct records), 1,archivo);
	fscanf(a,"%s %s %d",r.codep, r.deporte, &r.minrec);
	  }
fclose(a);
fclose(archivo);
archivo= fopen("archrecord.dat","rb");
fread(&r,sizeof(struct records), 1,archivo);
while(!feof(archivo)) {
	printf("%s %s  %d\n",r.codep, r.deporte, r.minrec);
	fread(&r,sizeof(struct records), 1,archivo);
      }
fclose(archivo);}*/
