#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

double findByModule(char linha){

    switch(linha){
        case 'A':
            return 10.0;
        case 'B':
            return 8.0;
        case 'C':
            return 6.0;
        case 'D':
            return 3.0;
        default:
            return 0.0;

    }
    
}

bool isEven(int n){
    return n %2==0;
}

bool notEven (int n){
    return !isEven(n);
}

double absolute(double n){
    if(n<0) return -n;
    else return n;
}

int somaDivisores(int n){
    int sum=n;
    for(int i=1; i<=(n/2);i++){
        if(n%i==0) sum+=i;
    }
    return sum;
}

double distance_origin(double x, double y){
    
    double distance = sqrt(x*x + y*y);
    return distance;
}


int main(void){
    /*
    FILE *arquivo = fopen("lista.txt","r");
    if(arquivo == NULL){
        printf("erro");
        return 0;
    }
    
    char linha[3];
    double contador =0;
    double sum=0.0;
    double next_number;
    while(fgets(linha, sizeof linha, arquivo)!=NULL){
        
        sum+= findByModule(linha[0]);
        
        contador++;
    }

    printf("media: %lf", (sum/contador));
*/

    printf("resposta: %lf", distance_origin(3,4));
    }

