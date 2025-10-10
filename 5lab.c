#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
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
    int ov_number;
    int count_ov;
    int sum_ov;

    printf("Введите число для 2 задания: ");
    scanf("%d",&ov_number);

    for (int i = 0;;i+=2){
        if (count_ov <= ov_number && i % 2 == 0){
            sum_ov += i;
            count_ov++;
        }
        
        else{
            break;
        }
    }

    printf("Результат 2 задания - %d\n", sum_ov);


    // Задание 3
    double number_d_3 = 1;
    int m_3 = 1;
    int n_3 = 0;
    printf("Введите для 3 задания: ");
    scanf("%d",&n_3);



    for (int i = 2; i <= n_3; i++){
        
        m_3 = m_3 * (-1);
        number_d_3 = number_d_3 + (1.0 / i) * m_3;
    }

    printf("Результат 3 задания - %lf\n",number_d_3);



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

    printf("Result 5 task - %lld\n", factorial);


    // Задание 6
    long sr_a = 0;

    for (int i = 0; i < 10; i++){
        int a = gen_6();
        sr_a += a;
        printf("%d\n", a);
    }

    printf("Result medium arip. - %d\n", sr_a / 10);


    // Задание 7

    for (int i = 2; i <= 9; i++){
        
        printf("\n");

        for (int j = 1; j <= 9; j++){
            
            printf("%d * %d = %d\n",i,j, i * j);

        }
    }



}


