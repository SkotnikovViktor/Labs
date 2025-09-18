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

    switch (time){
        case 22:
        case 23:
        case 00:
        case 1:
        case 2:
        case 3:
            printf("Good Night!\n");
            break;
        
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Good Morning!\n");
            break;


        
        case 11:
        case 12:
        case 13:
        case 14:
            printf("Good Day!\n");
            break;
        
        case 15:
        case 16:
            printf("Good Afternoon!\n");
            break;
        
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
            printf("Good Evening!\n");
            break;


    }   

}
