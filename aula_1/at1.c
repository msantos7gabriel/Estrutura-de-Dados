#include <stdio.h>

int main()
{
    int vet[10];
    int user_input;
    int user;
    int divisivel;
    int i = 0;

    printf("\nEscreva 10 numeros positivos: ");

    do
    {
        scanf("%d", &user_input);
        if (user_input >= 0)
        {
            vet[i] = user_input;
            i++;
        };
    } while (i < 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    };

    printf("\nEscreva um numero positivo: ");
    scanf("%d", &user);

    if (user < 0)
    {
        user *= -1;
    }

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % user == 0)
        {
            printf("\n%d e divisivel", vet[i]);
            divisivel++;
        };
    };

    if (!(divisivel > 0))
    {
        printf("Nenhum valor e divisivel pelo numero informado");
    }
};
