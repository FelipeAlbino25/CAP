#define size 10
#include <stdio.h>

int main(void){
/*
    int arr[size];

    arr[size -1] = 1;

    arr[0] = 5;

    if(arr[size-1] > arr[0]){
        arr[2] = arr[size-1];
    }
    else{
        arr[2] =arr[0];
    }

    printf("o numero maior é: %d",arr[2]);
*/
/*
    int nextAge;
    char input[20];
    int arr[size];
    for(int i=0; i<size;i++){
        fgets(input, sizeof input, stdin);
        sscanf(input,"%d",&nextAge);
        if(nextAge != -1){
            arr[i] = nextAge;
        }
        break;
    }
    */
   int arr[size];
   for(int i=0; i<size;i++){
    arr[i] = size-i;
   }

   for(int i=0; i<size;i++){
    printf("\n>>vetor[%d]=%d\n",i,arr[i]);
   }
}