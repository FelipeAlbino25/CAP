#include <stdio.h>
#include <string.h>

int main(void){

    /*
    DESCRICAO: programa que recebe uma lista de nomes e verifica quantas vezes o primeiro nome aparece
    nessa sequência, escrevendo esse numero inteiro, finalizando caso o usuário digite 'FIM' (valor sentinela)
    REQUER: uma sequência de nomes;
    ASSEGURA: o numero de vezes que o primeiro nome se repetiu exatamente igual a primeira vez em que foi digitado
    

    */


    char primeiro_nome[100];
    char proximo_nome[100];
    int contador =1;

    fgets(primeiro_nome,sizeof primeiro_nome, stdin );
    primeiro_nome[strlen(primeiro_nome)-1] = 0;

    while(strcmp(proximo_nome,"FIM")!=0){
        
        fgets(proximo_nome,sizeof proximo_nome, stdin );
        proximo_nome[strlen(proximo_nome)-1] = 0;


        if(strcmp(proximo_nome, primeiro_nome)==0) contador++;

    }
    printf("%d",contador);
}