#include <stdio.h>

void printCubeOfNumber(const float number)
{
  printf("Liczba %f podniesiona do potęgi 3 jest równa %f", number, number * number * number);
}

int main(void)
{
  float number;
  printf("Wprowadź liczbę zmiennoprzecinkową: ");
  scanf("%f", &number);
  printCubeOfNumber(number);
}