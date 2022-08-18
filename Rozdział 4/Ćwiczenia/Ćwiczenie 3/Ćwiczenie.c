#include <stdio.h>

int main(void)
{
  double number;
  printf("Proszę wprowadzić liczbę zmiennoprzecinkową: ");
  scanf("%lf", &number);
  printf("Wpisano liczbę %.1lf lub %.1le.\nWpisano liczbę %+.3lf lub %.3lE.", number, number, number, number);
}