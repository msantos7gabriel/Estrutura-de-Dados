#include <stdio.h>

int main()
{
    int v[3] = {10, 20, 30};
    int *ptr_v = v;
    printf("Indice | Valor | Endereco\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%.6d | %.5d | %p\n", i, *(ptr_v + i), ptr_v + 1);
    }

    return 0;
}
