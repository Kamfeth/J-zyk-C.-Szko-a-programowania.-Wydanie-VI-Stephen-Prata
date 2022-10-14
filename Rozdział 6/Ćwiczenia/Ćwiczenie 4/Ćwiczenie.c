#include <stdio.h>

int main(void)
{
  char character = 'A';
  for (int i = 1; i <= 6; i++)
  {
    for (int j = 0; j < i; j++, character++)
      printf("%c", character);
    printf("\n");
  }
}