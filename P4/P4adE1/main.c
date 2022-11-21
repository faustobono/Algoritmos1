#include <stdio.h>
#include <string.h>
struct records {
	   char codep[6];
	   char deporte[14];
	   int minrec;} ;
struct resultado  {
	   char coddep[6];
	   int minutos;} ;

void cargatabla(struct records v[], int *dn);
void muestratabla(struct records v[],int dn);

void main(){
struct records r,v[10];
struct resultado re;
int dn,contd,pos,supr;
float sum;
char coddepact[6];
FILE *a;
cargatabla(v,&dn);/*
muestratabla(v,dn);*/
a=fopen("archcomp.dat","rb");

fread(&re,sizeof (struct resultado),1,a);
 while(!feof(a)){
     contd=0; sum=0; supr=0;
    strcpy(coddepact,re.coddep);
    while(!feof(a)&& !strcmp(coddepact,re.coddep)){
        contd++;
        sum+=re.minutos;
             pos=obtieneindice(v,coddepact);
             if(v[pos].minrec>re.minutos)
                supr++;
     fread(&re,sizeof (struct resultado),1,a);
    }
  printf("\n%s",coddepact);
  printf("\nDEPORTISTAS %d",contd);
  printf("\nSUPERO EL RECORD %d",supr);
  printf("\nPROMEDIO %.2f",sum/contd);
  printf("\n");
 }

fclose(a);
}
void cargatabla(struct records v[6], int *n){
 FILE *a;
*n=0;
 a=fopen("archrecord.dat","rb");
  fread(&v[0],sizeof (struct records),1,a);
  while(!feof(a)){
  (*n)++;
  fread(&v[*n],sizeof(struct records),1,a);
  }
fclose(a);
}
void muestratabla(struct records v[6],int n){
int i;
for(i=0;i<n;i++){
    printf("\nEl codigo del deporte es %s",v[i].codep);
    printf("\nEl nombre es %s",v[i].deporte);
    printf("\nY los minutos son %d",v[i].minrec);
}
}
int obtieneindice(struct records v[], char cod[]){
 int i=0;
 while (strcmp(cod,v[i].codep))
 i++;
 return i; }
