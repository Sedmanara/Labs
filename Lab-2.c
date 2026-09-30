#include <stdio.h>


int main()
{
    char title[50];       
    char autor[60];     
    int year;             
    int pages;            
    float price;          
    double rating;        

    printf("Напиши назву книги:\n");
    scanf(" %[^\n]s", title); 

    printf("Введи автора:\n");
    scanf(" %[^\n]s", autor);

    printf("Рік книги:\n");
    scanf("%d", &year);

    printf("Кількість сторінок:\n");
    scanf("%d", &pages);

    printf("Введіть ціну книги:\n");
    scanf("%f", &price);

    printf("Введіть рейтинг книги:\n");
    scanf("%lf", &rating);

    printf(" Книга: \n");
    printf(" Назва книги: %s\n", title);
    printf(" Автор книги: %s\n", autor);
    printf(" Рік книги: %d\n", year);
    printf(" Кількість сторінок: %d\n", pages);
    printf(" Ціна книги: %.2f $ \n", price); 
    printf(" Рейтинг книги %.1lf\n", rating);


    // Завдання №2 лабораторної роботи
    int words = 3020;
    int lines = 350;

    printf(" Завдання №2 \n");
    printf("There were %o words and %d lines.\n", words, lines);

    return 0;
}