#include <stdio.h>
#include <stdlib.h>
#include "tdapila.h"
#include "tdacola.h"

void leecola(TCOLA *cola);
void muestrac(TCOLA *cola);
int main()
{
   TCOLA cola,cola2,cola3; TELEMENTOC c,n,r;
   iniciac(&cola);iniciac(&cola2);iniciac(&cola3);
   leecola(&cola);
   muestrac(&cola);
    return 0;
}

void leecola(TCOLA *cola){
TELEMENTOC c;
while((c=getchar())!='\n')
    ponec(cola,c);
}
void muestrac(TCOLA *cola){
TELEMENTOC c;
while(!vaciac(*cola)){
    sacac(cola,&c);
    printf("%c",c);}
}
