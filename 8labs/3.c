#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

double fact(long long number) {

    double result = 1.0;
        
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    
    return (double)result;


}

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x; 
    printf("Введите x: ");
    scanf("%lf", &x);

    double toch;
    printf("Введите точность: ");
    scanf("%lf", &toch);

    double result = 1.0;
    double prev_result = 0.0;

    for (int n = 1; ; n++) { 
        double term = (pow(-1, n) * fact(2 * n)) / 
                     ((1 - 2 * n) * pow(fact(n), 2) * pow(4, n)) * pow(x, n);
        
        result += term;


        if (fabs(sqrt(1 + x) - result) < toch) {
            printf("Мой результат: %lf \nЗначение math: %lf\n", result, sqrt(1 + x));
            break;
        }
        

        
    }

    return 0;
}