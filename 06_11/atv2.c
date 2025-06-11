#include <stdio.h>
#define MAXIMO 100

void print_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf(">> vetor[%d]= %d\n", i, vetor[i]);
    }
    printf("\n\n");
}

void inserir_valor(int vet[], int *tamanho, int novo_valor)
{
    vet[*tamanho] = novo_valor;
    *tamanho += 1;
}

int indexOf(int vetor[], int tamanho, int valor)
{

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == valor)
            return i;
    }
    return -1;
}

int main(void)
{

    int vetor[MAXIMO];
    int qtd;
    char entrada[150];
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &qtd);
    for (int i = 0; i < qtd; i++)
    {
        vetor[i] = 10;
    }

    print_vetor(vetor, qtd);
    inserir_valor(vetor, &qtd, 17);
    print_vetor(vetor, qtd);
    printf("%d", indexOf(vetor, qtd, 17));
}