#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
#define MAXPILA 20

int main(){
 TPILA pila;
 TELEMENTOP n;
 iniciap(&pila);
 while((n=getchar())!=EOF)
    ponep(&pila,n);
 while(!vaciap(pila)){
        sacap(&pila,&n);
    putchar(n);}

 }
