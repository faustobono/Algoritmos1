#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct cliente  {
	   char tarjeta[7];
	   float gastado;
	   int cuota;} ;
void main()
{
    FILE *a;
    struct cliente r;
    char taract[7];
    float totg,max,maxg;
    int cuotas;
    a=fopen("archbinari.dat","rb");
    fread(&r,sizeof (struct cliente),1,a);
    while(!feof(a)){
        totg=0; max=0; maxg=0; cuotas=0;

        strcpy(taract,r.tarjeta);
        while(!feof(a)&& !strcmp(taract,r.tarjeta)){
          totg+=r.gastado;
          if (r.gastado>max){
            max=r.gastado;
            maxg=r.gastado;
          }
          if(r.cuota>1)
             cuotas+=r.cuota;

         fread(&r,sizeof (struct cliente),1,a);
        }
        printf("\nEl total gastado para la tarjeta %s es %.2f ",taract,totg);
        printf("\nCompra de mayor importe %.2f",maxg);
        if(cuotas>1)
            printf("\nTiene financiacion");
        else
            printf("\nNo tiene financiacion");

    }

    printf("Hello world!\n");
    return 0;
}
