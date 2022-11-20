#include <stdio.h>

void sortAscendingFunctionParameters(double *firstNumber, double *secondNumber, double *thirdNumber)
{
  double temporaryNumber;
  if (*firstNumber > *secondNumber)
  {
    temporaryNumber = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temporaryNumber;
    if (*firstNumber > *thirdNumber)
    {
      temporaryNumber = *firstNumber;
      *firstNumber = *thirdNumber;
      *thirdNumber = temporaryNumber;
    }
  }
  if (*thirdNumber < *secondNumber)
  {
    temporaryNumber = *thirdNumber;
    *thirdNumber = *secondNumber;
    *secondNumber = temporaryNumber;
  }
}

int main(void)
{
  double firstNumber = 99.7, secondNumber = 0.41, thirdNumber = 31.56;
  printf("Liczby przed zastosowaniem funkcji: %.2lf %.2lf %.2lf\n", firstNumber, secondNumber, thirdNumber);
  sortAscendingFunctionParameters(&firstNumber, &secondNumber, &thirdNumber);
  printf("Liczby po zastosowaniu funkcji: %.2lf %.2lf %.2lf", firstNumber, secondNumber, thirdNumber);
}