#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 5
struct datos{
int cabina;
int cat;
};
int main(){
 int n,i,v[N]={0},vm[N],vc[7]={0},maxcat, max=0, matcab[N][7]={0},j,m, cabmin, minc;
 FILE *a;
 struct datos dat;
 printf("Ingrese montos por cada categoria ");
       for(i=0;i<N;i++)
        {printf("\nPara la categoria %d el monto es: ",i+1);
         scanf("%d",&vm[i]);}

  a=fopen("archautos","rb");
  fread(&dat, sizeof(struct datos),1,a);
  while(!feof(a))
    {
      v[(dat.cat)-1]+=1;
      vc[dat.cabina-1]+=vm[dat.cat-1];
      (matcab[(dat.cat-1)][(dat.cabina-1)])++;

    printf("cabina %d y categoria %d", dat.cabina, dat.cat);
    fread(&dat,sizeof(struct datos),1,a);
    }
    fclose(a);
    //punto a.
     printf("\nLa cantidad de autos por cada cat es ");
      for(i=0;i<N;i++)
      {
          //punto c.
          if (v[i]>max)
             {
              max=v[i];
              maxcat=i+1;
             }
        printf("\nDe la cat %d es %d",i+1,v[i]);
        }
        printf("\nLa categoria mas numerosa es %d",maxcat);

        //punto b.
        for(i=0;i<7;i++)
       printf("\nPara la cabina %d el monto es %d ",i+1,vc[i]);
       printf("\n");
       minc=100;
            for(j=0;j<7;j++){
                    if (matcab[maxcat][j]<minc)
                     {
                      minc=matcab[maxcat-1][j];
                      cabmin=j+1;
                     }}
            printf("La cabina que menos vehiculos tuvo fue %d",cabmin);

}
