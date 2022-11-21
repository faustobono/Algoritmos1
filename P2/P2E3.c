#include <stdio.h>
#include <stdlib.h>
#define val(a) (a<0) ? a*-1 : a
#define car(a) (a>=48 && a<=57)? 1 : 0
#define cubo(a) a*a*a
int main(){
    int c;
    char a;
    float g;
    printf("Digite un numero: ");
    scanf("%d",&c);
    printf("El valor absoluto es: %d ",val(c));
    printf(" ingrese el digito\n");
    scanf("\n%c",&a);
    if (car(a) == 1){
        printf("es digito ");}
        else{
            printf("no es digito");
        }
        printf("\ningrese numero");
        scanf("\n%f",&g);
        printf("\nEl cubo es : %.2f ",cubo(g));
    return 0;
}

