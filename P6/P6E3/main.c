#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"

int main(){
    int  N;
 TPILA pila;
 TELEMENTOP n;
 iniciap(&pila);
 while((n=getchar())!='\n')
    ponep(&pila,n);
    printf("\nIngresar N ");
    scanf("%d",&N);
 while(N-- && !vaciap(pila)){
        sacap(&pila,&n);
    putchar(n);}
    if(N>0)
        printf("\nLa pila se vacio antes de completar los N numeros ");

 return 0;
 }
