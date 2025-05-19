#include <stdio.h>

int main(void){
    double x1,y1,x2,y2;
    char entrada[160];

    printf("Insira as coordenadas X e Y (do PONTO 1) separadas por ESPACO: \n");
    fgets(entrada, sizeof(entrada),stdin);

    sscanf(entrada, "%lf%lf", &x1, &y1);


    printf("Insira as coordenadas X e Y (do PONTO 2) separadas por ESPACO: \n");
    fgets(entrada, sizeof(entrada),stdin);

    sscanf(entrada, "%lf%lf", &x2, &y2);

    double delta_x, delta_y;
    if(x1-x2 < 0) delta_x = -(x1-x2);
    else delta_x = x1-x2;

    if(y1-y2 < 0) delta_y = -(y1-y2);
    else delta_y = y1-y2;

    double area = delta_x * delta_y;
    printf("a area do retangulo eh: %.3lf\n", area);
    printf("base: %lf \naltura: %lf\n",delta_x, delta_y);
    printf("coordenadas: p1(%lf , %lf) p2(%lf , %lf)\n",x1,y1,x2,y2);

    return 0;
}