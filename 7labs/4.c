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


    

    if (len_massive != 0)
        for (int i = 1; i < len_massive - 1; i++){
            sum += massive[i];
            count++;
            printf(" %d ", massive[i]);
        }

    else{
        printf("Длина массива равна 0!\n");
        exit(0);
    }


    if (sum != 0){
        printf("\n%lf\n", sum / (count * 1.0)); 
    }

    else{
        printf("Сумма равна 0");
        exit(0);
    }
    






}