/*#include <stdio.h>
struct datos  {
	   char cat[5];
	   float sueldo;} ;
void main(){
struct datos r;
int n;
FILE *a;
a= fopen("archcat","wb");
scanf("%d",&n);
while(n--) {
     printf("\ningrese categoria: ");fflush(stdin);
	gets(r.cat);fflush(stdin);
	printf(" Ingrese sueldo correspondiente a la cat ");
	scanf("%f",&r.sueldo);
	fwrite(&r, sizeof(struct datos), 1,a);
	  }
fclose(a);
a= fopen("archcat","rb");
fread(&r,sizeof(struct datos), 1,a);
while(!feof(a)) {
	puts(r.cat);
	printf("%.2f\n",r.sueldo);
	fread(&r,sizeof(struct datos), 1,a);
      }
fclose(a);
}*/
