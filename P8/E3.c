#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct nodo{
int numero;
struct nodo *sig;}NODO;
typedef NODO *TLISTA;

void cargalis(TLISTA *pl);
void muestra(TLISTA lista);
void inicialista(TLISTA *lista,TLISTA *lpar,TLISTA *limpar);
int main(void){
TLISTA lista,lpar,limpar,aux,aux2;
inicialista(&lista,&lpar,&limpar);
cargalis(&lista);
muestra(lista);

 while(lista!=NULL){
  if((lista->numero % 2)==0){
      if(lpar==NULL){
        lpar=(TLISTA)malloc(sizeof(NODO));
        lpar->numero=lista->numero;
        lpar->sig=NULL;
        aux=lpar;
      }else{
      aux->sig=(TLISTA)malloc(sizeof(NODO));
      aux=aux->sig;
      aux->numero=lista->numero;
      aux->sig=NULL;}
    }
  else{

      aux2=(TLISTA)malloc(sizeof(NODO));
      aux2->numero=lista->numero;
      aux2->sig=limpar;
      limpar=aux2;
    }
  lista=lista->sig;
 }
muestra(lpar);
muestra(limpar);
}
void inicialista(TLISTA *lista,TLISTA *lpar,TLISTA *limpar){

*lista=NULL;
*lpar=NULL;*limpar=NULL;
}
void cargalis(TLISTA *lista){
TLISTA nuevo;
int num;
*lista=NULL;
FILE *arch;
arch=fopen("archivo.txt","r");
fscanf(arch,"%d",&num);
 while(!feof(arch)){
 nuevo=(TLISTA)malloc(sizeof  (NODO));
    nuevo->numero=num;
    fscanf(arch,"%d",&num);
    nuevo->sig=*lista;
    *lista=nuevo;
 }
}
void muestra(TLISTA lista){
    printf("\n");
while(lista!=NULL){
    printf("%d ",lista->numero);
    lista=lista->sig;
}
}

