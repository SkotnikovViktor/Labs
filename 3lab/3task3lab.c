#include <stdio.h>

int main(void){
    int x = 1;
    int y = 0;
    int z = 1;

    int result = ((x | y) & (!z));

    printf("%d\n",result);

}