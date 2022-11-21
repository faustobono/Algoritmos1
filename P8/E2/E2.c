#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tdacola.h"
typedef struct nodo{
 char palabra[5];
 struct nodo *sig;}NODO;
 typedef NODO *TLISTA;

 void leecola(TCOLA *cola);
 void muestraco(TCOLA *cola);
 void calcula(TLISTA *lista, char palabra[]);
 void muestralista(TLISTA lista);
 void main(){
     TCOLA cola;
     TELEMENTOC c;
     TLISTA lista;
     char pala[5];
 iniciac(&cola);
 leecola(&cola);
 lista=NULL;
 /*muestraco(&cola);*/
 while(!vaciac(cola)){
 sacac(&cola,&c);
 calcula(&lista, c.cadena);
 }
 muestralista(lista);
return 0;
 }
 void leecola(TCOLA *cola){
 TELEMENTOC c;
  while(gets(c.cadena)!=NULL)
   ponec(cola,c);
  }
 void muestraco(TCOLA *cola){
 TELEMENTOC c;
 while(!vaciac(*cola))
    {
       sacac(cola,&c);
       printf("%s",c);
    }
 }

 void calcula(TLISTA *lista,char cadena[]){
 TLISTA nuevo, ant=NULL,act;
  act=*lista;
  while(act!=NULL&&strcmp(cadena,act->palabra)>0){
     ant=act;act=act->sig;
  }
   // if (strcmp(cadena,act->palabra)){
        nuevo=(TLISTA)malloc(sizeof(NODO));
        strcpy(nuevo->palabra,cadena);
        nuevo->sig=act;
        if(ant==NULL)
         *lista=nuevo;
        else
         ant->sig=nuevo;

      //  }
 }
 void muestralista(TLISTA lista){
 while(lista!=NULL){
    printf(" %s ",lista->palabra);
 lista=lista->sig;
 }
 }
