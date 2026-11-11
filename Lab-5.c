#include <stdio.h>
#include <math.h>
#define _CRT_NO_SECURE_WARNINGS

int main()
{
    char sym;
    int start, i = 0;

    printf("\n Завдання 1 \n");

    
    do
    {
        printf("Введи кількість букв: \n");
        scanf(" %d", &start);
    } while (start < 0);

     while ( i < start)
     {
        printf("\n Введи маленьку літеру: \n");
        scanf(" %c", &sym);

        if ( sym >='a' && sym <= 'z')
        {
            sym = sym - 'a' + 'A';
            printf(" %c \n", sym);
        }
        else
        {
            printf(" %c \n", sym);
        }
        i++;
     }
     





return 0;
}