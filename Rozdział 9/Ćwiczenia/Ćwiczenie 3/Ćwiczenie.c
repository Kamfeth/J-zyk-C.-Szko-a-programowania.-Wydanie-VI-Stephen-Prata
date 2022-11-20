#include <stdio.h>

void printCharactersInMultipleRows(const char character, const int numberOfCharactersInRow, const int numberOfRows)
{
  for (int i = 0; i < numberOfRows; i++)
  {
    for (int j = 0; j < numberOfCharactersInRow; j++)
      putchar(character);
    putchar('\n');
  }
}

int main(void)
{
  printCharactersInMultipleRows('$', 5, 8);
}