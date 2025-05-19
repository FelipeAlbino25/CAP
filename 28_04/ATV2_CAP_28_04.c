#include <stdio.h>

int main(void){
    double raio; 

    char entrada[100];
    printf("Digite o raio do circulo: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%lf", &raio);
    double area = 3.14 * raio * raio;
    printf("A area do circulo e: %.2lf u.m\n", area);
    return 0;
}