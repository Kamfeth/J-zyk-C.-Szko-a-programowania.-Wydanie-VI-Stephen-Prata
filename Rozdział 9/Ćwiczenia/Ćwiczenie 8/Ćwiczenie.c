#include <stdio.h>
#include <stdlib.h>

double potega(const double a, const int b)   /* definicja ANSI  */
{
  double pot = a == 0.0 && b != 0 ? 0.0 : 1.0;
  for (int i = 1; i <= abs(b); i++)
    pot *= a;
  if (a == 0.0 && b == 0)
    printf("Działanie 0^0 jest nieokreślone - w takim przypadku zwracam wartość 1\n");
  return b < 0 ? 1 / pot : pot;          /* zwrot wartosci pot  */
}

int main(void)
{
  printf("Wynik działania 6.53^3 wynosi: %lf", potega(6.53, -3));
}