#define MAX 50
#include <stdio.h>

struct matriz
{
    int linhas;
    int colunas;
    int dados[MAX][MAX];
};

int multiplyLineByColumn(struct matriz matrizA, struct matriz matrizB, int linha, int coluna)
{

    if (matrizA.colunas == matrizB.linhas)
    {
        int resultado;
        for (int i = 0; i < matrizA.linhas; i++)
        {
            resultado += matrizA.dados[linha][i] * matrizB.dados[i][coluna];
        }
    }
    else
    {
        return 0;
    }
}

struct matriz
multiplyMatrixByConstant(int c, struct matriz matriz)
{
    for (int i = 0; i < matriz.colunas; i++)
    {
        for (int j = 0; j < matriz.linhas; j++)
        {
            matriz.dados[i][j] *= c;
        }
    }

    return matriz;
}
struct matriz
sum2Matrix(struct matriz matrizA, struct matriz matrizB)
{
    if (matrizA.colunas == matrizB.colunas && matrizA.linhas == matrizB.linhas)
    {
        for (int i = 0; i < matrizA.colunas; i++)
        {
            for (int j = 0; j < matrizA.linhas; j++)
            {
                matrizA.dados[i][j] += matrizB.dados[i][j];
            }
        }
        return matrizA;
    }
    else
    {
        struct matriz matriz;
        matriz.linhas = 0;
        matriz.colunas = 0;
        return matriz;
    }
}

void printMatrix(struct matriz matriz)
{

    printf("\n\n");
    for (int i = 0; i < matriz.colunas; i++)
    {
        printf("\n");
        for (int j = 0; j < matriz.linhas; j++)
        {
            printf(" %d ", matriz.dados[i][j]);
        }
    }
}

int main(void)
{
    struct matriz matrizTeste;
    matrizTeste.colunas = 3;
    matrizTeste.linhas = 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizTeste.dados[i][j] = 1;
        }
    }
    struct matriz matrizB;
    matrizB.linhas = 3;
    matrizB.colunas = 3;

    printMatrix(matrizTeste);
    printMatrix(multiplyMatrixByConstant(-1, matrizTeste));
    printMatrix(sum2Matrix(matrizTeste, matrizB));
    printf("%d", multiplyLineByColumn(matrizTeste, matrizTeste, 0, 2));
}