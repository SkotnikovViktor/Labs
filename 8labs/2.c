#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


double fact(long long number){

    if (number < 50){
        long long result = 1.0;

        for (int i = 1; i <= number; i++){
            result *= i;
        }


        return result;
    }

    else{
        return pow(number,number) / 1.0;
    }
}



int main(void){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double toch;
    double x;
   
    int m = 1;
   


    scanf("%lf", &toch); 
    scanf("%lf", &x);
    double sin_x = sin(x);
    double iter  = 0;
    double start_number = x;


    for (int i = 3;; i+=2){
        m = m * (-1);
        iter = (pow(x,i) / fact(i)) * m;

        start_number += iter;

        if (fabs(iter) < toch){

            printf("Результат - %lf\nЗначение из math - %lf\n",start_number,sin_x);
            break;

        }
        


    }



}