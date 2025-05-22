#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    nb1 = nb1 + nb2; // a = a + b                      (nouvelle valeur de a)
    nb2 = nb1 - nb2; // b = a - b => b = a + b - b = a (nouvelle valeur de b)
    nb1 = nb1 - nb2; // a = a - b => a = a + b - a = b (nouvelle valeur de a)
    printf("\nAprès échange: a = %d, b = %d", nb1, nb2);

}
