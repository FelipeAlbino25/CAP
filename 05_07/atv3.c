#include <stdio.h>

int main(void){

    char input[160];
    int idade, i=0;
    double media =0;
    printf("insira uma idade: ");
    fgets(input, sizeof(input),stdin);
    sscanf(input,"%d",&idade);
    while(idade !=0){
        media +=idade;
        i++;

        printf("insira uma idade: ");
        fgets(input, sizeof(input),stdin);
        sscanf(input,"%d",&idade);
    }

    media = media/i;
    printf("media da idade: %.2lf",media);
}