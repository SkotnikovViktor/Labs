#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen(void){
    int random = 0 + rand() % 10000;

    return random;
}


int main(void){
    srand(time(NULL));
    int matrix[6][5];

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            matrix[i][j] = gen();
        }
    }

    for (int i  = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

}