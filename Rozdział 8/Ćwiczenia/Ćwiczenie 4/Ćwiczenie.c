#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  char character;
  int numberOfWords = 0, numberOfLetters = 0;
  bool isAlphabeticCharacter = true;
  while ((character = getchar()) != EOF)
  {
    if (isAlphabeticCharacter && (ispunct(character) && character != '\'' || isspace(character)))
      numberOfWords++;
    isAlphabeticCharacter = isalpha(character);
    if (isAlphabeticCharacter)
      numberOfLetters++;
  }
  printf("Średnia liczba liter w tekście (litery / słowa) wynosi: %.2lf\n", 1.0 * numberOfLetters / numberOfWords);
}