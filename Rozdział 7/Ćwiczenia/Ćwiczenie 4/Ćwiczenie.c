#include <stdio.h>

int main(void)
{
  char character;
  int numberOfChanges = 0;
  printf("Wprowadź dane tekstowe. Wpisanie znaku # kończy działanie programu: ");
  while ((character = getchar()) != '#')
  {
    if (character == '.' || character == '!')
    {
      character == '.' ? putchar('!') : printf("!!");
      numberOfChanges++;
    }
    else
      putchar(character);
  }
  printf("\nProgram w trakcie odczytywania danych dokonał %d zmian", numberOfChanges);
}
