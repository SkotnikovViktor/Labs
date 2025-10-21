#include <stdio.h>



int main(void){

    int mass[10];
    int min_number;
    int pos;

    for (int i = 0; i < 10; i++){
        scanf("%d", &min_number);

        mass[i] = min_number;
    }


    // Сортировка выбором
    for (int i = 0; i < 10 - 1; i++){
        pos = i;
        for (int j = i+1; j < 10; j++){

            if (mass[pos] > mass[j]){
                pos = j;
            }
        }
            if (pos != i){
                int t = mass[i];
                mass[i] = mass[pos];
                mass[pos] = t;
        }
    }

    for (int i = 0; i < 10; i++){
        printf(" %d ", mass[i]);
    }

    printf("\n");


    printf("Самое минимальное число - %d\n", mass[0]);

}