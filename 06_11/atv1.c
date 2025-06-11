#include <stdio.h>
#define MAXIMO 100

void print_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n>> vetor[%d]= %d\n", i, vetor[i]);
    }
}

int main(void)
{
    char entrada[160];
    int vetor[MAXIMO] = {NULL};
    int valor;
    int quantidade = 0;
    do
    {
        printf("\n>>");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &valor);

        if (valor != -1)
        {
            vetor[quantidade] = valor;
            quantidade++;
        }
    } while (valor != -1);

    print_vetor(vetor, quantidade);
}