#include <stdio.h>
#include <stdlib.h>
// Переделать
int main(void){

    int mas1[10] = {1,2,3,4,9,20,90,1000,484,1000};
    int mas2[4] = {5,6,7,8};

    int len_mas1 = sizeof(mas1) / sizeof(mas1[0]);
    int len_mas2 = sizeof(mas2) / sizeof(mas2[0]);

    int mas_merge[len_mas1 + len_mas2];
    int index = 0;
    int pos;

    for (int i = 0; i < len_mas1; i++){
        mas_merge[i] = mas1[i];
        index = i;
    }

    for (int j = 0; j < len_mas2; j++){
        index++;
        mas_merge[index] = mas2[j];
    }



    for (int i = 0; i < (len_mas1 + len_mas2 - 1); i++){
        pos = i;
        for (int j = i+1; j < (len_mas1 + len_mas2); j++){

            if (mas_merge[pos] > mas_merge[j]){
                pos = j;
            }
        }
            if (pos != i){
                int t = mas_merge[i];
                mas_merge[i] = mas_merge[pos];
                mas_merge[pos] = t;
        }
    }



    for (int i = 0; i < (len_mas1 + len_mas2); i++){
        printf(" %d ", mas_merge[i]);
    }

}