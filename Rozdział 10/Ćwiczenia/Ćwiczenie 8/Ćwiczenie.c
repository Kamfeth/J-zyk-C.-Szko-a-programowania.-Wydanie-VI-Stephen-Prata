#include <stdio.h>

void kopiuj_tab(const double zrodlo[], double cel[], const int liczbaElementowDoSkopiowania)
{
  for (int i = 0; i < liczbaElementowDoSkopiowania; i++)
    cel[i] = zrodlo[i];
}

int main(void)
{
  const double zrodlo[] = {7.6, 2.1, 8.9, 26.1, 64.8, 56.5, 5.4};
  double cel[3];
  printf("Dane tablicy zrodlo:\n");
  for (int i = 0; i < 7; i++)
    printf("Liczba #%d: %.1lf ", i + 1, zrodlo[i]);
  kopiuj_tab(zrodlo + 2, cel, 3);
  printf("\nDane tablicy cel:\n");
  printf("Liczba #1: %.1lf Liczba #2: %.1lf Liczba #3: %.1lf", cel[0], cel[1], cel[2]);
}