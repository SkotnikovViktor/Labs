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
    int sum_vt_diagonal = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            int t = gen();
            matrix[i][j] = t;
            if (i  == j){
                sum_main_diagonal += t;
            }

            if ((i +j) == 4){
                sum_vt_diagonal += t;
            }
        }
    }


    printf("Сумма главной диагонали - %d\n",sum_main_diagonal);
    printf("Сумма другой диагонали - %d\n",sum_vt_diagonal);



    // Вывод матрицы для проверки
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

    




    


}