#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{


    int gen_6(void){
        int random = 0 + rand() % 11;

        return random;
    }



    // Задание 1
    printf("---------\n");
    printf("Number\tNumber^2\n");

    for (int i = 0; i <= 10; i++){
        if (i % 2 != 0){
                printf("%d\t%d\n",i, i*i);
        }


    }

    printf("---------\n\n");


    // Задание 2
    long number;
    long summa = 0;

    printf("Enter number: ");

    scanf("%ld", &number);

    for (long i = 0; i <= number; i++){

        if (i % 2 == 0){
            summa = summa + i;
        }
    }

    printf("Result - %ld\n", summa);


    // Задание 3
    long n = 0;
    double sum = 0;
    printf("Введите n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){

        sum += pow(-1, (i + 1)) * i;

    }

    printf("Tesk 3 result - %lf\n", sum);




    // Задание 5
    long number_5;
    long factorial = 1;

    printf("Enter number:");
    scanf("%ld", &number_5);

    for (int i = 1; i <= number_5; i++){
        factorial *= i;
    }

    printf("Result - %d\n", factorial);


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
