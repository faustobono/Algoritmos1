#include <stdio.h>
#include <string.h>
struct secciones  {
char secc[5];
char desc[20];} ;
struct categoria  {
char cat[5];
float sueldo;} ;
struct datos  {
char name[20];
char secc[5];
char cat[5];} ;

void cargatabla(struct secciones tabla_s[7], int *ds);
void cargatablab(struct categoria tabla_c[7], int *dc);
void muestras(struct secciones tabla_s[], int ds);
void muestra(struct categoria tabla_c[], int dc);
void puntoa(struct secciones tabla_s[], int ds, int *v[]);

void main(){
struct secciones tabla_s[7];
struct categoria tabla_c[7];
struct datos r;
int n, ds,dc,vs[10]={0},i;
float vc[4]={0};
FILE *a;
 cargatabla(tabla_s, &ds);
 cargatablab(tabla_c, &dc);
 muestras(tabla_s,ds);
 muestra(tabla_c, dc);
  a= fopen("archdatos","rb");
  fread(&r,sizeof(struct datos), 1,a);
   while(!feof(a)){
     for(i=0;i<ds;i++)
     if(!strcmp(tabla_s[i].secc,r.secc))
       (vs[i])++;
     for (i=0;i<dc;i++)
         if (!strcmp(tabla_c[i].cat,r.cat))
            vc[i]+=tabla_c[i].sueldo;
    fread(&r,sizeof(struct datos), 1,a);
   }
   printf("\n");
    for(i=0;i<ds;i++)
     {printf("\nSECCION      DESCRIPCION        EMPLEADOS\n");
      printf("%s         %s           %d",tabla_s[i].secc,tabla_s[i].desc,vs[i]);}
  for(i=0;i<dc;i++){
     printf("\nCATEGORIA  SUELDO\n");
     printf("%s       %.2f",tabla_c[i].cat,vc[i]);
   }
fclose(a);
}

void cargatabla(struct secciones tabla_s[7], int *ds){
 FILE *secciones;
 *ds=0;
 secciones=fopen("archsecc","rb");
 fread(&tabla_s[0],sizeof(struct secciones), 1, secciones);
  while (! feof(secciones)) {
 (*ds)++;
 fread(&tabla_s[*ds],sizeof (struct secciones),1,secciones);
 }
fclose(secciones); }
void cargatablab(struct categoria tabla_c[7], int *dc){
 FILE *categ;
 *dc=0;
 categ=fopen("archcat","rb");
 fread(&tabla_c[0],sizeof(struct categoria), 1, categ);
 while (! feof(categ)) {
 (*dc)++;
 fread(&tabla_c[*dc],sizeof (struct categoria),1,categ);
 }
fclose(categ); }
void muestras(struct secciones tabla_s[], int ds)
{
  int i;
  for (i=0;i<ds;i++)
  {printf("\nLa categoria: ");
   puts(tabla_s[i].secc);
    printf("\nLa descripcion correspondiente es: ");
    puts(tabla_s[i].desc);
  }

}
void muestra(struct categoria tabla_c[], int dc)
{
  int i;
  for (i=0;i<dc;i++)
  {printf("\nLa categoria: %s",tabla_c[i].cat);
    printf("\nEl sueldo correspondiente es: %.2f",tabla_c[i].sueldo);
  }

}
