#include <stdio.h>

void wieksze_od(double *firstNumber, double *secondNumber)
{
  *firstNumber = *firstNumber < *secondNumber ? *secondNumber : *firstNumber;
  *secondNumber = *firstNumber > *secondNumber ? *firstNumber : *secondNumber;
}

int main(void)
{
  double firstNumber = 6.91, secondNumber = 66.01;
  printf("Liczby przed zastosowaniem funkcji wieksze_od: %.2lf %.2lf\n", firstNumber, secondNumber);
  wieksze_od(&firstNumber, &secondNumber);
  printf("Liczby po zastosowaniu funkcji wieksze_od: %.2lf %.2lf", firstNumber, secondNumber);
}