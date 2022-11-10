#include <stdio.h>

int main(void)
{
  int numberOfTypedCharacters = 0;
  printf("Wprowadź dane tekstowe. Zasymulowanie znaku EOF kończy działanie programu: ");
  while (getchar() != EOF)
    numberOfTypedCharacters++;
  printf("\nLiczba wprowadzonych znaków: %d\n", numberOfTypedCharacters);
}