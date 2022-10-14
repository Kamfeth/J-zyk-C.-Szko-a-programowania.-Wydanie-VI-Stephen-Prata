#include <stdio.h>

double calculateTwoNumbers(const double firstNumber, const double secondNumber)
{
  return (firstNumber - secondNumber) / (firstNumber * secondNumber);
}

int main(void)
{
  double firstNumber, secondNumber;
  printf("Wprowadź dwie liczby zmiennoprzecinkowe (wprowadzenie wartości nieliczbowej kończy działanie programu): ");
  while (scanf("%lf%lf", &firstNumber, &secondNumber) == 2)
  {
    const double calculationResult = calculateTwoNumbers(firstNumber, secondNumber);
    printf("(%lf - %lf) / (%lf * %lf) = %lf\n", firstNumber, secondNumber, firstNumber, secondNumber, calculationResult);
    printf("Wprowadź dwie liczby zmiennoprzecinkowe (wprowadzenie wartości nieliczbowej kończy działanie programu): ");
  }
  printf("Koniec programu, życzę miłego dnia!");
}