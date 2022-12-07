#include <stdio.h>

void kopiuj_tab(const double zrodlo[], double cel[], const int liczbaElementowDoSkopiowania)
{
  for (int i = 0; i < liczbaElementowDoSkopiowania; i++)
    cel[i] = zrodlo[i];
}

int main(void)
{
  const double zrodlo[4][3] = {{8.5, 3.1, 5.4}, {48.8, 31.6, 16.7}, {6.4, 1.1, 0.5}, {8.7, 64.6, 21.3}};
  double cel[4][3];
  for (int i = 0; i < 4; i++)
  {
    printf("Iteracja #%d - Tablica źródłowa: %.1lf %.1lf %.1lf\n", i + 1, zrodlo[i][0], zrodlo[i][1], zrodlo[i][2]);
    kopiuj_tab(zrodlo[i], cel[i], 3);
    printf("Iteracja #%d - Tablica docelowa: %.1lf %.1lf %.1lf\n", i + 1, cel[i][0], cel[i][1], cel[i][2]);
  }
}