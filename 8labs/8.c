#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>



int main(void){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    // Менять здесь
    int matrix_massive[5][5] = {{1,2,3,4,5},
                                {6,7,8,9,10},
                                {11,12,13,14,15},
                                {16,17,18,19,20},
                                {21,22,23,24,25}};

    int matrix_size = pow(sizeof(matrix_massive) / (sizeof(matrix_massive[0][0])),0.5);

    int massive_main_diagonile[matrix_size];
    int massive_diff_diagonile[matrix_size];
    
    int index_main_di = 0;
    int index_diff_di = 0;

    for (int i = 0; i < matrix_size; i++){
        for (int j = 0; j < matrix_size; j++){
            if (i == j){
                massive_main_diagonile[index_main_di] = matrix_massive[i][j];
                index_main_di++;
            }

            if ((i + j) == (matrix_size - 1)){
                massive_diff_diagonile[index_diff_di] = matrix_massive[i][j];
                index_diff_di++;
            }
        }
    }

    for (int i = 0; i < matrix_size; i++){
        printf("%d ",massive_main_diagonile[i]);
    }

    printf("\n");

    for (int i = 0; i < matrix_size; i++){
        printf("%d ",massive_diff_diagonile[i]);
    }
    


}

