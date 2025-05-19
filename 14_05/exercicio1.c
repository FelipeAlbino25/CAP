#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){

    setlocale (LC_ALL, "");

    FILE *arquivo = fopen("saida-exemplo.txt","r");

    char linha[100];
    double soma=0;
    double next_int;

    while(fgets(linha, sizeof linha, arquivo)!=NULL){
        sscanf(linha, "%lf",&next_int);
        soma += next_int;
    }
    printf("a soma é: %lf\n",soma);

}