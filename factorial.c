#include <stdio.h>
int main()
{
    int n,i, fac;
    scanf("%d",&n);
    if (n==0)
    fac=0;
    else
    {
       fac=1;
       for ( i = 1; i <= n; i++)
       {
          fac=fac*i;
       }
       
    }

    printf("Le factoriel de %d est:%d", n, fac);
}