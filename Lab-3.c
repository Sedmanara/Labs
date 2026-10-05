#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS 

int main()
{
double h, a, b, S, price, perc, disc, lastpr; // Я хочу більш точне значення
int c

printf("Введи довжину першоі основи: ");
scanf(" %lf", &a);

printf("Введи довжину другої основи: ");
scanf(" %lf", &b);

printf("Введи висоту: ");
scanf(" %lf", &h);

S = ((a + b)/ 2.0) * h;

printf("Площа трапеції: %.2lf \n", S);

printf("\nЗавдання №2 \n");
printf("Введи ціну: ");
scanf(" %lf", &price);

printf("Який відсоток знижки?: ");
scanf(" %lf", &perc);

disc = price * (perc/100);
lastpr = price - disc;
printf("Знижка: %.4lf \n", disc);
printf("Фінальна ціна: %.4lf", lastpr);

printf("\nЗавдання №3 \n");

printf("Введи трьохзначне число: ");
scanf(" %d", c);


    return 0;
}