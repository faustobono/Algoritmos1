#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"

int main(){
 TPILA pila;
 TELEMENTOP n,aux;
 iniciap(&pila);
 int s;
 while((n=getchar())!='\n') {
    if( n<'0' || n>'9')
        ponep(&pila,n);
    else{
        s = n - '0';
        while(s-- && !vaciap(pila))
        sacap(&pila,&aux);}
 }

    while(!vaciap(pila)){
        sacap(&pila,&n);
        putchar(n);
    }



 return 0;
 }
