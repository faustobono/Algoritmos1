#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
int main()
{   TPILA pila1, pila2,pila3;
    TELEMENTOP n,m,h,p;

    iniciap(&pila1);
    iniciap(&pila2);
    iniciap(&pila3);

    printf("INGRESAR PILA 1 ");
    while(scanf("%d",&n)!=EOF)
        ponep(&pila1,n);
    printf("\nINGRESAR PILA 2 ");
    while(scanf("%d",&m)!=EOF)
        ponep(&pila2,m);
     p=0;
    while(!vaciap(pila1)&&!vaciap(pila2)){
        sacap(&pila1,&n);sacap(&pila2,&m);
        if((p+n+m)>9){
            ponep(&pila3,((p+n+m)%10));
            p=1;
        }
        else{
      ponep(&pila3,p+n+m);
      p=0;}
    }

    while(!vaciap(pila1)){
        sacap(&pila1,&n);
        ponep(&pila3,p+n);
    }
    while(!vaciap(pila2)){
        sacap(&pila2,&m);
        ponep(&pila3,p+m);
    }

    while(!vaciap(pila3)){
        sacap(&pila3,&h);
    printf("%d",h);}
    return 0;
}
