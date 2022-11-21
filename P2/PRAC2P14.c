#include <stdio.h>
#include <stdlib.h>

  // leev(int v, int *dn);
  //cambia(int v[],int a, int b, int *dn);
  //muestra(int v);
int main(){
    int v[20],dn;
     leev( v, &dn);
     cambia(v, dn);
     muestra(v, dn);
    return 0;
}
 void leev(int v[], int *dn){
 int i;
 printf("ingrese el tamaño del vector ");
 scanf("%d", dn);
 for(i=0;i<*dn;i++){
    printf("ingrese caracter ");
    scanf("%d",&v[i]);
 }
 }
 void cambia (int v[], int dn){
 int aux;
 int i;
 for(i=0;i<dn-1; i++, dn--){
  aux=v[i];
  v[i]=v[dn-1];
  v[dn-1]=aux;
 }
 }

     void muestra(int v[], int dn){
        int i;
      for(i=0;i<dn;i++)
        printf("%d ",v[i]);
     }



