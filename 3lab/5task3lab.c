#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{   
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 2 == 0){
        printf("1");
    }
    else{
        printf("0");
    }
}