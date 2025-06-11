#include <stdio.h>

int main(void){
    char input[160];
    int n;
    int soma=0;
    printf("digite N:");
    fgets(input, sizeof(input),stdin);
    sscanf(input,"%d",&n);

    for(int i=1; i<=n;i++){
        soma+=i;
    }

    printf("soma: %d",soma);
}