#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    a = a + b; // a = a + b                      (nouvelle valeur de a)
    b = a - b; // b = a - b => b = a + b - b = a (nouvelle valeur de b)
    a = a - b; // a = a - b => a = a + b - a = b (nouvelle valeur de a)
    printf("\nAprès échange: a = %d, b = %d", nb1, nb2);

}
