/* wielrzut.c -- wielokrotny rzut koscmi            */
/* kompilowac z rzutkosc.c                          */
#include <stdio.h>
#include <stdlib.h>              /* potrzeba funkcji srand() */
#include <time.h>                /* potrzeba funkcji time()  */
#include "rzutkosc.h"            /* potrzeba funkcji rzucaj_n_razy()   */
                                 /* i zmiennej liczba_rzutow */
int main(void)
{
  int liczbaKolejek, scianki, kosci, liczbaPrawidlowoWprowadzonychDanych;
  srand(time(NULL)); /* losowe ziarno      */
  printf("Wprowadz liczbe kolejek; wybierz q, aby zakonczyc.\n");
  while (scanf("%d", &liczbaKolejek))
  {
      if (liczbaKolejek < 1)
      {
        printf("Wymagany co najmniej 1 rzut - spróbuj jeszcze raz\n");
        while (getchar() != '\n');
        continue;
      }
      printf("Ile scian i ile kosci?\n");
      while ((liczbaPrawidlowoWprowadzonychDanych = scanf("%d%d", &scianki, &kosci)) != 2 || scianki < 2 || kosci < 1)
      {
        if (liczbaPrawidlowoWprowadzonychDanych == 0)
        {
          printf("Należy podać dwie liczby całkowite - spróbuj jeszcze raz.\n");
          while (getchar() != '\n');
          continue;
        }
        else if (liczbaPrawidlowoWprowadzonychDanych == 1)
        {
          printf("Nie wprowadzono prawidłowej liczby kości - spróbuj jeszcze raz.\n");
          while (getchar() != '\n');
          continue;
        }
        else if (scianki < 2)
        {
          printf("Wymagane sa co najmniej 2 scianki.\n");
          continue;
        }
        else if (kosci < 1)
        {
          printf("Wymagana jest co najmniej 1 kość.\n");
          continue;
        }
      }
      printf("Oto %d kolejek rzutow %d %d-sciennymi kostkami:", liczbaKolejek, kosci, scianki);
      rzucaj_n_razy(liczbaKolejek, scianki, kosci);
      printf("Wprowadz liczbe kolejek; wybierz q, aby zakonczyc.\n");
  }
}