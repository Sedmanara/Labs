#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{

    double x, y, a, b, r1, r2, Dist;
    float sum, profit, percent;
    int months;
    printf("Введи координати x та y: \n");
    scanf(" %lf %lf", &x, &y);
    printf("Введи координати центра кільця a та b: \n");
    scanf(" %lf %lf", &a, &b);
    printf("Введи радіуси r1 та r2: \n");
    scanf(" %lf %lf", &r1, &r2);

    Dist = (x - a)*(x - a) + (y - b)*(y - b);
    if  (Dist >= r1*r1 && Dist <= r2*r2)
    {
        printf("1 \n");
    }
    else
    {
        printf("0 \n");
    }

    printf("Завдання №2 \n");
    
    printf("Введи сумму вклада та строк вкладу: \n");
    scanf(" %f %d", &sum, &months);

    switch (months)
    {
        case 3:   percent = 9.0;  break;
        case 6:  percent = 11.5; break;
        case 12:  percent = 13.5; break;
        case 18:  percent = 15.0; break;
        case 24:  percent = 18.0; break;
        case 36:  percent = 24.0; break;
    
    default: { printf("Такого строку немає \n"); return 0; } 
    }
    profit = sum * (percent / 100.0) * (months / 12.0);
    printf("Прибуток за %d місяців: %.2f\n", months, profit);



return 0;
} 