#include <stdio.h>
#include <string.h>

int main(void){

    char nome_arquivo[150];
    printf("insira um nome de arquivo: ");
    fgets(nome_arquivo, sizeof nome_arquivo, stdin);
    nome_arquivo[strlen(nome_arquivo)-1]='\0';

    //w - whiteout
    //r - read
    //a - append 
    FILE *arquivo = fopen(nome_arquivo,"r");
    if(arquivo == NULL)
    {
        printf("ERRO");
        return 0;
    }
    /*
    for(int i =0; i<3; i++){
        char input[150];
        fgets(input, sizeof input, stdin);
        fprintf(arquivo,"%s", input);
        
    }*/

    /*
    char input[150];
    fgets(input, sizeof input, stdin);
    fprintf(arquivo, "%s",input);
    while(strcmp(input,"\n")!=0){
        fgets(input, sizeof input, stdin);
        
        fprintf(arquivo, "%s",input);
    }
    fclose(arquivo);
    */
    /*
    for(int i =0;i <5;i++){
        char linha[200];
        fgets(linha, sizeof linha, arquivo);
        printf("%s",linha);
    }
        */

    char linha[150];
    int contador =0;
    while(fgets(linha, sizeof linha, arquivo)!=NULL){
        printf("%s",linha);
        contador++;
    }

    printf("%d",contador);
}