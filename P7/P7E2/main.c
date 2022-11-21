#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
#include "tdacola.h"
int main()
{ TCOLA cola;
  TPILA pila;
  TELEMENTOC c,max=-1,min=999,sum=0,ultimo;
  TELEMENTOP p;
  iniciap(&pila);
  iniciac(&cola);
int e=0;
  while(scanf("%d",&c)!=EOF){
    ponec(&cola,c);
    e++;
    if(c>max)
        max=c;
     if (c<min)
     min=c;
    sum+=c;
    }
    ultimo=c;
  while(!vaciac(cola)){
    sacac(&cola,&c);
    p=c;
    ponep(&pila,p);
  }

  while(!vaciap(pila)){
      sacap(&pila,&p);
    printf("%d",p);
   c=p;
   ponec(&cola,c);
  }
  printf("\n");
  while(!vaciac(cola)){
    sacac(&cola,&c);
    printf("%d",c);
  }
  printf("\nUna cantidad de elementos de %d",e);
  printf("\nEl elemento de maximo valor es %d",max);
  printf("\nEl elemento minimo es %d",min);
  printf("\nLa suma es %d",sum);
  printf("\nEl ultimo elemento es %d",ultimo);
}
