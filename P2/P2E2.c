#include <stdio.h>
#include <stdlib.h>
#define IMIN(n,m) ((n) < (m) ? (n) : (m))
int main(void)
{ int n, m;
      scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",IMIN(n,m));
    return 0;
}
