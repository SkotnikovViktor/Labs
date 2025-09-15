#include <stdio.h>
#include <math.h>

int main(void){


    int prost(int number_d){

        int count_del = 0;

        for (int i = 2; i <= ((int)sqrt(number_d)+1); i++){
            if (number_d % i == 0){
                count_del += 1;
            }
        }

        if (count_del == 0){
            return 1; // Значит число простое
        }

        return 0; // Число не простое
    }

    // Задание 2
    printf("Введите число, если хотите закрыть программу - 0:\n");
    long number = 0;
    long min = 99999;

    while (true){

        scanf("%d",&number);

        if (number < 0){
            printf("Нельзя вводит число меньше 0!\n");
            break;
        }

        else if (number == 0){
            printf("Завершение работы программы!\nСамое минимальное вводимое число: %d\n",min);
            break;
        }

        else if (number < min){
            min = number;

        }
    }


    // Задание 3
    printf("Введите число: ");
    
    int number_enter;

    scanf("%d", &number_enter);

    if (prost(number_enter) == 1){
        printf("Число простое\n");
    }

    else if (prost(number_enter) == 0){
        printf("Число непростое\n");
    }


}