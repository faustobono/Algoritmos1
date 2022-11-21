/*#include <stdio.h>
struct datos  {
	   char secc[5];
	   char desc[20];} ;
/void main(){
struct datos r;
int n;
FILE *a;
a= fopen("archsecc","wb");
scanf("%d",&n);
while(n--) {
     printf(" Ingrese seccion ");
     fflush(stdin);
	gets(r.secc);
	printf(" Ingrese descripcion ");fflush(stdin);
	gets(r.desc);fflush(stdin);
	printf("\n");
	fwrite(&r, sizeof(struct datos), 1,a);
	  }
fclose(a);
a= fopen("archsecc","rb");
fread(&r,sizeof(struct datos), 1,a);
while(!feof(a)) {
	printf("%s %s\n",r.secc, r.desc);
	fread(&r,sizeof(struct datos), 1,a);
      }
fclose(a);}*/

