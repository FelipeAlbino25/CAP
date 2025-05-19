#include <stdio.h>

int main(void){

    int fib(int n){
        if(n==1) return 1;
        else return n*fib(n-1);
    }

    int sla = fib(5);
    printf("%d",sla);
}