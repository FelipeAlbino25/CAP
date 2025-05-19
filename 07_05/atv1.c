#include <stdio.h>

int main(void){

    char input[160];
    double altura1, altura_max;

    printf("insira a altura: ");
    fgets(input,sizeof(input),stdin);
    sscanf(input,"%lf",&altura1);
    altura_max = altura1;

    for(int i=2;i<=20;i++){
        printf("insira a altura: ");
        fgets(input,sizeof(input),stdin);
        sscanf(input,"%lf",&altura1);

        if(altura1 > altura_max) altura_max = altura1;
    }

    printf("Altura Maxima: %lf", altura_max);

    return 0;
}