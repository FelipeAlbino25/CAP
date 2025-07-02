/*
 * Agenda: versão 2
 * Jander, 2025 - CAP
 */
#include <stdio.h>
#include <string.h>

// Definição do registro de dados
struct info
{
    char nome[40];
    char telefone[20];
    double salario;
};

void findByName()
{
    FILE *arquivo = fopen("agenda.dat", "r");

    if (arquivo == NULL)
    {
        ferror("arquivo");
        return 1;
    }

    char nome[100];
    printf("Insira o nome a ser procurado: ");
    fgets(nome, sizeof nome, stdin);
    struct info pessoa;
    while (fread(&pessoa, sizeof(struct info), 1, arquivo) > 0)
    {

        if (strcmp(nome, pessoa.nome) == 0)
        {
            printf("\nsalario:%lf\nnome:%s\ntelefone:%s", pessoa.salario, pessoa.nome, pessoa.telefone);
        }
    }
}

void cadastre()
{
    FILE *arquivo = fopen("agenda.dat", "a");
    if (arquivo == NULL)
    {
        perror("Acesso a agenda");
        return;
    }
    printf("Abriu o arquivo na posição %ld\n", ftell(arquivo));

    // leitura
    struct info pessoa;
    printf("Nome: ");
    fgets(pessoa.nome, sizeof pessoa.nome, stdin);
    printf("Telefone: ");
    fgets(pessoa.telefone, sizeof pessoa.telefone, stdin);
    printf("Salario: ");
    char entrada[160];
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &pessoa.salario);

    fwrite(&pessoa, sizeof pessoa, 1, arquivo);
    printf("Gravou um registro e foi para posição %ld\n", ftell(arquivo));

    fclose(arquivo);
}

void liste()
{
    FILE *arquivo = fopen("agenda.dat", "r");
    if (arquivo == NULL)
    {
        perror("Acesso a agenda");
        return 1;
    }

    struct info pessoa;
    printf("Antes de começar a ler %ld\n", ftell(arquivo));
    while (fread(&pessoa, sizeof pessoa, 1, arquivo) > 0)
    {
        printf("%s%s%.2f\n", pessoa.nome, pessoa.telefone, pessoa.salario);
        printf("Pronto para ler em %ld\n", ftell(arquivo));
    }
    printf("Terminei a listagem e estou em %ld\n", ftell(arquivo));

    fclose(arquivo);
}

void consulte_por_numero()
{
    FILE *arquivo = fopen("agenda.dat", "r");
    if (arquivo == NULL)
    {
        perror("Acesso a agenda");
        return 1;
    }

    printf("Qual é o número? ");
    char entrada[160];
    int numero_registro;
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &numero_registro);

    printf("Estou em %ld\n", ftell(arquivo));
    fseek(arquivo, numero_registro * sizeof(struct info), SEEK_SET);
    printf("O fseek me direcionou para %ld\n", ftell(arquivo));

    struct info pessoa;
    fread(&pessoa, sizeof pessoa, 1, arquivo);
    printf("%s%s%.2f\n", pessoa.nome, pessoa.telefone, pessoa.salario);
    printf("E acabei ficando em %ld\n", ftell(arquivo));

    fclose(arquivo);
}

int main(void)
{
    char opcao[40];
    do
    {
        printf("\nO que você quer fazer?\n"
               "1 - Cadastrar uma pessoa\n"
               "2 - Listar a agenda\n"
               "3 - Consulta por número\n"
               "4 - Consulta por nome\n"
               "9 - Sair\n"
               "\n\n\nOpção: ");
        fgets(opcao, sizeof opcao, stdin);
        switch (opcao[0])
        {
        case '1':
            cadastre();
            break;
        case '3':
            consulte_por_numero();
            break;
        case '2':
            liste();
            break;
        case '4':
            findByName();
            break;
        }
    } while (opcao[0] != '9');

    return 0;
}
