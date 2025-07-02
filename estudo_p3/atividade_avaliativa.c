#include <stdio.h>
#include <string.h>

/*

GRUPO:
-Felipe Congio Albino 845143
-João Vitor Silveira 843018
-Luiz Henrique Simões Silva 845576

DESCRIÇÃO:
Programa que recebe uma quantidade de entradas descritas em 3 arquivos separados (nomes, telefones e siglas de estado),
o programa então lê estas entradas e as escreve em um arquivo binário mediante um struct pessoa.

REQUER:
3 arquivos de TEXTO com quantidades iguais de entradas, cada um contendo (respectivamente) os nomes, telefones e siglas de estados
de pessoas aleatórias

ASSEGURA:
o cadastro de pessoas em um arquivo binário ordenado pelos campos oferecidos, além de apresentar um número inteiro correspondente
ao número de registros criados.

*/

struct pessoa
{
    char nome[100];
    char telefone[20];
    char estado[3];
};

void listar()
{
    FILE *arquivoBin = fopen("pessoasBIn.dat", "r");

    struct pessoa p;
    while (fread(&p, sizeof(struct pessoa), 1, arquivoBin) > 0)
    {
        printf("\n%s", p.estado);
    }
}

int main(void)
{
    FILE *arquivoNome = fopen("nomes.txt", "r");
    FILE *arquivoTelefone = fopen("telefones.txt", "r");
    FILE *arquivoEstado = fopen("estados.txt", "r");

    FILE *arquivoBin = fopen("pessoasBIn.dat", "w");

    char nome[100];
    char telefone[20];
    char estado[4];
    int count = 0;
    while (fgets(nome, sizeof nome, arquivoNome) != NULL)
    {
        struct pessoa p;

        fgets(telefone, sizeof telefone, arquivoTelefone);
        fgets(estado, sizeof estado, arquivoEstado);

        estado[strcspn(estado, "\n")] = '\0';

        strcpy(&p.nome, nome);
        strcpy(&p.telefone, telefone);
        strcpy(&p.estado, estado);

        fwrite(&p, sizeof(struct pessoa), 1, arquivoBin);
        count++;
    }
    printf("%d", count);

    fclose(arquivoBin);
    fclose(arquivoEstado);
    fclose(arquivoNome);
    fclose(arquivoTelefone);
    listar();
}