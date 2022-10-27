#include <stdio.h>

int main(void)
{
  char previousCharacter = ' ', nextCharacter;
  int numberOfDesiredSubstrings = 0;
  printf("Wprowadź dane tekstowe. Wpisanie znaku # kończy działanie programu: ");
  while ((nextCharacter = getchar()) != '#')
  {
    if (previousCharacter == 'o' && nextCharacter == 't')
      numberOfDesiredSubstrings++;
    previousCharacter = nextCharacter;
  }
  printf("We wprowadzonych danych tekstowych, łańcuch znaków \"ot\" pojawił się %d razy", numberOfDesiredSubstrings);
}
