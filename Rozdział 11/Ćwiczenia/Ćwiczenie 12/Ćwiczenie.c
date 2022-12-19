#include <ctype.h>
#include <stdio.h>

int main(void)
{
  printf("Wprowadź dane wejściowe - wprowadzenie znaku EOF kończy pobieranie danych: ");
  char character, previousCharacter = '0';
  int numberOfWords = 1, numberOfUppercaseChars = 0, numberOfLowercaseChars = 0, numberOfPunctuationMarks = 0, numberOfDigits = 0;
  while ((character = getchar()) != EOF)
  {
    if (isupper(character))
      numberOfUppercaseChars++;
    else if (islower(character))
      numberOfLowercaseChars++;
    else if (ispunct(character))
      numberOfPunctuationMarks++;
    else if (isdigit(character))
      numberOfDigits++;
    if (isalnum(character) && previousCharacter == ' ')
      numberOfWords++;
    previousCharacter = character;
  }
  printf("\nLiczba wprowadzonych słów: %d\n", numberOfWords);
  printf("Liczba wprowadzonych wielkich liter: %d\n", numberOfUppercaseChars);
  printf("Liczba wprowadzonych małych iter: %d\n", numberOfLowercaseChars);
  printf("Liczba wprowadzonych znaków przestankowych: %d\n", numberOfPunctuationMarks);
  printf("Liczba wprowadzonych cyfr: %d\n", numberOfDigits);
}