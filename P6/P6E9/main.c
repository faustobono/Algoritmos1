#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
int main()
{  TPILA pila1, pila2;
   TELEMENTOP n,j;
   int m=0,i,g=0;
   iniciap(&pila1);iniciap(&pila2);
   while((n=getchar())!='\n'){
    ponep(&pila1,n);
    m++;
   }
   for(i=0;i<(m/2);i++){
    sacap(&pila1,&n);
    ponep(&pila2,n);
   }
   if((m%2)!=0)
     sacap(&pila1,&n);
   while(!vaciap(pila1)&&!vaciap(pila2)){
    sacap(&pila1,&n);sacap(&pila2,&j);
    if(j==n)
        g++;
   }
   if(g==(m/2))
    printf("\nSon palindroma");
   else
    printf("\nNo son palindroma");

    return 0;
}
