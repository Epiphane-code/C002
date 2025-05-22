#include <stdio.h>
int main()
{
    int v1,v2;

    scanf("%d %d", &v1, &v2);

    int a = v1, b = v2;

    a = a + b; 
    // a = a + b                      (nouvelle valeur de a)

    b = a - b; 
    // b = a - b => b = a + b - b = a (nouvelle valeur de b)

    a = a - b; 
    // a = a - b => a = a + b - a = b (nouvelle valeur de a)

    
    printf("\nAprès échange: a = %d, b = %d", a, b);

}
