#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
int main()
{   int abierto=0, cerrado=0;
    TELEMENTOP n;
    TPILA pila;
     iniciap(&pila);

    while ((n=getchar())!='\n')
    {
     ponep(&pila, n);
    }
        while(!vaciap(pila))
        {
         sacap(&pila,&n);
         if (n==')')
             cerrado++;
         else{
            if (n=='(')
                abierto++;}
        }
        printf("%d",abierto);
        printf("\n%d",cerrado);
        if (abierto==cerrado)
            printf("\nEs correcto muy bien 10!");
        else
         if (abierto>cerrado)
            printf("\nFaltan parentencis derecho");
        else
            printf("\nFalta parentesis izquierdo");
    while(!vaciap(pila))
        {
        sacap(&pila,&n);
        printf("%c",n);
        }
    return 0;
}
