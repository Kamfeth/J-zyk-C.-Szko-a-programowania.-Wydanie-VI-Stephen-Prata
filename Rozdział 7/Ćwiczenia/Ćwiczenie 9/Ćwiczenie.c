#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  int naturalNumber;
  printf("Wprowadź liczbę naturalną: ");
  scanf("%d", &naturalNumber);
  printf("Poniżej znajdują się wszystkie liczby pierwsze w przedziale od 2 do %d:\n", naturalNumber);
  for (int i = 2; i <= naturalNumber; i++)
  {
    bool isPrimeNumber = true;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
        isPrimeNumber = false;
    }
    if (isPrimeNumber)
      printf("%d ", i);
  }
}
