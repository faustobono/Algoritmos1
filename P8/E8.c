#include<stdio.h>
#include <stdlib.h>
#include <string.h>


typedef  struct nodolis{
    char carac;
    struct nodolis *sig;}NODOL;
typedef  NODOL* TLISTA;
void cargalista(TLISTA* pl);
void muestra(TLISTA lista);
void calcula(TLISTA *lista);
int main(void){
    TLISTA lista;
cargalista(&lista);
calcula(&lista);
muestra(lista);
return 0;}
void cargalista(TLISTA *pl) {
 TLISTA  aux;
 FILE *arch;
 char carac;


 *pl= NULL;
 arch = fopen("archlista.txt","rt");
 if(arch == NULL) {
    printf("archivo lista no existe!");
    return;
 }
 while (fscanf(arch,"%c\n", &carac)!=EOF) {

    if(*pl == NULL) {
      *pl = (TLISTA)malloc(sizeof(NODOL));
      aux = (*pl);
    }
    else {
      aux->sig = (TLISTA)malloc(sizeof(NODOL));
      aux = aux->sig;
    }
    aux->carac=carac;
    aux->sig = NULL;
 }
 fclose(arch);
}
void calcula(TLISTA *pl){
    char car;
    int cont=1;
    TLISTA act=*pl,ant=NULL;
printf("\nIngrese caracter");
scanf("%c",&car);
 while(act!=NULL){
  if(act->carac!=car){
  ant=act;
  act=act->sig;
  }else{
      if(cont==1){
        ant=act;
        act=act->sig;
        cont--;
      }else{
      ant->sig=act->sig;
      free(act);
      act=ant->sig;
      }
   }
 }
}
void muestra(TLISTA lista){
while(lista!=NULL){
     printf(" %c",lista->carac);
    lista=lista->sig;
}
}
