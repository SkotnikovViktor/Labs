#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>



int main(void){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int main_massive[rand() % 10 + 1];
    int size_main_massive = sizeof(main_massive) / sizeof(main_massive[0]);
    int count_oven_index = 0;

    for (int i = 0; i < size_main_massive; i++){
        if (i % 2 == 0){
            count_oven_index++;
        }
        main_massive[i] = rand() % 100 + 1;
    }


    int slise[count_oven_index];
    int index = 0;
    for (int i = 0; i < size_main_massive; i+=2){
        slise[index] = i;
        index++;
    }


    for (int i = 0; i < count_oven_index / 2; i++){
        int t = slise[i];
        slise[i] = slise[count_oven_index - i - 1];
        slise[count_oven_index - i - 1] = t;

    }


    printf("Базовый массив - \n");
    for(int i = 0; i < size_main_massive; i++){
        printf(" %d ",main_massive[i]);
    }

    printf("\n");


    printf("Перевёрнутый массив - \n");
    for(int i = 0; i < count_oven_index; i++){
        printf(" %d ", main_massive[slise[i]]);
    }

}