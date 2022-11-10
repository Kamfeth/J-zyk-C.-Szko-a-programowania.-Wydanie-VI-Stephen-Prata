#include <stdio.h>

int main(void)
{
  char character;
  int numberOfProcessedCharacters = 0;
  while ((character = getchar()) != EOF)
  {
    if (character == '\n')
    {
      printf("\\n-10\n");
      numberOfProcessedCharacters = 0;
    }
    else if (character == '\t')
      printf("\\t-9 ");
    else if (character < 32)
      printf("^%c-%d ", 'A' + character, character);
    else if (character == 127)
      printf("DEL-127 ");
    else
      printf("%c-%3d ", character, character);
    numberOfProcessedCharacters++;
    if (numberOfProcessedCharacters == 10)
    {
      printf("\n");
      numberOfProcessedCharacters = 0;
    }
  }
}