#include <stdio.h>

void print_posicoes_maior_temp(int temp_max, int temperaturas[24]){
    
    printf("\n\n Posicoes maior temp (%d):",temp_max);
    for(int i=0;i<24;i++){
       if(temperaturas[i]== temp_max){
        printf("\n %d Hora(s)",i);
       }
    }
}
void print_posicoes_menor_temp(int temp_min, int temperaturas[24]){
    printf("\n\n Posicoes menor temp:%d",temp_min);
    for(int i=0;i<24;i++){
        if(temperaturas[i]== temp_min){
            printf("\n %d Hora(s)",i);
           }
    }
}
void ler_valores(int temperaturas[24],double *soma,int *temp_max,int *temp_min){
    int proxima_temperatura;
    char entrada[10];

    for(int i=0;i <24;i++){
        printf("\n\n>>");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d",&proxima_temperatura);

        temperaturas[i] = proxima_temperatura;

        *soma +=proxima_temperatura;

        if(proxima_temperatura>*temp_max){
            *temp_max=proxima_temperatura;
        }
        if(proxima_temperatura<*temp_min){
            *temp_min=proxima_temperatura;
        }
        
    }
}

int main(void){

    int temperaturas[24]= {0};
    int temp_max=-3000;
    int temp_min=3000;

    double soma=0;

    ler_valores(temperaturas,&soma,&temp_max,&temp_min);

  
    printf("\n\n media: %.2lf",(double)(soma/24));
    print_posicoes_maior_temp(temp_max, temperaturas);
    print_posicoes_menor_temp(temp_min, temperaturas);
}