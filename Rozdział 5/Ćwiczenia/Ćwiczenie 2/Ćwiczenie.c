#include <stdio.h>

int main(void)
{
  int number;
  printf("Podaj liczbę całkowitą: ");
  scanf("%d", &number);
  printf("Wyświetlam liczby całkowite od %d do %d:\n", number, number + 10);
  for (int i = number; i <= number + 10; i++)
    printf("%d ", i);
}