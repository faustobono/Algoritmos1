#include <stdio.h>
#include <string.h>
struct dato  {
	   char fecha[11];
	   char cod[3];
	   float dist;};

void main(){
FILE *a;
char fechact[11],minpromedio[3],codact[3];
int cantt;
float sum,min,mindis;
struct dato r;
a=fopen("distancia.dat","rb");

fread(&r,sizeof(struct dato),1,a);
 while(!feof(a)){


     strcpy(fechact,r.fecha);
     printf("FECHA %s",fechact);
     while(!feof(a)&& !strcmp(fechact,r.fecha)){
        cantt=0;sum=0;min=999;mindis=999;

        strcpy(codact,r.cod);
             while(!feof(a)&& !strcmp(fechact,r.fecha)&&!strcmp(codact,r.cod)){
                cantt++;
                sum+=r.dist;
                if (r.dist<mindis)
                    mindis=r.dist;

               fread(&r,sizeof(struct dato),1,a);
             }
         printf("\nCODIGO DEL DEPORTISTA %s",codact);
         printf(" CANTIDAD DE TIROS %d",cantt);
         printf(" PROMEDIO %.2f",sum/cantt);
         printf(" DISTACIA MINIMA ES %.2f",mindis);
        if ((sum/cantt)<min){
            min=sum/cantt;
            strcpy(minpromedio,codact);
        }
     }
     printf("\nEL TIRADOR CON MENOR PROMEDIO EN LA FECHA ES %s\n",minpromedio);
 }
fclose(a);
}
