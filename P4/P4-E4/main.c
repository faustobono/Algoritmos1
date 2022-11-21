#include <stdio.h>
#include <string.h>
struct venta{
char cods[5];
char codv[3];
char factura[7];
float monto;
};

void main(){
FILE *a;
struct venta r;
char maxvs[3],codsact[5],codvact[3],codmv[3];
int max,sumv;
float maximo,sumvc;
a=fopen("archventas.dat","rb");
 maximo=0;
  fread(&r,sizeof (struct venta),1,a);
  while(!feof(a)){
   max=0;
   printf("\nSUCURSAL %s",r.cods);
    strcpy(codsact,r.cods);
    while(!feof(a)&& !strcmp(codsact,r.cods)){
       sumv=0; sumvc=0;
        strcpy(codvact,r.codv);
        while(!feof(a)&& !strcmp(codsact,r.cods)&& !strcmp(codvact,r.codv)){
           sumv++;
           sumvc+=r.monto;
         fread(&r,sizeof(struct venta),1,a);
        }
        if(sumv>max){
            max=sumv;
            strcpy(maxvs,codvact);
        }
        if (sumvc>maximo){
            maximo=sumvc;
            strcpy(codmv,codvact);
        }
    }
    printf("\nEl codigo del vendedor con mas ventas es %s con una cantidad de ventas de %d",maxvs,max);
  }
  printf("\nEL EMPLEADO QUE MAS VENDIO FUE %s ",codmv);
}
