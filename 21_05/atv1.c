#include <stdio.h>

double doubleN(double *n){
    double a = *n;
    *n=0;
    return a*2;
}

void tornarPar(int *n){
    if(*n%2==0);
    else {
        *n +=1;
    }
}

void tornarMedia(double *x, double *y){

    double media = (*x+*y)/2;
    *x = *y = media;
}

void trocarValores(double *x, double *y){
    double temp = *x;
    *x = *y;
    *y = temp;
}

void ordenar(double *x, double *y){
    if(*x <= *y);
    else{
        double temp = *x;
        *x=*y;
        *y=temp;
    }
}

int main(void){
    double x=0.4;
    double y = 0.5;
    ordenar(&x,&y);
    printf("%lf, %lf",x, y);
}