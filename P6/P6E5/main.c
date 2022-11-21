#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"

int main(){
 TPILA pila,pila2,piaux,piaux2;
 TELEMENTOP n,m;
 iniciap(&pila);
 iniciap(&pila2);
 iniciap(&piaux);
 iniciap(&piaux2);
 int s=0,t=0;
 while((n=getchar())!='\n')
        ponep(&pila,n);
 while((m=getchar())!='\n')
        ponep(&pila2,m);
    while(!vaciap(pila)){
     sacap(&pila,&n);
     ponep(&piaux,n);
     s++;
    }
    while(!vaciap(pila2)){
     sacap(&pila2,&m);
     ponep(&piaux2,m);
     t++;
    }
    if(s>t)
     while(!vaciap(piaux)){
        sacap(&piaux,&n);
        putchar(n);
    }
    else{
    while(!vaciap(piaux2)){
        sacap(&piaux2,&m);
        putchar(m);}
    }



 return 0;
 }
