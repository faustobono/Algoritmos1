#include <stdio.h>
#include <string.h>
struct datos {
	   char matricula[4];
	   int mate;
	   int fisica;
	   int quimica;};
struct info  {
	   char matricula[4];
	   int quimicall;
	   int fisicall;};
void main(void){
struct datos rd;
struct info ri;
FILE *notas;
FILE *inscriptos;
notas=fopen("archnotas.dat","rb");
inscriptos=fopen("archinscriptos.dat","rb");

fread(&rd,sizeof(struct datos),1,notas);
fread(&ri, sizeof (struct info),1,inscriptos);

  while(!feof(notas)||!feof(inscriptos)){

        if (strcmp(rd.matricula,ri.matricula)<0)
                fread(&rd,sizeof (struct datos),1,notas);
        else
        if(strcmp(rd.matricula,ri.matricula)>0)
               fread(&ri,sizeof (struct info),1,inscriptos);
        else
            {if(ri.quimicall==1)
             if (rd.quimica>=4)
                printf("\nMATRICULA %s ESTA HABILITADO PARA CURSAR QUIMICA 2",rd.matricula);
             if(ri.fisicall==1)
              if (rd.mate>=4 && rd.fisica>=4)
                printf("\nMATRICULA %s ESTA HABILITADO PARA CURSAR FISICA 2",rd.matricula);
            fread(&rd,sizeof (struct datos),1,notas);
            fread(&ri,sizeof (struct info),1,inscriptos);
            }
   }
fclose(notas);
fclose(inscriptos);
}
