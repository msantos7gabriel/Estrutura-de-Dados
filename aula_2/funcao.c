#include <stdio.h>

int dobra_valor(int a, int b);

int main()
{
    int r = dobra_valor(4, 7);
    printf("%d\n", r);
    return 0;
}

int dobra_valor(int a, int b)
{
    return a + b;
}
