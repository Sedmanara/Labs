#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS 

int main()
{
double h, a, b, S, price, perc, disc, lastpr; // Я хочу більш точне значення
int c, d, x, n, x1;

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
scanf(" %d", &c);

d = (c % 10) * 100 + (c / 100) * 10 + (c % 100 / 10);
printf("Вийшло: %d", d);

printf("\n Завдання №4 \n");
printf("Введи число ");
scanf(" %d", &x);

printf("Введи номер біта ");
scanf(" %d", &n);

((x & (1 << n)) != 0) ? printf("Бiт 1\n") : printf("Біт 0\n");

printf("\n Завдання №5 \n");
printf("Введи число:");
scanf(" %d", &x);

printf("Введи номер біта: ");
scanf(" %d", &n);

x1 = x ^ ( 1 << n);

printf("\nБіт який був %d", x);
printf("\nБіт який став %d", x1);

    return 0;
}