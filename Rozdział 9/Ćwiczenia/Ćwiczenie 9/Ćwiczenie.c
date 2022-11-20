#include <stdio.h>

double potega(const double a, const int b)   /* definicja ANSI  */
{
  if (a == 0.0 && b == 0)
    printf("Działanie 0^0 jest nieokreślone - w takim przypadku zwracam wartość 1\n");
  if (b == 0)
    return 1;
  else if (b > 0)
    return a * potega(a, b - 1);
  else
    return 1 / potega(a, -b);
}

int main(void)
{
  printf("Wynik działania 6.53^3 wynosi: %lf", potega(6.53, -3));
}