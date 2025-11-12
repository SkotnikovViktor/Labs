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

    double result = 0; // Спросить насчёт x! 
    double iter = 0;

    
    for (int n = 0 ; ; n++){
        double numerator = fact(2 * n);
        double denominator = pow(4, n) * pow(fact(n), 2) * (2*n + 1);
        iter = (numerator / denominator)  * pow(x, 2*n + 1); 
   

        result += iter;

        if (fabs(iter) < toch){
            printf("Результат программы - %lf\nЗначение из math - %lf",result, asin(x));
            break;
        }

       
    }

}