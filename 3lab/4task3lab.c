#include <stdio.h>
#include <math.h>

int main(void)
{

    int find_min(int a, int b){

        if (a > b){
            return b;
        }
        else{
            return a;
        }
    }

    int find_max(int a, int b){

        if (a > b){
            return a;
        }

        else{
            return b;
        }
    }


    double a, b, c;
    double max, med, min;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    min = find_min(a,find_min(b,c));
    max = find_max(a,find_max(b,c));
    
    double sum = a+b+c;
    med = sum - (min + max);




    printf("Very small - %.1f\n%.1f %.1f %.1f",min,min,med,max);
}