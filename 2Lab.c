#include <stdio.h>
#include <stdlib.h> // Для 4 Hard задания

int main(void)
{
    // Задание 1
    printf("Viktor Skotnikov\n");

    // Задание 2
    //printf("%sУнылая пора! Очей очарованье!\nПриятна мне твоя прощальная краса - \nЛюблю я пышное пророды увяданье,\nВ багрец и золото одетые л е с а .\nА. С. Пушкин\n");

    // Задание 3(Возможно неверно, так как задание составлено криво)
    double a = 44.5;
    double b = 55.2;
    double c = 3.9;

    printf("a = %.3f\nb = %.3f\nc = %.3f\n",a,b,c);

    // Задание 4
    int a1 = 5, b1 = 7, c1 = 8;
    printf("a - %d\tb - %d\tc - %d\n",a1,b1,c1);

    // Задание 5
    // Переменные берутся из задание номер 4
    printf("a - %d\nb - %d\nc - %d\n",a1,b1,c1);

    // Задание 6
    double x1 = 5.5, x2 = 9.9;
    printf("Variable x1 = %.2f\nVariable x2 = %.2f\n",x1,x2);

    // Задание 1 Hard
    printf("int - %d bytes\ndouble - %d bytes\nchar - %d byte\n",sizeof(int), sizeof(double), sizeof(char));

    // Задание 2 Hard(пока не решено)
    double y = 5.55;
    printf("%s\n",y);

    // Задание 3
    printf("\"Строка в кавычках\"");

    // Задание 4(пока не решено)

}
