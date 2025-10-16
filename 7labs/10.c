#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen(void){
    int random = 0 + rand() % 1000;

    return random;
}


int main(void){
    srand(time(NULL));
    int matrix[5][5];

    int sum_main_diagonal = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            int t = gen();
            matrix[i][j] = t;
            if (i  == j){
                sum_main_diagonal += t;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                printf(" %d ",matrix[i][j]);
            }
        }
    }
    

    printf("\n%d\nСумма главной диагонали - ",sum_main_diagonal);



}