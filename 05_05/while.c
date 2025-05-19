#include <stdio.h>

int main(void){
    double pressao_Hg;
    char input[160];

    printf("\ninsira pressao em mmHg: \n");
    fgets(input, sizeof(input),stdin);
    sscanf(input, "%lf",&pressao_Hg);

    while(pressao_Hg != 0){

        double pressao_atm = pressao_Hg/760;
        printf("pressao atm: %lf",pressao_atm );
        printf("\ninsira pressao em mmHg: \n");
        fgets(input, sizeof(input),stdin);
        sscanf(input, "%lf",&pressao_Hg);

    }
}