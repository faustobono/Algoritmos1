/*#include <stdio.h>
struct datos  {
	   char name[20];
	   char secc[5];
	   char cat[5];} ;
void main(){
struct datos r;
int n;
FILE *a;
a= fopen("archdatos","wb");
scanf("%d",&n);
while(n--) {
      printf("ingrese nombre ");
	fflush(stdin);
	gets(r.name);fflush(stdin);
     printf(" Ingrese seccion ");
	scanf("%s",r.secc);fflush(stdin);
	printf(" Ingrese categoria ");
	scanf("%s",r.cat);fflush(stdin);
	printf("\n");
	fwrite(&r, sizeof(struct datos), 1,a);
	  }
fclose(a);
a= fopen("archdatos","rb");
fread(&r,sizeof(struct datos), 1,a);
while(!feof(a)) {
    puts(r.name);fflush(stdin);
	printf("%s %s\n",r.secc, r.cat);
	fread(&r,sizeof(struct datos), 1,a);
      }
fclose(a);}*/
