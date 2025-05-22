#include <stdio.h>
int main()
{
    int a,b;

    scanf("%d %d", &a, &b);


    a = a + b; 
    // a = a + b                      (nouvelle valeur de a)

    b = a - b; 
    // b = a - b => b = a + b - b = a (nouvelle valeur de b)

    a = a - b; 
    // a = a - b => a = a + b - a = b (nouvelle valeur de a)

    
    int v1 = a, v2 = b;

    
    printf("Après échange: a = %d, b = %d", v1, v2);

}
