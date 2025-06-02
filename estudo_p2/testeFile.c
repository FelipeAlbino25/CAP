#include <stdio.h>
#include <string.h>

int main(void){
    FILE *arquivo = fopen("sla.txt","r");

    char input[100];

    while(fgets(input,sizeof input, arquivo)!=NULL){
        input[strcspn(input,"\n")]=0;
        if(strcmp(input,"opa")==0){
            printf("\n\n>>erro\n");
            break;
        }
        printf("%s",input);
    }
}