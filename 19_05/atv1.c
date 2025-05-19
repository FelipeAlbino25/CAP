#include <stdio.h>
#include <string.h>

int main(void){
    
    FILE *arquivo = fopen("lista.txt","r");
    if(arquivo == NULL){
        printf("erro");
        return 0;
    }
    
    char linha[3];
    double contador =0;
    double sum;
    double next_number;
    while(fgets(linha, sizeof linha, arquivo)!=NULL){
        
        switch(linha[0]){
            case 'A':
                sum+=10.0;
                break;
            case 'B':
                sum+=8.0;
                break;
            case 'C':
                sum+=6.0;
                break;
            case 'D':
                sum+=3.0;
                break;
            default:
                sum+=0.0;
                break;

        }
        contador++;
    }

    printf("media: %lf", (sum/contador));
}