#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int GeneratorNumbers(void){
    int random = 0 + rand() % 100;

    return random;
}


int main(void){

    srand(time(NULL));
    printf("%d", time(NULL));

    int lens = GeneratorNumbers();
    int massive_random_number[lens];

    for (int i = 0; i < lens; i++){
        massive_random_number[i]= GeneratorNumbers();
    }

    printf("Массив псевдослучайных чисел - ");
    for (int i = 0; i < lens; i++){
        printf("%d ", massive_random_number[i]);
    }
    printf("\n");



}