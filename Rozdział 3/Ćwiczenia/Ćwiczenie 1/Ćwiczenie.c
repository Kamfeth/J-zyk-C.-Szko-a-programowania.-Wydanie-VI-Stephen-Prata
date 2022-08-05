#include <stdio.h>

int main(void)
{
  const int maximumValueOfInteger = 2147483647;
  const double maximumValueOfDouble = 1.797693e+308, minimumValueOfDouble = 2.225074e-308;
  printf("Przepełnienie liczby typu int: %d + 1 = %d\n", maximumValueOfInteger, maximumValueOfInteger + 1);
  printf("Przepełnienie liczby typu double: %le + 0.01e+304 = %le\n", maximumValueOfDouble, maximumValueOfDouble + 0.01e+304);
  printf("Niedomiar liczby typu double: %le - 0.01 = %le", minimumValueOfDouble, minimumValueOfDouble - 0.01);
}