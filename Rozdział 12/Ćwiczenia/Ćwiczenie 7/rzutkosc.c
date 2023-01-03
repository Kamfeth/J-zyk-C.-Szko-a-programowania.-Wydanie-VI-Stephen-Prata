/* rzutkosc.c -- symulacja rzutu koscmi*/
/* kompilowac z wielrzut.c */
#include "rzutkosc.h"
#include <stdio.h>
#include <stdlib.h>              /* potrzebujemy funkcji rand()   */
static int rzucaj(const int liczbaScianek, const int liczbaKostek)
{
    int sumaWylosowanychOczek = 0;
    for (int i = 0; i < liczbaKostek; i++)
      sumaWylosowanychOczek += rand() % liczbaScianek + 1;
    return sumaWylosowanychOczek;
}
void rzucaj_n_razy(const int liczbaKolejek, const int liczbaScianek, const int liczbaKostek)
{
    printf("\n      ");
    for (int i = 1; i <= liczbaKolejek; i++)
    {
      printf("%d ", rzucaj(liczbaScianek, liczbaKostek));
      if (i % 15 == 0)
        printf("\n      ");
    }
    putchar('\n');
}