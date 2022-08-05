#include <stdio.h>

int main(void)
{
  double number;
  printf("Podaj liczbę zmiennoprzecinkową: ");
  scanf("%lf", &number);
  printf("Podana liczba to %lf lub %le lub %la", number, number, number);
}