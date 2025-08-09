#include <stdio.h>

int main()
{
    int n;
    printf("Escreva o tamanho da sua matriz: ");
    scanf("%d", &n);

    int vet[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nEscreva o Elemento %d, %d da Matriz: ", i, j);
            scanf("%d", &vet[i][j]);
        }
    }

    int somaDiagonal = 0;
    int somaDiagonalInversa = 0;

    for (int i = 0; i < n; i++)
    {
        somaDiagonal += vet[i][i];
    }

    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        somaDiagonalInversa += vet[i][j - i];
    }

    if (somaDiagonal != somaDiagonalInversa)
    {
        printf("A matriz nao e um quadrado magico");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int somaLinha = 0;
        int somaColuna = 0;
        for (int j = 0; j < n; j++)
        {
            somaLinha += vet[i][j];
            somaColuna += vet[j][i];
        }

        if (somaLinha != somaDiagonal || somaColuna != somaDiagonal)
        {
            printf("A matriz nao e um quadrado magico");
            return 0;
        }
    }

    printf("A matriz e um quadrado magico");
    return 0;
}