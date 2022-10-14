#include <stdio.h>

int main(void)
{
  double numbers[8], cumulativeSumsOfNumbers[8], sumOfNumbers = 0.0;
  printf("Wprowadź osiem liczb zmiennoprzecinkowych do tablicy #1: ");
  for (int i = 0; i < 8; i++)
  {
    scanf("%lf", &numbers[i]);
    sumOfNumbers += numbers[i];
    cumulativeSumsOfNumbers[i] = sumOfNumbers;
  }
  printf("Elementy tablicy #1: ");
  for (int i = 0; i < 8; i++)
    printf("%12lf ", numbers[i]);
  printf("\nElementy tablicy #2: ");
  for (int i = 0; i < 8; i++)
    printf("%12lf ", cumulativeSumsOfNumbers[i]);
}