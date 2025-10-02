#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm
// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm
// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm
// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm
// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm
// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm
// ДАННЫЙ ФАЙЛ РЕКМОЕНДУЕТСЯ ЗАПУСКАТЬ ЧЕРЕЗ КОМАНДУ: gcc 5lab.c -o aa -lm

// -lm означает, что нужно подключить стандартную математическую библиотеку

int main(void)
{


    int gen_6(void){
        int random = 1 + rand() % 10;

        return random;
    }



    // Задание 1

    printf("----------------\n");
    printf("Number\tNumber^2\n");
    int count_1 = 0;
    for (int i = 1;;i+=2){
        if (count_1 < 10 && i >= 0){
            printf("%d\t%d\n",i,i*i);
            count_1++;
        }
        else{
            break;
        }

    }
    printf("----------------\n");




    // Задание 2
    long number;
    long summa = 0;

    printf("Enter number for 2 task: ");
  
    scanf("%ld", &number);

    for (long i = 0; i <= number; i++){

        if (i % 2 == 0){
            summa = summa + i;
        }
    }

    printf("Result 2 - %ld\n", summa);



    // Задание 3
    int n_3;
    double sum = 0;

    printf("Enter n for 3 task: ");
    scanf("%d",&n_3);

    for (int i = 1; i <= n_3; i++){
        if (i % 2 == 0){
            sum += 1.0 / i;
        }

        else {
            sum -= 1.0 / i;
        }
    }

    printf("Result 3 - %lf\n", sum + 1);


    // Задание 4
    double number_d = 1;
    int m = 1;



    for (int i = 2; i <= 100000000; i++){
        
        m = m * (-1);
        number_d = number_d + (1.0 / i) * m;
    }



    printf("Result 4 task - %lf\nLn(2) = %lf\n", number_d, log(2.0));



    // Задание 5
    long number_5;
    long long factorial = 1;
    long long factorial_2 = 1;

    printf("Enter number for 5 task:");
    scanf("%ld", &number_5);


    for (long long i = 1; i <= number_5; i++){
        factorial *= i;
    }


    printf("Result(Стирлинг) 5 ~ %lld\n", (sqrt(2*3.14*number_5) * pow((number_5 / 2.718),number_5)));
    printf("Result(for) 5 - %lld\n", factorial);


    // Задание 6
    long sr_a = 0;

    for (int i = 0; i < 10; i++){
        sr_a += gen_6();
    }

    printf("Result medium arip. - %d\n", sr_a);


    // Задание 7

    for (int i = 2; i <= 9; i++){
        
        printf("\n");

        for (int j = 1; j <= 9; j++){
            
            printf("%d * %d = %d\n",i,j, i * j);

        }
    }



}


