#include <stdio.h>
unsigned long long main()
{
    unsigned long long fac;
    int i,n;
    scanf("%d",&n);
    if (n==0)
    fac=1;
    else
    {
       fac=1;
       for ( i = 1; i <= n; i++)
       {
          fac=fac*i;
       }
       
    }

    printf("Le factoriel de %d est : %llu\n", n, fac);
}
