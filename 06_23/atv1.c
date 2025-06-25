#define MAX_LINHAS 50
#define MAX_COLUNAS 50

#include <stdlib.h>
#include <stdio.h>

struct matriz
{
    int linhas;
    int colunas;
    int dados[MAX_LINHAS][MAX_COLUNAS];
};

struct matriz
random_matrix(int linhas, int colunas)
{
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for (int i = 0; i < matriz.linhas; i++)
    {
        for (int j = 0; j < matriz.colunas; j++)
        {
            matriz.dados[i][j] = (rand() % 1000) * 0.1;
        }
    }
    return matriz;
}

int main(void)
{
    struct matriz matriz = random_matrix(10, 10);

    for (int i = 0; i < matriz.linhas; i++)
    {
        printf("\n");
        for (int j = 0; j < matriz.colunas; j++)
        {
            printf("| %d |", matriz.dados[i][j]);
        }
    }
}