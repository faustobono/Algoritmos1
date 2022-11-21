#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef  struct nodolis{
    int numero;
    struct nodolis *sig;}NODOL;
typedef  NODOL* TLISTA;
void cargalista(TLISTA *pl);

void muestra(TLISTA lista);
int main(void){
TLISTA lista;
cargalista(&lista);
elimina(&lista);
muestra(lista);
return 0;
}
void elimina(TLISTA *pl){
TLISTA lista=*pl;
 while(lista->sig!=NULL){
     if (lista->numero==(lista->sig->numero)){
       if ((lista->sig->sig)!=NULL)
        lista->sig=lista->sig->sig;
        else
            lista->sig=NULL;
     }
     else
        lista=lista->sig;
 }




}
void cargalista(TLISTA *pl) {
 TLISTA  aux;
 FILE *arch;

 int numero;

 *pl= NULL;
 arch = fopen("archlista.txt","rt");
 if(arch == NULL) {
    printf("archivo lista no existe!");
    return;
 }
 while (fscanf(arch,"%d\n", &numero)!=EOF) {
    if(*pl == NULL) {
      *pl = (TLISTA)malloc(sizeof(NODOL));
      aux = (*pl);
    }
    else {
      aux->sig = (TLISTA)malloc(sizeof(NODOL));
      aux = aux->sig;
    }
    aux->numero=numero;
    aux->sig = NULL;
 }
 fclose(arch);
}

void muestra(TLISTA lista){
while(lista!=NULL){
    printf(" %d",lista->numero);
lista=lista->sig;
}
}
