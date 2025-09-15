#include <stdio.h>
int main(void)
{
    // Задание 1
    double x = -1.5;
    // Задание 2
    int summa = 0;
    // Задание 3
    int n = 5;
    n++; // n = n + 1
    printf("3 %d\n",n);

    // Задание 4
    int count = 66;
    count = count - 2;
    printf("4 %d\n",count);

    // Задание 5

    double x1 = 5, x2 = 100;
    double result = (x1 + x2)/2;
    printf("Task 5 - %.3f\n", result);

    // Задание 6
    int X = 50;
    int dx = 3;
    printf("%d\n",X+dx);

    // Задание 7
    double fy = 3;
    double c = 453.592;
    printf("%f\n",fy * c / 1000);

    // Задание 8
    double km = 5.5;
    const double verst = 1066.8;
    printf("Result 8 - %f\n", km * verst);

    // Задание 9
    double a = 5, b = 10.5;
    printf("%f\n", a * b);

    // Задание 10
    double u = 10, h = 5;
    printf("%f\n", 0.5*u*h);

    // Задание 11
    double up_o = 5, down_o = 50, v = 4;
    double oo = (up_o + down_o)/2*v;
    printf("%f\n",oo);

    // Задание 12
    double price_books = 55.99, price_obl = 44.33, price_pen = 22.9;
    int count_books, count_obl, count_pen;

    scanf("%d", &count_books); // Кол-во тетрадей
    scanf("%d", &count_obl); // Кол-во обложек
    scanf("%d", &count_pen); // Кол-во карандашей

    

    printf("Price all books - %f\nPrice all obl  - %f\nPrice all pens - %f\nFull price - %f", price_books*count_books, price_obl*count_obl, price_pen * count_pen, (price_books*count_books + price_obl*count_obl + price_pen * count_pen));

    // Задание 13 UPD
    double price_tomato = 55.55, price_cucumber = 44.2, price_ykrop = 4;
    int count_tomato, count_cucumber, count_ykrop;

    scanf("%d", &count_tomato); // Кол-во томатов
    scanf("%d", &count_cucumber); // Кол-во огурцов
    scanf("%d", &count_ykrop); // Кол-во пучков укропа

    double pr_co_tom = price_tomato*count_tomato, pr_co_cuc = price_cucumber * count_cucumber, pr_co_ykr = price_ykrop * count_ykrop;
    printf("Price all tomato - %f\nPrice all cucumber - %f\nPrice all ykrop - %f\nFull price - %f",pr_co_tom,pr_co_cuc,pr_co_ykr, pr_co_tom+pr_co_cuc+pr_co_ykr);



    

}
