/*#include <stdio.h>
struct venta{
char cods[5];
char codv[3];
char factura[7];
float monto;
};

void main(){
struct venta r;
FILE *a;
FILE *archivo;

 a=fopen("archtxt.txt","rt");
 archivo=fopen("archventas.dat","wb");
 fscanf(a,"%s %s %s %f",r.cods,r.codv,r.factura,&r.monto);
  while(!feof(a)){
  fwrite(&r,sizeof (struct venta),1,archivo);
  fscanf(a,"%s %s %s %f",r.cods,r.codv,r.factura,&r.monto);
  }
  fclose(a);
  fclose(archivo);

  archivo=fopen("archventas.dat","rb");
  fread(&r,sizeof (struct venta),1,archivo);
  while(!feof(archivo)){
    printf("\n%s %s %s %.2f",r.cods,r.codv,r.factura,r.monto);
    fread(&r,sizeof(struct venta),1,archivo);
  }
  fclose(archivo);
}*/
