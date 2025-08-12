#include <stdio.h>

void dobra_valor(int x);

int main()
{
    int v = 10;
    dobra_valor(4);
    printf("%d\n", v);
    return 0;
}

void dobra_valor(int x)
{
    x = x * 2;
}
