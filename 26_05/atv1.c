#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double distance3D(double x1, double y1, double z1, double x2, double y2, double z2){
    return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) + (z1-z2)*(z1-z2) );
}

double pontoMedio(double x1, double x2, double y1, double y2, double *xm, double *ym){
    *xm = abs((x1+x2)/2);
    *ym = abs((y1+y2)/2);
}

double media3(double a, double b, double c){
    return (a+b+c)/3;
}

int divisibleBy3and5(int a){
    return (a%3==0 ) && (a%5==0);
}

int lastDigit(int a){
    return a%10;
}

int main(void){
    double n;
    double n2;
    pontoMedio(2,4,6,-2,&n,&n2);
    printf("%lf, %lf",n,n2);
}

