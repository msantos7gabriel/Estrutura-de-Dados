#include <stdio.h>

int main()
{

    int num;

    printf("Escreva Um numero: ");
    scanf("%d", &num);

    int resto;
    int reverso = 0;

    int x = num;
    while (x != 0)
    {
        resto = x % 10;
        reverso = reverso * 10 + resto;
        x /= 10;
    };
    if (reverso == num)
    {
        printf("E palindomo");
    }
    else
    {
        printf("N e palindomo");
    }
}
