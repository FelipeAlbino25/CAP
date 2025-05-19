#include <stdio.h>
#include <string.h>

int main(void){

    char text[50];
    char input[60];

    printf("insira input: ");
    fgets(input,sizeof input,stdin );
    strncpy(text, input, sizeof text - strlen(text) -1 );

    printf("%s",text);
}