#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
int numero;
struct nodo *sig;}NODO;
typedef NODO *TLISTA;

void cargalista(TLISTA *pl);
void muestralista(TLISTA lista3);
int main(void)
{   TLISTA lista1, lista2,lista3,aux;
printf("ingrese lista 1 ");
    cargalista(&lista1);
    fflush(stdin);
printf("\ningrese lista 2");
    cargalista(&lista2);
     while(lista1!=NULL || lista2!=NULL){
       if (lista2==NULL || lista1!=NULL&&lista1->numero<lista2->numero){
           aux=lista3;
           lista3=lista1;
           lista1=lista1->sig;
           lista3->sig=aux;
       }else
       if(lista1==NULL || lista2->numero<lista1->numero){
        aux=lista3;
        lista3=lista2;
        lista2=lista2->sig;
        lista3->sig=aux;
       }else{
       aux=lista3;
       lista3=lista1;
       lista1=lista1->sig;
       lista3->sig=aux;
       aux=lista2;
       lista2=lista2->sig;
       free(aux);}
    }

    printf("\nLa lista  es: ");
    muestralista(lista3);

    return 0;
}
void cargalista(TLISTA *pl){
TLISTA nuevo;
int num;
*pl=NULL;
 while(scanf("%d",&num)){
    nuevo=(TLISTA)malloc(sizeof(NODO));
    nuevo->numero=num;
    nuevo->sig=*pl;
    *pl=nuevo;

 }

}
void muestralista(TLISTA lista){
 while(lista->sig!=NULL){
    printf(" %d",lista->numero);
 lista=lista->sig;
 }
}
