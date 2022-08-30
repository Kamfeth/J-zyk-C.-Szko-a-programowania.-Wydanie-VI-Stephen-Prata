#include <stdio.h>

int main(void)
{
  int numberOfDays;
  printf("Wprowadź liczbę dni (liczba 0 lub -20 kończy program): ");
  while (scanf("%d", &numberOfDays) && numberOfDays != 0 && numberOfDays != -20)
  {
    printf("%d dni to %d tygodnie, %d dni.\n", numberOfDays, numberOfDays / 7, numberOfDays % 7);
    printf("Wprowadź liczbę dni (liczba 0 lub -20 kończy program): ");
  }
  printf("Wprowadzono liczbę równą %d dni, koniec działania programu. Do widzenia!", numberOfDays);
}