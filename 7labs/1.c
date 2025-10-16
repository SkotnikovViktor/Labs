#include <stdio.h>

int main(void){
    int mass[10];
    int h = 999999;
    int min_number;

    for (int i = 0; i < 10; i++){
        scanf("%d", &min_number);
        if (min_number < h){
            h = min_number; // Определяем самое мал число
        }

        mass[i] = min_number;
    }


    printf("Элементы массива - ");
    for (int i = 0; i < 10; i++){
        
        printf("%d ", mass[i]);
    }

    printf("\n");

    printf("Минимальный элемент массива - %d\n", h);

}