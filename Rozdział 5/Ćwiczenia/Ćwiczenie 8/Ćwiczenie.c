#include <stdio.h>

int main(void)
{
  int divider, dividend;
  printf("Program obliczajacy reszte z dzielenia.\nPodaj dzielnik (liczba calkowita): ");
  scanf("%d", &divider);
  printf("Podaj dzielna: ");
  while (scanf("%d", &dividend) && dividend > 0)
    printf("%d %% %d wynosi %d\nPodaj dzielna (<= 0, aby zakonczyc): ", dividend, divider, dividend % divider);
  printf("Koniec");
}