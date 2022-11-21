#include <stdio.h>
void main ()
{
int a, b, c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if ((++a==b) && (b=--c))
    printf("son consecutivos");
    else
    printf("no lo son");
return 0;
}
