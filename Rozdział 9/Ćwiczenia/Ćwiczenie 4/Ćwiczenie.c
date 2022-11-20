#include <stdio.h>

double calculateHarmonicMeanOfTwoNumbers(const double firstNumber, const double secondNumber)
{
  return 2 / (1 / firstNumber + 1 / secondNumber);
}

int main(void)
{
  printf("Średnia harmoniczna liczb 94.95 oraz 21.37 wynosi: %.2lf", calculateHarmonicMeanOfTwoNumbers(94.95, 21.37));
}