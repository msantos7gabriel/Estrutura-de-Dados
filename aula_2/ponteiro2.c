#include <stdio.h>

void dobrar(int *num)
{
    *num *= 2;
}
int main()
{
    int valor = 10;
    dobrar(&valor);
    printf("%d\n", valor);
    return 0; 
}
