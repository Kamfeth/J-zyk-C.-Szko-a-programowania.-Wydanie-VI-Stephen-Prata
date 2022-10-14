#include <stdio.h>

int main(void)
{
  char capitalLetter;
  printf("Wprowadź wielką literę z alfabetu łacińskiego: ");
  scanf("%c", &capitalLetter);
  for (int i = 0; i < capitalLetter - '@'; i++)
  {
    for (int j = 0; j < capitalLetter - 'A' - i; j++)
      printf(" ");
    for (char character = 'A'; character <= 'A' + i; character++)
      printf("%c", character);
    for (char character = '@' + i; character >= 'A'; character--)
      printf("%c", character);
    printf("\n");
  }
}