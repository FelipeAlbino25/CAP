#include <stdio.h>
#include <string.h>

int main(void){
    char a[100];
    double teste;
    
    fgets(a , sizeof(a), stdin);
    sscanf(a, "%lf", &teste);
    
    printf("%.2lf", teste);
}