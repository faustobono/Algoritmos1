#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
#include "tdacola.h"
int main()
{  TPILA pila;TELEMENTOP n;
   TCOLA cola; TELEMENTOC c;
   int cont;
    iniciac(&cola);
    iniciap(&pila);

    while((n=getchar())!='\n')
        ponep(&pila,n);
       printf("\n");
    while(scanf("%d",&c)!=EOF)
        ponec(&cola,c);

    consultac(cola,&c);
     while(!vaciac(cola) && c>=0){
            cont=0;
            sacac(&cola,&c);
       for(;c>0;c--){
         if(!vaciap(pila))
            sacap(&pila,&n);
         else{
                while(c>0){
            ponep(&pila,'*');
            cont--;
            c--;}
            }
       }

     if(cont<0)
        ponec(&cola,cont);
     consultac(cola,&c);
     }

     while(!vaciap(pila)){
        sacap(&pila,&n);
        printf("%c",n);
     }
     printf("\n");
     while(!vaciac(cola)){
        sacac(&cola,&c);
        printf("%d",c);
     }

    return 0;
}
