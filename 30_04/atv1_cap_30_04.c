#include <stdio.h>

int main(void){

    char input[160];

    printf("Insira A, B e C (Separado por ESPAÇO):\n");
    fgets(input, sizeof(input),stdin);

    double a, b,c;
    sscanf(input,"%lf%lf%lf",&a,&b,&c);

    double delta = b*b -4*a*c;

    if(delta>0  && a!=0) printf("ha 2 raizes");
    else printf("nao ha");

    return 0;
}