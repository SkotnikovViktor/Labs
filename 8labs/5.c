#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>




double function_proizved(double a, int n){
    double start_number = 1.0;

    for (int k = 0; k < n; k++){
        start_number *= (a - k) / (k + 1);
    }

    

    return start_number;

}



int main(void){
    // x - второе число бинома
    // a - степень, в которую возводим

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    double a = 0.0;
    double x = 0.0;
    double toch;

    printf("Введите второе число биномиального коэффициента: ");
    scanf("%lf", &x);


 
    printf("Введите степень: ");
    scanf("%lf", &a);


    printf("Введите точность: ");
    scanf("%lf", &toch);


    if (x < 0 || a < 0){ // проверочка
        printf("Одно из чисел меньше 0!\n");
    }

    double result = 1;

    for (int n = 1;; n++){
        double term = function_proizved(a, n) * pow(x,n);
        result += term;

        if (fabs(term) < toch){
            printf("Результат программы - %lf\nЗначение из math - %lf", result, pow(1 + x, a));
            break;
        }
    }


   


    
}