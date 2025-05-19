#include <stdio.h>

int main(void){
    int idade;
    int ano;

    char entrada[100];
    printf("Digite sua idade: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &idade);

    printf("Digite o ano atual: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &ano);
    int ano_nascimento = ano - idade;
    printf("Voce nasceu entre %d e %d\n", ano_nascimento-1, ano_nascimento);
}