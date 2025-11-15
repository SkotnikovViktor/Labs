#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>



int main(void){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int massive_size = 10;
    int count_oven_number = 0;
    int massive[massive_size];


    for (int i = 0; i < massive_size; i++){
        massive[i] = rand() % 100 + 1;
        if (massive[i] % 2 == 0){
            count_oven_number++;

        }
    }

    int slice[massive_size / 2 + 1];
    int cnt = 0;

    for (int i = 0; i < massive_size; i+=3){
        slice[cnt] = i;
        cnt++;
    }

    printf("Исходный массив\n");
    for (int i = 0; i < massive_size; i++){
        printf(" %d ",massive[i]);
    }


    for (int i  = 0; i < (massive_size / 2 + 1); i++){
        printf("Test -  %d ", massive[slice[i]]);
    }


    printf("\n");


    int massive_oven_number[count_oven_number];
    int index = 0;
    int sum = 0;
    for (int i = 0; i < massive_size; i++){
        if (massive[i] % 2 == 0){
            massive_oven_number[index] = massive[i];
            sum += massive_oven_number[index];
            index++;
        }
        

    }



    printf("Массив-срез по чётным числам:\n ");
    for (int i = 0; i < count_oven_number; i++){
        printf(" %d ", massive_oven_number[i]);
    }

    printf("\nСумма - %d",sum);
}