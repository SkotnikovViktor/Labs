#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int gen_6(void){
    int random = 0 + rand() % 5;

    return random;
}


int main(void){
    srand(time(NULL));

    int len_massive = gen_6();

    int massive[len_massive];

    for (int i = 0; i < len_massive; i++){
        massive[i] = gen_6();
        printf("%d",massive[i]);
    }

    for (int i = 0; i < len_massive - 1; i++){
        for (int j = 0; i < len_massive - 1 - i;j++){
            if (massive[j] > massive[j + 1]){
                massive[j], massive[j + 1] = massive[j + 1], massive[j];
            }
        }
    }

    for (int i = 0; i < len_massive; i++){
        printf("%d ", massive[i]);
    }
}