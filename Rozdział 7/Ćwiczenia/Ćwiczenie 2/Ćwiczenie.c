#include <stdio.h>

int main(void)
{
  char character;
  int numberOfProcessedCharacters = 0;
  printf("Wprowadź dane tekstowe. Wpisanie znaku # kończy działanie programu: ");
  while ((character = getchar()) != '#')
  {
    character == '\n' ? printf("- 10 ") : printf("%c-%3d ", character, character);
    numberOfProcessedCharacters++;
    if (numberOfProcessedCharacters % 8 == 0 || character == '\n')
    {
      numberOfProcessedCharacters = 0;
      printf("\n");
    }
  }
  printf("\nWprowadzono znak #, miłego dnia!");
}
