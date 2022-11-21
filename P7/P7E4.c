#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tdacola.h"
#include "tdapila.h"

int main(void)
{
    TELEMENTOC c, n;
    TCOLA cola,cola2;
    TPILA piaux;

    iniciac(&cola);
    iniciac(&cola2);
    iniciap(&piaux);
    while ((c=getchar())!='\n')
     ponec(&cola, c);
    while ((n=getchar())!='\n')
     ponec(&cola2, n);
      while (!vaciac(cola2)&&!vaciac(cola))
      {
           consultac(cola,&c);
           consultac(cola2,&n);
           if (c<n)
            {
             sacac(&cola,&c);
             ponep(&piaux,c);
            }else{
            if (c>n)
            {
             sacac(&cola2, &n);
            }
            else
            {
             sacac(&cola,&c);
             sacac(&cola2,&n);
            }}
     }
     while(!vaciac(cola))
     {
      sacac(&cola,&c);
      ponep(&piaux,c);
     }
      while(!vaciap(piaux))
           {
            sacap(&piaux,&c);
            printf("%c",c);
           }
    return 0;
}
