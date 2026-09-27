#include <stdio.h>
#include <math.h> // Можливість записувати математичні операції
#include <windows.h> //Щоб программа розуміла кирилицю


int main() 
{
   SetConsoleOutputCP(CP_UTF8); //Можливість писати кирилицею
   double g = 9.81; // Константа
   double v = 0.0; // Стартова швидкість дорівнює нулю

   int t = 0;

    double m_dry = 0.0;
    double m_fuel = 0.0;
    double isp = 0.0;
    double thrust = 0.0;

   printf("Характеристики ракети \n");

   printf("Введи суху массу");
   scanf(" %lf", &m_dry);

   printf("Введи массу палива");
   scanf(" %lf", &m_fuel);

   printf("Введи питому швидкість");
   scanf(" %lf", &isp);

   printf("Введи тягу");
   scanf(" %lf", &thrust);

   double u= isp * g;
   double mu= thrust / u;
   double m_current = m_dry + m_fuel;

   printf(" Старт \n");

   while (m_fuel > 0) {
    t++;

    m_fuel = m_fuel - mu;

    m_current = m_dry + m_fuel;
    v = v + (thrust / m_current) * 1.0;

   }

   printf("Результати \n");
   printf("Час роботи двигуна: %d секунд \n", t);
   printf("Фінальна швидкість: %.2f м/с \n", v);

   return 0;
}