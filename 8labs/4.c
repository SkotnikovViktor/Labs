#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

double fact(long long number) {

    double result = 1.0;
        
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    
    return result;


}

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x;
    printf("Введите x: ");
    scanf("%lf", &x);

    double toch;
    printf("Введите точность: ");
    scanf("%lf", &toch);

    double result = x;
    double iter;
    
    for (int n = 1 ; ; n++){
        double numerator = fact(2 * n) * pow(x, 2*n + 1);
        double denominator = pow(4, n) * pow(fact(n), 2) * (2*n + 1);
        iter = numerator / denominator;

        result += iter;

        if (fabs(asin(x) - result) < toch){
            printf("Мой результат - %d\nЗначение из math - %d",result, asin(x));
            break;
        }
    }

}