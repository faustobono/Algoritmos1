#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 3
typedef  struct nodolis{
    int numero;
    struct nodolis *sig;}NODOL;
typedef  NODOL* TLISTA;
 void cargalista(TLISTA *pl);
 void muestra(TLISTA lista);
 void calcula(TLISTA *pl,int vec[]);
 int main(void){
 TLISTA lista,ant=NULL,nuevo;
 int vec[n]={1,15,16};
 cargalista(&lista);
 calcula(&lista,vec);

 muestra(lista);
 return 0;
 }

void cargalista(TLISTA *pl) {
 TLISTA  aux;
 FILE * arch;
 int numero;


 *pl= NULL;
 arch = fopen("archlista.txt","rt");
 if(arch == NULL) {
    printf("archivo lista no existe!");
    return;
 }
 while (fscanf(arch,"%d\n",&numero)!=NULL) {
    if(*pl == NULL) {
      *pl = (TLISTA)malloc(sizeof(NODOL));
      aux = (*pl);
    }
    else {
      aux->sig = (TLISTA)malloc(sizeof(NODOL));
      aux = aux->sig;
    }
    aux->numero= numero;
    aux->sig = NULL;
 }
 fclose(arch);
}
void muestra(TLISTA lista){
    if (lista == NULL)
        printf("nul");
 while(lista!=NULL){
 printf(" %d",lista->numero);
 lista=lista->sig;
 }
}

void calcula(TLISTA *pl,int vec[]){
    TLISTA lista=*pl,nuevo,ant=NULL;
    int m;
    m=0;
while( m<n){

    if(lista!=NULL&&lista->numero<(vec[m])){
        ant=lista;
        if(lista->sig==NULL){
            nuevo=(TLISTA)malloc(sizeof(NODOL));
            nuevo->numero=vec[m];
            lista->sig=nuevo;
            nuevo->sig=NULL;
            lista=nuevo->sig;
            lista=nuevo;
            m++;
        }else
        lista=lista->sig;
    }else
    if(lista->numero==vec[m]){
        ant=lista;
        m++;
        lista=lista->sig;
    }
    else{
        nuevo=(TLISTA)malloc(sizeof(NODOL));
        nuevo->numero=vec[m];
        nuevo->sig=lista;
        if (ant==NULL)
           *pl=nuevo;
         else
           ant->sig=nuevo;
        lista=nuevo;
        ant=nuevo;
        m++;
    }

  }
}
