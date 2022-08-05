#include <stdio.h>

int main(void)
{
  double heightInCentimeters, heightInInches;
  printf("Podaj swój wzrost w centymetrach: ");
  scanf("%lf", &heightInCentimeters);
  printf("Twój wzrost w calach wynosi %lf\n", heightInCentimeters * 2.54);
  printf("Podaj swój wzrost w calach: ");
  scanf("%lf", &heightInInches);
  printf("Twój wzrost w centymetrach wynosi %lf", heightInInches / 2.54);
}