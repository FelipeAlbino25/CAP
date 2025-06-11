#include <stdio.h>

int main(void){
    double nota1,nota2;
    char entrada[100];

    printf("Digite a primeira nota: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada,"%lf", &nota1);

    printf("Digite a segunda nota: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada,"%lf", &nota2);
    double media = (nota1 + nota2) / 2;
    printf("A media e: %.2lf\n", media);
}