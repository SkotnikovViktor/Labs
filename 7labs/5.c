#include <stdio.h>
#include <stdlib.h>



int main(void){
    int mas1[4] = {1,2,2,3};
    int mas2[4] = {4,2,2,37};
    int count = 0;

    printf("Повт. числа - ");
    for (int i = 0; i < (sizeof(mas1) / sizeof(mas1[0])); i++){
        for (int j = 0; j < (sizeof(mas2) / sizeof(mas2[0])); j++){
            if (mas1[i] == mas2[j]){
                printf(" %d ", mas1[i]);
                count++;
            }
        }
    }

    if (count == 0){
        printf("искал везде, но не нашёл :(\n");
        exit(0);
    }
    printf("\n");



    
}