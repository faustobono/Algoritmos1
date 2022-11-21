#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nodo{
     char ciudad[10];
     int mujeres;
     int hombres;
     struct nodo *sig;}NODO;
typedef NODO *TLISTA;

void cargalista(TLISTA *pl);
void muestra(TLISTA lista);
void puntoayb(TLISTA lista,float *promujeres);
void puntoc(TLISTA lista,float promujeres);
void puntod(TLISTA lista);
int main(void){
    float promujeres;
    TLISTA lista;
cargalista(&lista);
muestra(lista);
puntoayb(lista,&promujeres);
puntoc(lista,promujeres);
puntod(lista);
return 0;
}
void cargalista(TLISTA *pl){
TLISTA nuevo;
FILE *arch;
arch=fopen("archivo.txt","r");
char city[10];
int h,m,i;
*pl=NULL;
fscanf(arch,"%s %d %d",city,&m,&h);
 while(!feof(arch)){
     nuevo=(TLISTA)malloc(sizeof(NODO));
      strcpy(nuevo->ciudad,city);
      nuevo->mujeres=m;
      nuevo->hombres=h;
      fscanf(arch,"%s %d %d",city,&m, &h);
     nuevo->sig=*pl;
     *pl=nuevo;
 }
}
void muestra(TLISTA lista){
  while(lista!=NULL){
     printf("\n %s mujeres %d y hombre %d ",lista->ciudad,lista->mujeres,lista->hombres);
     lista=lista->sig;
  }

}

void puntoayb(TLISTA lista,float *promujeres){
   int cont=0,max,contciudades=0;
   float sum=0;
   char maxnom[10];
 while(lista!=NULL){
        contciudades++;
 sum+=lista->mujeres;
  if(lista->hombres>lista->mujeres)
    cont++;
    if((lista->hombres+lista->mujeres)>max){
        max=lista->hombres+lista->mujeres;
        strcpy(maxnom,lista->ciudad);
    }
 lista=lista->sig;
 }
 printf("\nLa cantidad de ciudades en las q hay mayor porc de hombres es %d ",cont);
 printf("\nLa ciudad con mas poblacion es %s",maxnom);
 *promujeres=sum/contciudades;
}
void puntoc(TLISTA lista,float promujeres){
    float cont=0,contto=0;
 while(lista!=NULL){
    if(lista->mujeres>promujeres)
        cont++;
        contto++;
 lista=lista->sig;
 }
 printf("\nEl porcentaje es %.2f",cont*100/contto);
}
void puntod(TLISTA lista){
 TLISTA act;
 int contsi=0,cont=0;
 act=lista;
 act=lista->sig;
 while(act!=NULL){
        cont++;
 if(strcmp(lista->ciudad,act->ciudad)<0)
    contsi++;
 lista=lista->sig;
 act=act->sig;
 }
 if(cont==contsi)
    printf("\nEstan ordenados alfabeticamente");
    else
        printf("\nNo estan ordenadas");
}
