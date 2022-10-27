#include <stdio.h>

int main(void)
{
  char character;
  int numberOfChanges = 0;
  printf("Wprowadź dane tekstowe. Wpisanie znaku # kończy działanie programu: ");
  while ((character = getchar()) != '#')
  {
    switch (character)
    {
      case '.':
        putchar('!');
        break;
      case '!':
        printf("!!");
        break;
      default:
        putchar(character);
    }
    if (character == '.' || character == '!')
      numberOfChanges++;
  }
  printf("\nProgram w trakcie odczytywania danych dokonał %d zmian", numberOfChanges);
}
