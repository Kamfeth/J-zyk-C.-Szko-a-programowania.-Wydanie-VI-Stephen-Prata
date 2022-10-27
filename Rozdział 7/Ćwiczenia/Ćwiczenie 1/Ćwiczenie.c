#include <stdio.h>

int main(void)
{
  char character;
  int numberOfSpaces = 0, numberOfNewlineCharacters = 0, numberOfOtherCharacters = 0;
  printf("Wprowadź dane tekstowe. Wpisanie znaku # kończy działanie programu: ");
  while ((character = getchar()) != '#')
  {
    if (character == ' ')
      numberOfSpaces++;
    else if (character == '\n')
      numberOfNewlineCharacters++;
    else
      numberOfOtherCharacters++;
  }
  printf("Liczba wprowadzonych znaków odstępu = %d\n", numberOfSpaces);
  printf("Liczba wprowadzonych znaków nowej linii = %d\n", numberOfNewlineCharacters);
  printf("Liczba wprowadzonych pozostałych znaków = %d", numberOfOtherCharacters);
}