#include <ctype.h>
#include <stdio.h>

#define BASIC_HOURLY_WAGE_35_PLN 35
#define BASIC_HOURLY_WAGE_37_PLN 37
#define BASIC_HOURLY_WAGE_40_PLN 40
#define BASIC_HOURLY_WAGE_45_PLN 45
#define OVERTIME_WAGE 1.5
#define TAX_FOR_FIRST_1200_PLN 0.15
#define TAX_FOR_NEXT_600_PLN 0.2
#define TAX_FOR_REST_OF_SALARY 0.25

void printMenu(void)
{
  printf("***************************************************************\n");
  printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
  printf("a) 35 zl/godz.                         b) 37 zl/godz.\n");
  printf("c) 40 zl/godz.                         d) 45 zl/godz.\n");
  printf("q) wyjscie\n");
  printf("***************************************************************\n\n");
  printf("Wybierz opcję: ");
}

double calculateGrossSalary(const int workedHours, const int hourlyWage)
{
  return workedHours <= 40 ? workedHours * hourlyWage : 1600.0 + (workedHours - 40) * hourlyWage * OVERTIME_WAGE;
}

double calculateGrossSalaryBasedOnChosenOption(const char option, const int workedHours)
{
  switch (option)
  {
    case 'a': return calculateGrossSalary(workedHours, BASIC_HOURLY_WAGE_35_PLN);
    case 'b': return calculateGrossSalary(workedHours, BASIC_HOURLY_WAGE_37_PLN);
    case 'c': return calculateGrossSalary(workedHours, BASIC_HOURLY_WAGE_40_PLN);
    case 'd': return calculateGrossSalary(workedHours, BASIC_HOURLY_WAGE_45_PLN);
  }
}

int main(void)
{
  printMenu();
  char option;
  while ((option = tolower(getchar())) != 'q')
  {
    if (option != 'a' && option != 'b' && option != 'c' && option != 'd')
    {
      printf("Wybrano nieprawidłową opcję, powracam do menu głównego\n\n");
      printMenu();
      getchar();
      continue;
    }
    int workedHours;
    printf("Wprowadź liczbę przepracowanych godzin w tygodniu: ");
    scanf("%d", &workedHours);
    const double grossSalary = calculateGrossSalaryBasedOnChosenOption(option, workedHours);
    double tax;
    if (grossSalary <= 1200.0)
      tax = grossSalary * TAX_FOR_FIRST_1200_PLN;
    else if (grossSalary <= 1800.0)
      tax = 180.0 + (grossSalary - 1200.0) * TAX_FOR_NEXT_600_PLN;
    else
      tax = 300.0 + (grossSalary - 1800.0) * TAX_FOR_REST_OF_SALARY;
    printf("Twoje wynagrodzenie brutto wynosi: %.2lf zł\n", grossSalary);
    printf("Twój podatek za otrzymane wynagrodzenie wynosi: %.2lf zł\n", tax);
    printf("Twoje wynagrodzenie netto wynosi: %.2lf zł\n\n", grossSalary - tax);
    printMenu();
    getchar();
  }
  printf("Koniec działania programu, życzę miłego dnia!");
}
