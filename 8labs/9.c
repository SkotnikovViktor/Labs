#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>



int main(void){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int main_massive[rand() % 10 + 1]; // Генерируем главный массив
    int size_main_massive = sizeof(main_massive) / sizeof(main_massive[0]); // Находим длину главного массива 

    int count_oven_index = 0;
    for (int i = 0; i < size_main_massive; i++){
        if (i % 2 == 0){
            count_oven_index++;
        }
        main_massive[i] = rand() % 100 + 1;
    }


    int slise[count_oven_index];
    int index = 0;
    if (size_main_massive % 2 != 0){

        for(int i = (size_main_massive - 1); i >=0; i-=2){
            slise[index] = i;
            index++;
        }

    }

    else if (size_main_massive % 2 == 0){

        for (int i = (size_main_massive - 2); i >= 0; i-=2){
            slise[index] = i;
            index++;
        }
    }


    printf("Стоковый массив - \n");
    for (int i = 0; i < size_main_massive;  i++){
        printf(" %d ", main_massive[i]);
    }


    
    printf("\n");


    printf("Перевёрнутый массив - \n");
    for (int i = 0; i < count_oven_index; i++){
        printf(" %d ",main_massive[slise[i]]);
    }



}