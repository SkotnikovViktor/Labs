#include <stdio.h>


int main(void)
{
    int number;

    printf("Enter number day week: ");
    scanf("%d", &number);

    switch (number){

        case 1:
            printf("Mon\n");
            break;

        case 2:
            printf("Tue\n");
            break;

        case 3:
            printf("Wed\n");
            break;

        case 4:
            printf("Thu\n");
            break;

        case 5:
            printf("Fri\n");
            break;

        case 6:
            printf("Sat\n");
            break;

        case 7:
            printf("Sun\n");
            break;


        default:
            printf("Error\n");
            break;


    }



    printf("Enter time: ");
    int time;

    scanf("%d", &time);

    if (time == 22 || time == 00 || time == 1 || time == 2 || time == 3){
        printf("Good Night!");
    }

    else if (4 <= time && time <=10){
        printf("Good Morning!");
    }

    else if (11 <= time && time <= 14){
        printf("Good Day!");
    }

    else if (15 <= time && time <= 16){
        printf("Good Afternoon!");
    }

    else if (17 <= time && time <= 21){
        printf("Good Evening!");
    }




}
