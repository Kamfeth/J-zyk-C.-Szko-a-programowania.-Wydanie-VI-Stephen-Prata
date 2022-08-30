#include <stdio.h>

void Temperatura(const double temperaturaWFahrenheitach)
{
  const double LICZNIK_CELSJUSZ = 5.0;
  const double MIANOWNIK_CELSJUSZ = 9.0;
  const double ROZNICA_CELSJUSZ = 32.0;
  const double LICZBA_KELWIN = 273.16;
  const double temperaturaWCelsjuszach = LICZNIK_CELSJUSZ / MIANOWNIK_CELSJUSZ * (temperaturaWFahrenheitach - ROZNICA_CELSJUSZ);
  printf("Temperatura w stopniach fahrenheita = %.2lf°F\n", temperaturaWFahrenheitach);
  printf("Temperatura w stopniach celsjusza = %.2lf°C\n", temperaturaWCelsjuszach);
  printf("Temperatura w stopniach kelwina = %.2lf°K\n", temperaturaWCelsjuszach + LICZBA_KELWIN);
}

int main(void)
{
  double temperaturaWFahrenheitach;
  printf("Wprowadź wartość temperatury w fahrenheitach (wprowadzenie wartości nieliczbowej kończy program): ");
  while (scanf("%lf", &temperaturaWFahrenheitach) == 1)
  {
    Temperatura(temperaturaWFahrenheitach);
    printf("Wprowadź wartość temperatury w fahrenheitach (wprowadzenie wartości nieliczbowej kończy program): ");
  }
  printf("Wprowadzono wartość nieliczbową, żegnaj!");
}