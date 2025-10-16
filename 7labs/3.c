#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int gen(void){
    int random = 0 + rand() % 100;

    return random;
}


int main(void){
    srand(time(NULL));

    int len_massive = gen();
    int massive[len_massive];
    int pos;


    for (int i = 0; i < len_massive; i++){
        massive[i] = gen();
    }

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
        printf("%d ", massive[i]);
    }



}