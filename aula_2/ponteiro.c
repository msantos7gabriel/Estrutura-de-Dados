#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr_x;

    ptr_x = &x;

    printf("Valor de x: %d \n", x);
    printf("Endereco de x: %p \n", &x);
    printf("Valor guardado de p: %p \n", ptr_x);
    printf("Valor apontado por p: %d \n", *ptr_x);
}
