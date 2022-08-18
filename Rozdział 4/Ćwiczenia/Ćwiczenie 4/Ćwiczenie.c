#include <stdio.h>

int main(void)
{
  float heightInCentimeters;
  char firstName[6];
  printf("Podaj swoje imię: ");
  scanf("%s", firstName);
  printf("Podaj swój wzrost w centymetrach: ");
  scanf("%f", &heightInCentimeters);
  printf("%s, masz %.2f metra wzrostu.", firstName, heightInCentimeters / 100);
}