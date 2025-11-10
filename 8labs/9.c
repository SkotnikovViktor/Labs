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

    int count_oven_number = 0;
    for (int i = 0; i < size_main_massive; i++){
        main_massive[i] = rand() % 100 + 1;
        if (main_massive[i] % 2 == 0){
            count_oven_number++;
        }
    }


    int massive_with_oven_number[count_oven_number];
    int index = 0;
    for (int i = 0; i < size_main_massive; i++){
        if (main_massive[i] % 2 == 0){
            massive_with_oven_number[index] = main_massive[i];
            index++;
        }
    }


    printf("Введите - 1, если хотите проверить массивы на верность среза, иначе - 0\n");
    int st = 0;
    scanf("%d", &st);

    if (st == 1){
        for (int i = 0; i < size_main_massive; i++){
            printf(" %d ", main_massive[i]);
        }


        printf("\n");

    
        for (int i = 0; i < count_oven_number; i++){
            printf(" %d ", massive_with_oven_number[i]);
        }
    }

    else if (st == 0){

        for (int i = 0; i < count_oven_number; i++){
            printf(" %d ", massive_with_oven_number[i]);
        }

        for (int i = 0; i < count_oven_number / 2.0; i++){
            int t = massive_with_oven_number[i];
            massive_with_oven_number[i] = massive_with_oven_number[count_oven_number - i - 1];
            massive_with_oven_number[count_oven_number - i - 1] = t;

        }

        printf("\n");


        for (int i = 0; i < count_oven_number; i++){
            printf(" %d ", massive_with_oven_number[i]);
        }

        
    }


}