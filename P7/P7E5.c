#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tdacola.h"
#include "tdapila.h"

int main(void)
{   TELEMENTOC n;
    TELEMENTOP m;
    TCOLA cola;
    TPILA pila;
    int cont=0, igual=0, k;
    iniciac(&cola);
    iniciap(&pila);
    while((n=getchar())!='\n')
          {cont++;
          ponec(&cola, n);
          }
          k=cont/2;
          if ((cont%2)==0){
              while(k--){
                    sacac(&cola, &n);
                    ponep(&pila,n);}
                           }
           else{
               while(k--)
               {
                sacac(&cola,&n);
                ponep(&pila,n);
               }
               sacac(&cola,&n);}
          while(!vaciac(cola)&&!vaciap(pila))
          {
           sacac(&cola, &n);
           sacap(&pila,&m);
           if (n==m)
            igual++;
          }
          k=cont/2;
          if (igual==k){
            printf("son palindromo");}
            else{
            printf("no son paindromo");}

    return 0;
}
