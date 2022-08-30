#include <stdio.h>

int main(void)
{
  double heightInCM;
  printf("Podaj wzrost w centymetrach: ");
  while (scanf("%lf", &heightInCM) && heightInCM > 0.0)
  {
    printf("%.1lf cm = %d stop, %.2lf cali\n", heightInCM, (int)(heightInCM / 30.48), heightInCM / 2.54);
    printf("Podaj wzrost w centymetrach (<=0 - koniec): ");
  }
  printf("Do widzenia!");
}