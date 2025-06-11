#include <stdio.h>

int main(void){
    int idade, i=0;
    double media=0;
    char input[10];
    printf("insira a idade: ");
    fgets(input, sizeof(input),stdin);
    sscanf(input, "%d",&idade);

    while(idade!=0){
        i++;
        media+=idade;

        printf("insira a idade: ");
        fgets(input, sizeof(input),stdin);
        sscanf(input, "%d",&idade);
    
    }
    media = media/i;
    printf("media: %lf",media);
}