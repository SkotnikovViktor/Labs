#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dim = 4;
    int i, j, N[dim], n[dim], num;

    num = 1;
    for (i = 0; i < dim; i++){
        N[i] = i + 2; num *= N[i]; n[i] = 0;
    }

    for (i = 0; i < num; i++){
        for (j = 0; i < dim; j++){
            printf("%d", n[j]);
        }

        printf("\n");
        j = 0;
        do {
            n[j] =(n[j] + 1) % N[j];
        } while (!n[j] && ++j < dim);
    }

}