#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("Введите коэффициент при x^2: ");
    scanf("%lf", &a);

    printf("Введите коэффициент при x: ");
    scanf("%lf", &b);

    printf("Введите свободный член кв. уравнения: ");
    scanf("%lf", &c);

    if (a == 0){
        printf("Первый коэфф. не может быть равен 0!");
        exit(0);
    }

    else if ((b*b - 4*a*c) < 0){
        printf("Дискриминант меньше 0!");
        exit(0);
    }

    else{
        double D = b*b - 4*a*c;

        double x1 = ((-1 * b + sqrt(D)) / 2*a);
        double x2 = ((-1 * b - sqrt(D)) / 2*a);

        printf("x1 = %lf\nx2 = %lf",x1,x2);
    }


}