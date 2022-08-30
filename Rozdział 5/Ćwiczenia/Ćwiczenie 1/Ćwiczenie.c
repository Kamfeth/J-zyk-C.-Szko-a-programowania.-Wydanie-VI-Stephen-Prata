#include <stdio.h>

int main(void)
{
  const int ONE_HOUR_IN_MINUTES = 60;
  int minutes;
  printf("Wprowadź liczbę minut (wartość ujemna lub zero kończy program): ");
  while (scanf("%d", &minutes) && minutes > 0)
  {
    printf("Podana liczba to inaczej %d godzin oraz %d minut.\n", minutes / ONE_HOUR_IN_MINUTES, minutes % ONE_HOUR_IN_MINUTES);
    printf("Wprowadź liczbę minut (wartość ujemna lub zero kończy program): ");
  }
  printf("Wprowadzono liczbę minut %d, koniec działania programu. Do widzenia!", minutes);
}