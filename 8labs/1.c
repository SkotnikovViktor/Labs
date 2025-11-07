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
    double x = 0.6;
    double start_number = 1.0;
    double cos_x = cos(x);
    int m = 1;


    scanf("%lf", &toch); 


    for (int i = 2;; i+=2){
        m = m * (-1);
        start_number = start_number + ((pow(x,i) / fact(i)) * m);

        if (fabs(cos_x - start_number) < toch){

            printf("Результат - %lf\nЗначение из math - %lf\n",start_number,cos_x);
            break;

        }
        

    }




}