#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen(void){
    int random = 0 + rand() % 10;

    return random;
}



int sr(int a, int b){
    if (a > b){
        return a;
    }
    
    else if (b > a){
        return b;
    }

    else{
        return a;
    }
}

// переделать

int main(void){
    srand(time(NULL));
    int matrix[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrix[i][j] = gen();
            printf( "%d ",matrix[i][j]);
        }
        printf("\n");
    }



    int sum_line[3];
    int sum = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum += matrix[i][j];
        }
        sum_line[i] = sum;
        sum = 0;
    }

    int max_summ = sr(sum_line[0], sr(sum_line[1],sum_line[2]));
    printf("%d", max_summ);



}