#include <stdio.h>

int main(void)
{
  for (int i = 0; i < 6; i++)
  {
    for (char character = 'F'; character >= 'F' - i; character--)
      printf("%c", character);
    printf("\n");
  }
}