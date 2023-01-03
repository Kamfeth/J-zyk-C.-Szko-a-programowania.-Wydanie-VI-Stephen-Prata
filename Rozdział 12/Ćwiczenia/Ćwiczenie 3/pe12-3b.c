// pe12-3b.c
// kompilowac z pe12-3a.c
#include <stdio.h>
#include "pe12-3a.h"
int main(void)
{
      int tryb, ostatniTryb = 0;
      printf("Wybierz: 0 - system metryczny, 1 - system US: ");
      scanf("%d", &tryb);
      while( tryb >= 0 )
      {
             wybierz_tryb(tryb, &ostatniTryb);
             tryb = ostatniTryb;
             double przebytyDystans, zuzytePaliwo;
             pobierz_dane(tryb, &przebytyDystans, &zuzytePaliwo);
             wyswietl_dane(tryb, przebytyDystans, zuzytePaliwo);
             printf("Wybierz: 0 - system metryczny, 1 - system US");
             printf(" (-1 aby zakonczyc): ");
             scanf("%d", &tryb);
      }
      printf("Koniec.\n");
      return 0;
}