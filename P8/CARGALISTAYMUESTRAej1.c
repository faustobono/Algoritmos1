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
int main(void){
    TLISTA lista;
cargalista(&lista);
muestra(lista);
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
