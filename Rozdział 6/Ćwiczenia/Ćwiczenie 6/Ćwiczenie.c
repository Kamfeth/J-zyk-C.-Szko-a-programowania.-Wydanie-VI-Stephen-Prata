#include <stdio.h>

int main(void)
{
  long long lowerLimit, upperLimit;
  printf("Wprowadź dolną granicę tabeli w postaci liczby całkowitej: ");
  scanf("%lld", &lowerLimit);
  printf("Wprowadź górną granicę tabeli w postaci liczby całkowitej: ");
  scanf("%lld", &upperLimit);
  printf("|%-20s|%-20s|%-21s|\n", "Liczba", "Kwadrat", "Sześcian");
  for (long long i = lowerLimit; i <= upperLimit; i++)
    printf("|%-20lld|%-20lld|%-20lld|\n", i, i * i, i * i * i);
}