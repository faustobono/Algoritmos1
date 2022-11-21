/*#include <stdio.h>

int main(){
    char baja[4];
FILE *binario;
FILE *a;
a= fopen("archivito.txt","rt");
binario=fopen("archivobajas.dat","wb");
fscanf(a,"%s",baja);
while(!feof(a)) {

	fwrite(baja, 4, 1,binario);
	fscanf(a,"%s",baja);
	  }
fclose(binario);
fclose(a);
binario= fopen("archivobajas.dat","rb");
fread(baja,4, 1,binario);

while(!feof(binario)) {
	printf("%s\n",baja);

	fread(baja,4, 1,binario);
      }
fclose(binario);}*/
