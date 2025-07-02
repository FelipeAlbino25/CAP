#include <stdlib.h>
#include <stdio.h>

char *ex1(unsigned char c)
{

    char *str = malloc(2 * sizeof(char));
    if (str != NULL)
    {
        str[0] = c;
        str[1] = '\0';
    }
    return str;
}

int main(void)
{
    int linhas = 5;
    int colunas = 5;

    int **p = malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++)
    {
        p[i] = malloc(colunas * sizeof(int));
        if (p[i] == NULL)
        {
            perror("Erro ao alocar colunas");
            // Libera as anteriores antes de sair
            for (int k = 0; k < i; k++)
                free(p[k]);
            free(p);
            return 1;
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            p[i][j] = i + j;
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++)
    {
        free(p[i]);
    }
    free(p);

    return 0;
}