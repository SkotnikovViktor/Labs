#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gen(void){
    int random = 0 + rand() % 10;

    return random;
}


int main(void){
    srand(time(NULL));

    int len_massive = gen();
    int massive[len_massive];
    int pos;
    int sum,count;


    for (int i = 0; i < len_massive; i++){
        massive[i] = gen();
    }


    printf("Base - ");
    for (int i = 0; i < len_massive; i++){
        printf(" %d ", massive[i]);
    }
    printf("\n");



    // Сортировка выбором
    for (int i = 0; i < len_massive - 1; i++){
        pos = i;
        for (int j = i+1; j < len_massive; j++){

            if (massive[pos] > massive[j]){
                pos = j;
            }
        }
            if (pos != i){
                int t = massive[i];
                massive[i] = massive[pos];
                massive[pos] = t;
        }
    }


    for (int i = 0; i < len_massive; i++){
        if (massive[i] != massive[0] && massive[i] != massive[len_massive - 1]){
            sum += massive[i];
            count++;
        }
    }


    if (sum != 0){
        printf("%lf\n", sum / (count * 1.0));
    }
    
    else{
        printf("Ср. арифм = 0\n");
    }





}