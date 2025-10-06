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


    // Задание 1
    // а) Да, так как e2 одно и тоже условие.
    // б) Нет, так как в for мы обязаны передать условие вторым аргументом, а в while можно просто передать (0 - false, 1 - true)
    // Если в while передать 1, то получиться бесконечный цикл


    // Задание 2
    printf("Введите число, если хотите закрыть программу - 0:\n");
    long number = 0;
    long min = 99999;

    while (1){

        scanf("%d",&number);

        if (number < 0){
            printf("Нельзя вводит число меньше 0!\n");
            break;
        }

        else if (number == 0 && min != 99999){
            printf("Завершение работы программы!\nСамое минимальное вводимое число: %d\n",min);
            break;
        }

        else if (number == 0 && min == 99999){
            printf("Завершение работы программы!\nСамое минимальное вводимое число: %d\n",0);
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


    // Задание 4
    long tocn; // Переменная для точности
    double start_pos_end_sum = 1;
    int n = 2;
    int m = -1; // Переменная, которая будет менятся при каждой итер.

    printf("Введите точность: ");
    scanf("%d", &tocn);

    while (n <= tocn){
        n++;
        
        if (n % 2 != 0){
            start_pos_end_sum = start_pos_end_sum + (1.0 / n) * m;
            m = m * (-1);
            
        }
        

    }

    printf("Результат 4 задания - %.15lf\n", (start_pos_end_sum * 4));




}