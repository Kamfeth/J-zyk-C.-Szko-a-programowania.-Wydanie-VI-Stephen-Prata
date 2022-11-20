#include <ctype.h>
#include <stdio.h>

int getAlphabeticCharacterNumber(const char character)
{
  return isalpha(character) ? character - '@' : -1;
}

int main(void)
{
  char character;
  printf("Wprowadź dane tekstowe. Zasymulowanie znaku EOF kończy działanie programu: ");
  while ((character = getchar()) != EOF)
  {
    if (getAlphabeticCharacterNumber(toupper(character)) == -1)
      printf("Wprowadzony znak nie jest literą\n");
    else
      printf("Dla litery %c numer w alfabecie wynosi: %d\n", character, getAlphabeticCharacterNumber(toupper(character)));
  }
  printf("Koniec działania programu, życzę miłego dnia!\n");
}