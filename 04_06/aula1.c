#include <stdio.h>

void transformAllToEven(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            arr[i]++;
        }
    }
}
void transformAllEventToZero(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            arr[i] = 0;
        }
    }
}


int main(void){

    #define size 10
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    transformAllEventToZero(arr, size);
    printf("Vetor transformado:\n");
    for(int i = 0; i < size; i++){
        printf("vetor[%d] = %d\n", i, arr[i]);
    }
    
}