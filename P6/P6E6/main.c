#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
int main()
{ TELEMENTOP n;
 TPILA pila,piaux;

 iniciap(&pila);
 iniciap(&piaux);
 while((n=getchar())!='\n')
    ponep(&pila,n);
 while(!vaciap(pila))
 {
     sacap(&pila,&n);
     ponep(&piaux,n);
      }
  while(!vaciap(piaux)){
    sacap(&piaux,&n);
    printf("\n%c",n);
  }
    return 0;
}
