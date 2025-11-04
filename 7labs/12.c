#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen(void){
    int random = 0 + rand() % 10;

    return random;
}


int main(void){
    srand(time(NULL));


    int size = 5;
    int matrix[size][size]; // Создаётся массив длиной 25

    int rows_massive[size * size];
    int column_massive[size * size];


    for (int i = 0; i < size; i++){ // Забиваем матрицу псевдорандомными числами
        for (int j = 0; j < size; j++){

            int test = gen();
            matrix[i][j] = test;
            printf(" %d ", test);

        }

        printf("\n");
    }





  
    // Реализация генерации по строчкам
    int count_rows = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){

            rows_massive[i * size + j] = matrix[i][j];

            count_rows++;
        }
        
    }


    
    // Реализация генерации по столбцам
    int count_column = 0;
    for (int j = 0; j < size; j++){
        for (int i = 0; i < size; i++){

            column_massive[j * size + i] = matrix[i][j];

            count_column++;

        }
    }   

    

    
    printf("First: ");
    // Вывод для проверки
    for (int i = 0; i < size * size; i++){
        printf(" %d ", column_massive[i]);

    }


    printf("\n");


    printf("Second: ");
    for (int i = 0; i < size * size; i++){
        printf(" %d ", rows_massive[i]);

    }


}