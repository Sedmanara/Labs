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
    printf("\n Завдання №2 \n");
    char text[8];
    char result[8];
    int j = 0;
    printf("Введи символи: \n");
    scanf(" %8s", text);

    i = 0;
    do
    {
        if ( text[i] == '+' && text[i+1] >= '0' && text[i+1] <= '9')
        {
         
        }
        else
        {
            result[j]= text[i];
            j++;
        }
        i++;
    } while ( text[i] != '\0');
    result[j]='\0';
    printf(" %s \n", result);

    printf("\n Завдання №3 \n");
    char line[30];
    int len_sym = 0, len_num = 0, len_let = 0, max_len = 0, count = 0, winner = 0;
    i = 0;
    printf("Введи рядок символів: \n");
    scanf(" %29s", line);

    while ( line[i] != '\0')
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))

        {
            len_let++;
            if (len_let > max_len)
            {
                max_len = len_let;
            }
            
        }
        else 
        {
            len_let = 0;
        }

         if (line[i] == '+' || line[i] == '-' || line[i] == '*')

        {
            len_sym++;
            if (len_sym > max_len)
            {
                max_len = len_sym;
            }
            
        }
        else 
        {
            len_sym = 0;
        }

         if (line[i] >= '0' && line[i] <= '9')

        {
            len_num++;
            if (len_num > max_len)
            {
                max_len = len_num;
            }
            
        }
        else 
        {
            len_num = 0;
        }
        i++;
        printf(" %d", max_len);
    }
    





return 0;
}