#include <stdio.h>
#include <string.h>
struct datos  {
	   char proye[5];
	   char empleado[10];
	   int semana;
	   int hstrab;};
struct horasp  {
	   char proy[5];
	   int horas;} ;

void cargatabla(struct horasp v[],int *dn);
void muestratabla(struct horasp v[],int dn);
int obtienein(struct horasp v[],char proye[]);

void main(void){
int dn,sumhe,max,sumhp,pos,min;
float porcen;
char proyact[5],mindes[5],empact[10],empmax[10];
struct datos r;
struct horasp rh,v[10];
FILE *a;

cargatabla(v,&dn);
muestratabla(v,dn);
a=fopen("archtrabajo.dat","rb");
min=999;
fread(&r,sizeof(struct datos),1,a);
 while(!feof(a)){
max=0;sumhp=0;
 strcpy(proyact,r.proye);
    while(!feof(a)&& !strcmp(proyact,r.proye)){
     sumhe=0;

     strcpy(empact,r.empleado);
       while(!feof(a)&& !strcmp(proyact,r.proye)&&!strcmp(empact,r.empleado)){
          sumhe+=r.hstrab;

        fread(&r,sizeof(struct datos),1,a);
       }
       sumhp+=sumhe;
      if(sumhe>max){
        max=sumhe;
        strcpy(empmax,empact);
      }
    }
    pos=obtienein(v,proyact);
    if(v[pos].horas<sumhp)
     porcen=((float)(v[pos].horas-sumhp)/v[pos].horas)*-1;
    else
     porcen=0;
     if(porcen<=min){
        min=porcen;
        strcpy(mindes,r.proye);
      }
  printf("\nPROYECTO %s",proyact);
  printf("\nEl empleado que mas trabajo fue %s con %d horas trabajadas",empmax,max);
  printf("\nSe trabajo %d horas, %d horas estimadas un desvio de %.2f",sumhp,v[pos].horas,porcen);
  printf("\n");
 }
 printf("\nEl proyecto con menos desvio es %s",mindes);
 fclose(a);
}

void cargatabla(struct horasp v[],int *dn){
FILE *a;
*dn=0;
a=fopen("proyhs.dat","rb");
fread(&v[0],sizeof (struct horasp),1,a);
 while(!feof(a)){
 (*dn)++;
    fread(&v[*dn],sizeof(struct horasp),1,a);
 }
fclose(a);
}
void muestratabla(struct horasp v[],int dn){
int i;
for (i=0;i<dn;i++)
    printf("\n%s %d",v[i].proy,v[i].horas);

}
int obtienein(struct horasp v[],char proye[]){
int i;
 i=0;
 while(strcmp(proye,v[i].proy))
    i++;
 return i;
 }
