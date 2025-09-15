#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double delimoe, delitel;

    printf("Enter delimoe: ");
    scanf("%lf", &delimoe);
    
    printf("Enter delitel: ");
    scanf("%lf", &delitel);

    if (delitel == 0){
        printf("Zero division!");
        exit(0);
    }

    else {
        printf("%.3f\n",delimoe / delitel);    
    }
}