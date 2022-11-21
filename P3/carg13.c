/*#include <stdio.h>
#include <conio.h>
struct datos{
int cabina;
int cat;
};
void leev(struct datos dat, int *dn);
void main()
{
struct datos dat;
int n;
leev(dat,&n);
}

void leev(struct datos dat, int *dn)
{
 int n,i;
 FILE *a;
 a=fopen("archautos","wb");
 scanf("%d",dn);
 while((*dn)--){
    fflush(stdin);
    printf("Ingrese cabina y categoria ");
    scanf("%d  %d", &dat.cabina, &dat.cat);
    fwrite(&dat, sizeof(struct datos),1,a);
    }
    fclose(a);
    a=fopen("archautos","rb");
  fread(&dat, sizeof(struct datos),1,a);
  while(!feof(a))
    {
    printf("cabina %d y categoria %d", dat.cabina, dat.cat);
    fread(&dat,sizeof(struct datos),1,a);
    i++;
    }
    fclose(a);
}*/

