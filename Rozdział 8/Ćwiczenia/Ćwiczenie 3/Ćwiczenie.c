#include <ctype.h>
#include <stdio.h>

int main(void)
{
  char character;
  int numberOfLowercaseCharacters = 0, numberOfUppercaseCharacters = 0, numberOfOtherCharacters = 0;
  while ((character = getchar()) != EOF)
  {
    if (islower(character))
      numberOfLowercaseCharacters++;
    else if (isupper(character))
      numberOfUppercaseCharacters++;
    else
      numberOfOtherCharacters++;
  }
  printf("Odczytany fragment tekstu zawiera:\n");
  printf("%d małych liter\n", numberOfLowercaseCharacters);
  printf("%d dużych liter\n", numberOfUppercaseCharacters);
  printf("%d pozostałych znaków\n", numberOfOtherCharacters);
}