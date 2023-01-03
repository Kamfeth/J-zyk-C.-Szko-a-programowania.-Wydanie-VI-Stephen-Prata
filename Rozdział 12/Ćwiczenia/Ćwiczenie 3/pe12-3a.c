#include <stdio.h>

void wybierz_tryb(const int tryb, int *ostatniTryb)
{
  switch (tryb)
  {
    case 0:
    case 1:
      *ostatniTryb = tryb;
      break;
    default:
      printf("Podano nieprawidlowa wartosc. Wybrano system %d(%s).\n", *ostatniTryb, *ostatniTryb == 0 ? "metryczny" : "US");
  }
}

void pobierz_dane(const int tryb, double *przebytyDystans, double *zuzytePaliwo)
{
  printf("Wprowadz przebyta odleglosc w %s: ", tryb == 0 ? "kilometrach" : "milach");
  scanf("%lf", przebytyDystans);
  printf("Wprowadz zuzyte paliwo w %s: ", tryb == 0 ? "litrach" : "galonach");
  scanf("%lf", zuzytePaliwo);
}

void wyswietl_dane(const int tryb, const double przebytyDystans, const double zuzytePaliwo)
{
  const double zuzycie = tryb == 0 ? zuzytePaliwo * 100 / przebytyDystans : przebytyDystans / zuzytePaliwo;
  printf("Zuzycie paliwa wynioslo %.*lf %s\n", tryb == 0 ? 2 : 1, zuzycie, tryb == 0 ? "litrow na 100 km." : "mil na galon.");
}