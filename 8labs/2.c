#include <stdio.h>
#include <stdlib.h>
#include <math.h>



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
    
    double toch;
    double x = 0.6;
    double start_number;
    double sin_x = sin(x);
    int m = 1;


    scanf("%lf", &toch); 


    for (int i = 3;; i+=2){
        m = m * (-1);
        start_number = x + (pow(x,i) / fact(i)) * m;

        if (fabs(sin_x - start_number) < toch){

            printf("Результат - %lf\nЗначение из math - %lf\n",start_number,sin_x);
            break;

        }
        


    }



}