#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int ball;

    printf("Enter ball: ");

    scanf("%d", &ball);

    if (ball >= 0 && ball <= 20){
        printf("2 balls");
    }
    else if (ball >= 21 && ball <= 40){
        printf("3 balls");
    }
    else if (ball >= 41 && ball <= 80){
        printf("4 balls");
    }
    else if (ball >= 81 && ball <=100){
        printf("5 balls");
    }
    else{
        printf("Bad answer");
    }
}