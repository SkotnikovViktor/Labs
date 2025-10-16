#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mas1[4] = {1,2,3,4};
    int mas2[4] = {5,6,7,8};
    int mas_merge[8];


    int m = 0;

    for (int i = 0; i < 4; i++){
        mas_merge[i] = mas1[i];
    }
    
    for (int j = 4; j < 8; j++){
        mas_merge[j] = mas2[m];
        m++;

    }

    for (int i  = 0; i < 8; i++){
        printf(" %d ", mas_merge[i]);
    }
}