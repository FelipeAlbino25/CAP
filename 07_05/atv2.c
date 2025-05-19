#include <stdio.h>
#include <math.h>

int main(void){

    double a, b,c, x1,x2;
    char input[160];

    printf("insira A:");
    fgets(input, sizeof(input),stdin);
    sscanf(input,"%lf",&a );

    printf("insira B:");
    fgets(input, sizeof(input),stdin);
    sscanf(input,"%lf",&b);

    printf("insira C:");
    fgets(input, sizeof(input),stdin);
    sscanf(input,"%lf",&c );

    if(a==0){
        x1 = -c/b;
        printf("valor de x: %lf",x1);
    }
    else{
        double delta = b*b -4*a*c;

        if(delta <0) printf("nao existe raiz real");

        else if(delta ==0) {
            x1 = -b/(2*a);
            printf("valor de x: %lf ",x1);
        }
        else{
            x1 = (-b -sqrt(delta))/2*a;
            x2 = (-b+sqrt(delta))/2*a;
        
            printf("x1: %.3lf\nx2: %.3lf",x1,x2);
        }

    }


}