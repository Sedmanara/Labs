#include <stdio.h>

int main() 
{
    int a;
    int b;
    int jet;

    printf("Vvedi a: ");
    scanf("%d", &a); // Сначала КЛАДЕМ число в коробку "а"

    printf("Vvedi b: ");
    scanf("%d", &b); // Потом КЛАДЕМ число в коробку "b"

    jet = a + b;

    printf("Resultat jet: %d\n", jet); // И только теперь выводим сумму!

    return 0;
}