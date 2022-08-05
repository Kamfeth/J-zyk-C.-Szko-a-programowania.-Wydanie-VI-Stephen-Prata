#include <stdio.h>

int main(void)
{
  double waterVolumeInLiters;
  printf("Podaj objętość wody w litrach: ");
  scanf("%lf", &waterVolumeInLiters);
  printf("Liczba cząsteczek wody w %lf litrach wody wynosi %le", waterVolumeInLiters, waterVolumeInLiters * 1000 / 3e-23);
}