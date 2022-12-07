#include <stdio.h>

void kopiuj_tab(const double zrodlo[], double cel[], const int liczbaElementowDoSkopiowania)
{
  for (int i = 0; i < liczbaElementowDoSkopiowania; i++)
    cel[i] = zrodlo[i];
}

void kopiuj_wsk(const double zrodlo[], double cel[], const int liczbaElementowDoSkopiowania)
{
  for (int i = 0; i < liczbaElementowDoSkopiowania; i++)
    *(cel + i) = *(zrodlo + i);
}

void kopiuj_wsk2(const double zrodlo[], double cel[], const double *ostatniElementTablicyZrodlowej)
{
  for (double *i = zrodlo; i < ostatniElementTablicyZrodlowej; i++)
    *(cel++) = *(zrodlo++);
}

int main(void)
{
  const double zrodlo[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double cel1[5], cel2[5], cel3[5];
  printf("Dane tablicy zrodlo: %.1lf %.1lf %.1lf %.1lf %.1lf\n", zrodlo[0], zrodlo[1], zrodlo[2], zrodlo[3], zrodlo[4]);
  kopiuj_tab(zrodlo, cel1, 5);
  printf("Dane tablicy cel1 po funkcji kopiuj_tab: %.1lf %.1lf %.1lf %.1lf %.1lf\n", cel1[0], cel1[1], cel1[2], cel1[3], cel1[4]);
  kopiuj_wsk(zrodlo, cel2, 5);
  printf("Dane tablicy cel2 po funkcji kopiuj_wsk: %.1lf %.1lf %.1lf %.1lf %.1lf\n", cel2[0], cel2[1], cel2[2], cel2[3], cel2[4]);
  kopiuj_wsk2(zrodlo, cel3, zrodlo + 5);
  printf("Dane tablicy cel3 po funkcji kopiuj_wsk2: %.1lf %.1lf %.1lf %.1lf %.1lf", cel3[0], cel3[1], cel3[2], cel3[3], cel3[4]);
}