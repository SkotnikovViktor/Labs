#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Совместить в один
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

    // Подсчёт суммы строк
    int right_sum[6] = {0};
    int sum = 0;
    for (int i = 0; i < 6; i++){
        sum = 0;
        for (int j = 0; j < 5; j++){
            sum += matrix[i][j];

        }

        right_sum[i] = sum;
        
    }


    // Суммы по столбцам 
    int bottom_sum[5] = {0};
    
    for (int j = 0; j < 5; j++) {
        sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += matrix[i][j];
        }
        bottom_sum[j] = sum;
    }





    for (int i  = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("| %d\n",right_sum[i]);
    }
    printf("-----------------------------------------\n");

    for (int i = 0; i < 5; i++){
        printf("%d\t", bottom_sum[i]);
    }
    printf("\n");

}