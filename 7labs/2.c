#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int gen_6(void){
    int random = 0 + rand() % 100;

    return random;
}


int main(void){

    srand(time(NULL));

    int lens = gen_6();
    int massive_random_number[lens];

    for (int i = 0; i < lens; i++){
        massive_random_number[i]= gen_6();
    }

    printf("Массив псевдослучайных чисел - ");
    for (int i = 0; i < lens; i++){
        printf("%d ", massive_random_number[i]);
    }
    printf("\n");



}