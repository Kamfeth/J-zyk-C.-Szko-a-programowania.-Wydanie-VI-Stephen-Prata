#include <stdio.h>

#define BASIC_HOURLY_WAGE 40
#define OVERTIME_WAGE 1.5
#define TAX_FOR_FIRST_1200_PLN 0.15
#define TAX_FOR_NEXT_600_PLN 0.2
#define TAX_FOR_REST_OF_SALARY 0.25

int main(void)
{
  int hours;
  printf("Wprowadź liczbę przepracowanych godzin w tygodniu: ");
  scanf("%d", &hours);
  const double grossSalary = hours <= 40 ? hours * BASIC_HOURLY_WAGE : 1600.0 + (hours - 40) * BASIC_HOURLY_WAGE * OVERTIME_WAGE;
  double tax;
  if (grossSalary <= 1200.0)
    tax = grossSalary * TAX_FOR_FIRST_1200_PLN;
  else if (grossSalary <= 1800.0)
    tax = 180.0 + (grossSalary - 1200.0) * TAX_FOR_NEXT_600_PLN;
  else
    tax = 300.0 + (grossSalary - 1800.0) * TAX_FOR_REST_OF_SALARY;
  printf("Twoje wynagrodzenie brutto wynosi: %.2lf zł\n", grossSalary);
  printf("Twój podatek za otrzymane wynagrodzenie wynosi: %.2lf zł\n", tax);
  printf("Twoje wynagrodzenie netto wynosi: %.2lf zł", grossSalary - tax);
}
