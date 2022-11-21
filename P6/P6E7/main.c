#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
int main()
{ TELEMENTOP n,m,d;
 TPILA pila,pila2,piaux;
 iniciap(&piaux);
 iniciap(&pila);
 iniciap(&pila2);
 while((n=getchar())!='\n')
    ponep(&pila,n);
    while((m=getchar())!='\n')
     ponep(&pila2,m);


 while(!vaciap(pila)&&!vaciap(pila2))
 {
     consultap(pila,&n);
     consultap(pila2,&m);
     if(n>m){
        sacap(&pila,&n);
        ponep(&piaux,n);}
        else{
        sacap(&pila2,&m);
        ponep(&piaux,m);}
      }

     if (!vaciap(pila)){
        sacap(&pila,&n);
        ponep(&piaux,n);}
        else{
            sacap(&pila2,&m);
            ponep(&piaux,m);}

  while(!vaciap(piaux)){
    sacap(&piaux,&d);
    printf("\n%c",d);
  }
    return 0;
}
